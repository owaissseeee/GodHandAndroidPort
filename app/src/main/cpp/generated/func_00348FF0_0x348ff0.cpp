#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00348FF0
// Address: 0x348ff0 - 0x3490b0
void func_00348FF0_0x348ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348FF0_0x348ff0");
#endif

    switch (ctx->pc) {
        case 0x348ff0u: goto label_348ff0;
        case 0x348ff4u: goto label_348ff4;
        case 0x348ff8u: goto label_348ff8;
        case 0x348ffcu: goto label_348ffc;
        case 0x349000u: goto label_349000;
        case 0x349004u: goto label_349004;
        case 0x349008u: goto label_349008;
        case 0x34900cu: goto label_34900c;
        case 0x349010u: goto label_349010;
        case 0x349014u: goto label_349014;
        case 0x349018u: goto label_349018;
        case 0x34901cu: goto label_34901c;
        case 0x349020u: goto label_349020;
        case 0x349024u: goto label_349024;
        case 0x349028u: goto label_349028;
        case 0x34902cu: goto label_34902c;
        case 0x349030u: goto label_349030;
        case 0x349034u: goto label_349034;
        case 0x349038u: goto label_349038;
        case 0x34903cu: goto label_34903c;
        case 0x349040u: goto label_349040;
        case 0x349044u: goto label_349044;
        case 0x349048u: goto label_349048;
        case 0x34904cu: goto label_34904c;
        case 0x349050u: goto label_349050;
        case 0x349054u: goto label_349054;
        case 0x349058u: goto label_349058;
        case 0x34905cu: goto label_34905c;
        case 0x349060u: goto label_349060;
        case 0x349064u: goto label_349064;
        case 0x349068u: goto label_349068;
        case 0x34906cu: goto label_34906c;
        case 0x349070u: goto label_349070;
        case 0x349074u: goto label_349074;
        case 0x349078u: goto label_349078;
        case 0x34907cu: goto label_34907c;
        case 0x349080u: goto label_349080;
        case 0x349084u: goto label_349084;
        case 0x349088u: goto label_349088;
        case 0x34908cu: goto label_34908c;
        case 0x349090u: goto label_349090;
        case 0x349094u: goto label_349094;
        case 0x349098u: goto label_349098;
        case 0x34909cu: goto label_34909c;
        case 0x3490a0u: goto label_3490a0;
        case 0x3490a4u: goto label_3490a4;
        case 0x3490a8u: goto label_3490a8;
        case 0x3490acu: goto label_3490ac;
        default: break;
    }

    ctx->pc = 0x348ff0u;

label_348ff0:
    // 0x348ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_348ff4:
    // 0x348ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348ff8:
    // 0x348ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348ffc:
    // 0x348ffc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_349000:
    // 0x349000: 0xc0d26e2  jal         func_349B88
label_349004:
    if (ctx->pc == 0x349004u) {
        ctx->pc = 0x349004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349000u;
        // 0x349004: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349008u;
        goto label_349008;
    }
    ctx->pc = 0x349000u;
    SET_GPR_U32(ctx, 31, 0x349008u);
    ctx->pc = 0x349004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349000u;
    // 0x349004: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349B88u, 0x349000u, 0x349008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349008u;
label_349008:
    // 0x349008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x349008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34900c:
    // 0x34900c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_349010:
    if (ctx->pc == 0x349010u) {
        ctx->pc = 0x349010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34900Cu;
        // 0x349010: 0x8e0401bc  lw          $a0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349014u;
        goto label_349014;
    }
    ctx->pc = 0x34900Cu;
    {
        const bool branch_taken_0x34900c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34900c) {
            ctx->pc = 0x349010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34900Cu;
            // 0x349010: 0x8e0401bc  lw          $a0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349020u;
            goto label_349020;
        }
    }
    ctx->pc = 0x349014u;
label_349014:
    // 0x349014: 0x10000021  b           . + 4 + (0x21 << 2)
label_349018:
    if (ctx->pc == 0x349018u) {
        ctx->pc = 0x349018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349014u;
        // 0x349018: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34901Cu;
        goto label_34901c;
    }
    ctx->pc = 0x349014u;
    {
        const bool branch_taken_0x349014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349014u;
        // 0x349018: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349014) {
            ctx->pc = 0x34909Cu;
            goto label_34909c;
        }
    }
    ctx->pc = 0x34901Cu;
label_34901c:
    // 0x34901c: 0x0  nop
    ctx->pc = 0x34901cu;
    // NOP
label_349020:
    // 0x349020: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_349024:
    if (ctx->pc == 0x349024u) {
        ctx->pc = 0x349024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349020u;
        // 0x349024: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349028u;
        goto label_349028;
    }
    ctx->pc = 0x349020u;
    {
        const bool branch_taken_0x349020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349020) {
            ctx->pc = 0x349024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349020u;
            // 0x349024: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34903Cu;
            goto label_34903c;
        }
    }
    ctx->pc = 0x349028u;
label_349028:
    // 0x349028: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x349028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34902c:
    // 0x34902c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x34902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_349030:
    // 0x349030: 0x40f809  jalr        $v0
label_349034:
    if (ctx->pc == 0x349034u) {
        ctx->pc = 0x349038u;
        goto label_349038;
    }
    ctx->pc = 0x349030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x349038u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349030u, 0x349038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x349038u;
label_349038:
    // 0x349038: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x349038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_34903c:
    // 0x34903c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x34903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_349040:
    // 0x349040: 0x8e0601b0  lw          $a2, 0x1B0($s0)
    ctx->pc = 0x349040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_349044:
    // 0x349044: 0x8e0701b4  lw          $a3, 0x1B4($s0)
    ctx->pc = 0x349044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_349048:
    // 0x349048: 0xc0d26b4  jal         func_349AD0
label_34904c:
    if (ctx->pc == 0x34904Cu) {
        ctx->pc = 0x34904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349048u;
        // 0x34904c: 0x8e0801b8  lw          $t0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349050u;
        goto label_349050;
    }
    ctx->pc = 0x349048u;
    SET_GPR_U32(ctx, 31, 0x349050u);
    ctx->pc = 0x34904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349048u;
    // 0x34904c: 0x8e0801b8  lw          $t0, 0x1B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349AD0u, 0x349048u, 0x349050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349050u;
label_349050:
    // 0x349050: 0xc0d26d2  jal         func_349B48
label_349054:
    if (ctx->pc == 0x349054u) {
        ctx->pc = 0x349054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349050u;
        // 0x349054: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349058u;
        goto label_349058;
    }
    ctx->pc = 0x349050u;
    SET_GPR_U32(ctx, 31, 0x349058u);
    ctx->pc = 0x349054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349050u;
    // 0x349054: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349B48u, 0x349050u, 0x349058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349058u;
label_349058:
    // 0x349058: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x349058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34905c:
    // 0x34905c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_349060:
    if (ctx->pc == 0x349060u) {
        ctx->pc = 0x349060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34905Cu;
        // 0x349060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349064u;
        goto label_349064;
    }
    ctx->pc = 0x34905Cu;
    {
        const bool branch_taken_0x34905c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x349060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34905Cu;
        // 0x349060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34905c) {
            ctx->pc = 0x349090u;
            goto label_349090;
        }
    }
    ctx->pc = 0x349064u;
label_349064:
    // 0x349064: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x349064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_349068:
    // 0x349068: 0x2404ff9a  addiu       $a0, $zero, -0x66
    ctx->pc = 0x349068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
label_34906c:
    // 0x34906c: 0xc0d15d4  jal         func_345750
label_349070:
    if (ctx->pc == 0x349070u) {
        ctx->pc = 0x349070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34906Cu;
        // 0x349070: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349074u;
        goto label_349074;
    }
    ctx->pc = 0x34906Cu;
    SET_GPR_U32(ctx, 31, 0x349074u);
    ctx->pc = 0x349070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34906Cu;
    // 0x349070: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x34906Cu, 0x349074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349074u;
label_349074:
    // 0x349074: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x349074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_349078:
    // 0x349078: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x349078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_34907c:
    // 0x34907c: 0xc0d22f8  jal         func_348BE0
label_349080:
    if (ctx->pc == 0x349080u) {
        ctx->pc = 0x349080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34907Cu;
        // 0x349080: 0x24849300  addiu       $a0, $a0, -0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349084u;
        goto label_349084;
    }
    ctx->pc = 0x34907Cu;
    SET_GPR_U32(ctx, 31, 0x349084u);
    ctx->pc = 0x349080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34907Cu;
    // 0x349080: 0x24849300  addiu       $a0, $a0, -0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34907Cu, 0x349084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349084u;
label_349084:
    // 0x349084: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x349084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_349088:
    // 0x349088: 0x10000004  b           . + 4 + (0x4 << 2)
label_34908c:
    if (ctx->pc == 0x34908Cu) {
        ctx->pc = 0x34908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349088u;
        // 0x34908c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349090u;
        goto label_349090;
    }
    ctx->pc = 0x349088u;
    {
        const bool branch_taken_0x349088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349088u;
        // 0x34908c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349088) {
            ctx->pc = 0x34909Cu;
            goto label_34909c;
        }
    }
    ctx->pc = 0x349090u;
label_349090:
    // 0x349090: 0xc0d0bfe  jal         func_342FF8
label_349094:
    if (ctx->pc == 0x349094u) {
        ctx->pc = 0x349098u;
        goto label_349098;
    }
    ctx->pc = 0x349090u;
    SET_GPR_U32(ctx, 31, 0x349098u);
    ctx->pc = 0x342FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342FF8u, 0x349090u, 0x349098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349098u;
label_349098:
    // 0x349098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34909c:
    // 0x34909c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34909cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3490a0:
    // 0x3490a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3490a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3490a4:
    // 0x3490a4: 0x3e00008  jr          $ra
label_3490a8:
    if (ctx->pc == 0x3490A8u) {
        ctx->pc = 0x3490A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490A4u;
        // 0x3490a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3490ACu;
        goto label_3490ac;
    }
    ctx->pc = 0x3490A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3490A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490A4u;
        // 0x3490a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3490A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3490ACu;
label_3490ac:
    // 0x3490ac: 0x0  nop
    ctx->pc = 0x3490acu;
    // NOP
    ctx->pc = 0x3490b0u;
}
