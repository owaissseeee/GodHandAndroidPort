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

// Function: func_00338FD8
// Address: 0x338fd8 - 0x3390b8
void func_00338FD8_0x338fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338FD8_0x338fd8");
#endif

    switch (ctx->pc) {
        case 0x338fd8u: goto label_338fd8;
        case 0x338fdcu: goto label_338fdc;
        case 0x338fe0u: goto label_338fe0;
        case 0x338fe4u: goto label_338fe4;
        case 0x338fe8u: goto label_338fe8;
        case 0x338fecu: goto label_338fec;
        case 0x338ff0u: goto label_338ff0;
        case 0x338ff4u: goto label_338ff4;
        case 0x338ff8u: goto label_338ff8;
        case 0x338ffcu: goto label_338ffc;
        case 0x339000u: goto label_339000;
        case 0x339004u: goto label_339004;
        case 0x339008u: goto label_339008;
        case 0x33900cu: goto label_33900c;
        case 0x339010u: goto label_339010;
        case 0x339014u: goto label_339014;
        case 0x339018u: goto label_339018;
        case 0x33901cu: goto label_33901c;
        case 0x339020u: goto label_339020;
        case 0x339024u: goto label_339024;
        case 0x339028u: goto label_339028;
        case 0x33902cu: goto label_33902c;
        case 0x339030u: goto label_339030;
        case 0x339034u: goto label_339034;
        case 0x339038u: goto label_339038;
        case 0x33903cu: goto label_33903c;
        case 0x339040u: goto label_339040;
        case 0x339044u: goto label_339044;
        case 0x339048u: goto label_339048;
        case 0x33904cu: goto label_33904c;
        case 0x339050u: goto label_339050;
        case 0x339054u: goto label_339054;
        case 0x339058u: goto label_339058;
        case 0x33905cu: goto label_33905c;
        case 0x339060u: goto label_339060;
        case 0x339064u: goto label_339064;
        case 0x339068u: goto label_339068;
        case 0x33906cu: goto label_33906c;
        case 0x339070u: goto label_339070;
        case 0x339074u: goto label_339074;
        case 0x339078u: goto label_339078;
        case 0x33907cu: goto label_33907c;
        case 0x339080u: goto label_339080;
        case 0x339084u: goto label_339084;
        case 0x339088u: goto label_339088;
        case 0x33908cu: goto label_33908c;
        case 0x339090u: goto label_339090;
        case 0x339094u: goto label_339094;
        case 0x339098u: goto label_339098;
        case 0x33909cu: goto label_33909c;
        case 0x3390a0u: goto label_3390a0;
        case 0x3390a4u: goto label_3390a4;
        case 0x3390a8u: goto label_3390a8;
        case 0x3390acu: goto label_3390ac;
        case 0x3390b0u: goto label_3390b0;
        case 0x3390b4u: goto label_3390b4;
        default: break;
    }

    ctx->pc = 0x338fd8u;

label_338fd8:
    // 0x338fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_338fdc:
    // 0x338fdc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x338fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338fe0:
    // 0x338fe0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_338fe4:
    if (ctx->pc == 0x338FE4u) {
        ctx->pc = 0x338FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FE0u;
        // 0x338fe4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338FE8u;
        goto label_338fe8;
    }
    ctx->pc = 0x338FE0u;
    {
        const bool branch_taken_0x338fe0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x338FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FE0u;
        // 0x338fe4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338fe0) {
            ctx->pc = 0x339008u;
            goto label_339008;
        }
    }
    ctx->pc = 0x338FE8u;
label_338fe8:
    // 0x338fe8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_338fec:
    // 0x338fec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x338fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_338ff0:
    // 0x338ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338ff4:
    // 0x338ff4: 0x248459d0  addiu       $a0, $a0, 0x59D0
    ctx->pc = 0x338ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22992));
label_338ff8:
    // 0x338ff8: 0x24a55920  addiu       $a1, $a1, 0x5920
    ctx->pc = 0x338ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
label_338ffc:
    // 0x338ffc: 0x80ce292  j           func_338A48
label_339000:
    if (ctx->pc == 0x339000u) {
        ctx->pc = 0x339000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FFCu;
        // 0x339000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339004u;
        goto label_339004;
    }
    ctx->pc = 0x338FFCu;
    ctx->pc = 0x339000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338FFCu;
    // 0x339000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338FFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339004u;
label_339004:
    // 0x339004: 0x0  nop
    ctx->pc = 0x339004u;
    // NOP
label_339008:
    // 0x339008: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x339008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_33900c:
    // 0x33900c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_339010:
    if (ctx->pc == 0x339010u) {
        ctx->pc = 0x339010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33900Cu;
        // 0x339010: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339014u;
        goto label_339014;
    }
    ctx->pc = 0x33900Cu;
    {
        const bool branch_taken_0x33900c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33900Cu;
        // 0x339010: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33900c) {
            ctx->pc = 0x339030u;
            goto label_339030;
        }
    }
    ctx->pc = 0x339014u;
label_339014:
    // 0x339014: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339018:
    // 0x339018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33901c:
    // 0x33901c: 0x248459e0  addiu       $a0, $a0, 0x59E0
    ctx->pc = 0x33901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23008));
label_339020:
    // 0x339020: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x339020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_339024:
    // 0x339024: 0x80ce292  j           func_338A48
label_339028:
    if (ctx->pc == 0x339028u) {
        ctx->pc = 0x339028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339024u;
        // 0x339028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33902Cu;
        goto label_33902c;
    }
    ctx->pc = 0x339024u;
    ctx->pc = 0x339028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339024u;
    // 0x339028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x339024u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33902Cu;
label_33902c:
    // 0x33902c: 0x0  nop
    ctx->pc = 0x33902cu;
    // NOP
label_339030:
    // 0x339030: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_339034:
    if (ctx->pc == 0x339034u) {
        ctx->pc = 0x339034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339030u;
        // 0x339034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339038u;
        goto label_339038;
    }
    ctx->pc = 0x339030u;
    {
        const bool branch_taken_0x339030 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x339034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339030u;
        // 0x339034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339030) {
            ctx->pc = 0x339048u;
            goto label_339048;
        }
    }
    ctx->pc = 0x339038u;
label_339038:
    // 0x339038: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x339038u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_33903c:
    // 0x33903c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_339040:
    if (ctx->pc == 0x339040u) {
        ctx->pc = 0x339040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33903Cu;
        // 0x339040: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339044u;
        goto label_339044;
    }
    ctx->pc = 0x33903Cu;
    {
        const bool branch_taken_0x33903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33903Cu;
        // 0x339040: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33903c) {
            ctx->pc = 0x3390A8u;
            goto label_3390a8;
        }
    }
    ctx->pc = 0x339044u;
label_339044:
    // 0x339044: 0x0  nop
    ctx->pc = 0x339044u;
    // NOP
label_339048:
    // 0x339048: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
label_33904c:
    if (ctx->pc == 0x33904Cu) {
        ctx->pc = 0x33904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339048u;
        // 0x33904c: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339050u;
        goto label_339050;
    }
    ctx->pc = 0x339048u;
    {
        const bool branch_taken_0x339048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x339048) {
            ctx->pc = 0x33904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339048u;
            // 0x33904c: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339090u;
            goto label_339090;
        }
    }
    ctx->pc = 0x339050u;
label_339050:
    // 0x339050: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x339050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_339054:
    // 0x339054: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x339054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_339058:
    // 0x339058: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x339058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_33905c:
    // 0x33905c: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x33905cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_339060:
    // 0x339060: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x339060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_339064:
    // 0x339064: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x339064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_339068:
    // 0x339068: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x339068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_33906c:
    // 0x33906c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339070:
    // 0x339070: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x339070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_339074:
    // 0x339074: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x339074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
label_339078:
    // 0x339078: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x339078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_33907c:
    // 0x33907c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_339080:
    // 0x339080: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x339080u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_339084:
    // 0x339084: 0x10000008  b           . + 4 + (0x8 << 2)
label_339088:
    if (ctx->pc == 0x339088u) {
        ctx->pc = 0x339088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339084u;
        // 0x339088: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33908Cu;
        goto label_33908c;
    }
    ctx->pc = 0x339084u;
    {
        const bool branch_taken_0x339084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339084u;
        // 0x339088: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339084) {
            ctx->pc = 0x3390A8u;
            goto label_3390a8;
        }
    }
    ctx->pc = 0x33908Cu;
label_33908c:
    // 0x33908c: 0x0  nop
    ctx->pc = 0x33908cu;
    // NOP
label_339090:
    // 0x339090: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x339090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_339094:
    // 0x339094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_339098:
    if (ctx->pc == 0x339098u) {
        ctx->pc = 0x339098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339094u;
        // 0x339098: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33909Cu;
        goto label_33909c;
    }
    ctx->pc = 0x339094u;
    {
        const bool branch_taken_0x339094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339094u;
        // 0x339098: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339094) {
            ctx->pc = 0x3390A8u;
            goto label_3390a8;
        }
    }
    ctx->pc = 0x33909Cu;
label_33909c:
    // 0x33909c: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x33909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3390a0:
    // 0x3390a0: 0x40f809  jalr        $v0
label_3390a4:
    if (ctx->pc == 0x3390A4u) {
        ctx->pc = 0x3390A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390A0u;
        // 0x3390a4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390A8u;
        goto label_3390a8;
    }
    ctx->pc = 0x3390A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3390A8u);
        ctx->pc = 0x3390A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390A0u;
        // 0x3390a4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3390A0u, 0x3390A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3390A8u;
label_3390a8:
    // 0x3390a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3390a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3390ac:
    // 0x3390ac: 0x3e00008  jr          $ra
label_3390b0:
    if (ctx->pc == 0x3390B0u) {
        ctx->pc = 0x3390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390ACu;
        // 0x3390b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390B4u;
        goto label_3390b4;
    }
    ctx->pc = 0x3390ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390ACu;
        // 0x3390b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3390ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3390B4u;
label_3390b4:
    // 0x3390b4: 0x0  nop
    ctx->pc = 0x3390b4u;
    // NOP
    ctx->pc = 0x3390b8u;
}
