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

// Function: func_00257E90
// Address: 0x257e90 - 0x2580b8
void func_00257E90_0x257e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00257E90_0x257e90");
#endif

    switch (ctx->pc) {
        case 0x257eecu: goto label_257eec;
        case 0x257f34u: goto label_257f34;
        case 0x257f3cu: goto label_257f3c;
        case 0x257f58u: goto label_257f58;
        case 0x257f88u: goto label_257f88;
        case 0x257fb8u: goto label_257fb8;
        case 0x257fc4u: goto label_257fc4;
        case 0x257fd4u: goto label_257fd4;
        case 0x25801cu: goto label_25801c;
        case 0x258030u: goto label_258030;
        case 0x258040u: goto label_258040;
        case 0x25806cu: goto label_25806c;
        case 0x258074u: goto label_258074;
        case 0x258084u: goto label_258084;
        case 0x258098u: goto label_258098;
        case 0x2580a4u: goto label_2580a4;
        default: break;
    }

    ctx->pc = 0x257e90u;

    // 0x257e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257e98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x257e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x257e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ea4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x257ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x257ea8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x257ea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x257eac: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x257EACu;
    {
        const bool branch_taken_0x257eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EACu;
        // 0x257eb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257eac) {
            ctx->pc = 0x257F80u;
            goto label_257f80;
        }
    }
    ctx->pc = 0x257EB4u;
    // 0x257eb4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x257EB4u;
    {
        const bool branch_taken_0x257eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257eb4) {
            ctx->pc = 0x257EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257EB4u;
            // 0x257eb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257ECCu;
            goto label_257ecc;
        }
    }
    ctx->pc = 0x257EBCu;
    // 0x257ebc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x257EBCu;
    {
        const bool branch_taken_0x257ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257ebc) {
            ctx->pc = 0x257EE4u;
            goto label_257ee4;
        }
    }
    ctx->pc = 0x257EC4u;
    // 0x257ec4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x257EC4u;
    {
        const bool branch_taken_0x257ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EC4u;
        // 0x257ec8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ec4) {
            ctx->pc = 0x2580A8u;
            goto label_2580a8;
        }
    }
    ctx->pc = 0x257ECCu;
label_257ecc:
    // 0x257ecc: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x257ECCu;
    {
        const bool branch_taken_0x257ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257ECCu;
        // 0x257ed0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ecc) {
            ctx->pc = 0x257FCCu;
            goto label_257fcc;
        }
    }
    ctx->pc = 0x257ED4u;
    // 0x257ed4: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x257ED4u;
    {
        const bool branch_taken_0x257ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x257ed4) {
            ctx->pc = 0x258028u;
            goto label_258028;
        }
    }
    ctx->pc = 0x257EDCu;
    // 0x257edc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x257EDCu;
    {
        const bool branch_taken_0x257edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EDCu;
        // 0x257ee0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257edc) {
            ctx->pc = 0x2580A8u;
            goto label_2580a8;
        }
    }
    ctx->pc = 0x257EE4u;
label_257ee4:
    // 0x257ee4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x257EE4u;
    SET_GPR_U32(ctx, 31, 0x257EECu);
    ctx->pc = 0x257EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257EE4u;
    // 0x257ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x257EE4u, 0x257EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257EECu;
label_257eec:
    // 0x257eec: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x257eecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x257ef0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x257ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x257ef4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257EF4u;
    {
        const bool branch_taken_0x257ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EF4u;
        // 0x257ef8: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ef4) {
            ctx->pc = 0x257F0Cu;
            goto label_257f0c;
        }
    }
    ctx->pc = 0x257EFCu;
    // 0x257efc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x257efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x257f00: 0x8c431ce8  lw          $v1, 0x1CE8($v0)
    ctx->pc = 0x257f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7400)));
    // 0x257f04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257F04u;
    {
        const bool branch_taken_0x257f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F04u;
        // 0x257f08: 0x8c441cec  lw          $a0, 0x1CEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f04) {
            ctx->pc = 0x257F18u;
            goto label_257f18;
        }
    }
    ctx->pc = 0x257F0Cu;
label_257f0c:
    // 0x257f0c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x257f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x257f10: 0x8c431cf0  lw          $v1, 0x1CF0($v0)
    ctx->pc = 0x257f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7408)));
    // 0x257f14: 0x8c441cf4  lw          $a0, 0x1CF4($v0)
    ctx->pc = 0x257f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7412)));
label_257f18:
    // 0x257f18: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x257f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257f1c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x257f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257f20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x257f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x257f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f28: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x257f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x257f2c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x257F2Cu;
    SET_GPR_U32(ctx, 31, 0x257F34u);
    ctx->pc = 0x257F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F2Cu;
    // 0x257f30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x257F2Cu, 0x257F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F34u;
label_257f34:
    // 0x257f34: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x257F34u;
    SET_GPR_U32(ctx, 31, 0x257F3Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257F34u, 0x257F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F3Cu;
label_257f3c:
    // 0x257f3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257F40u;
    {
        const bool branch_taken_0x257f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F40u;
        // 0x257f44: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f40) {
            ctx->pc = 0x257F50u;
            goto label_257f50;
        }
    }
    ctx->pc = 0x257F48u;
    // 0x257f48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x257F48u;
    {
        const bool branch_taken_0x257f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F48u;
        // 0x257f4c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f48) {
            ctx->pc = 0x257F74u;
            goto label_257f74;
        }
    }
    ctx->pc = 0x257F50u;
label_257f50:
    // 0x257f50: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x257F50u;
    SET_GPR_U32(ctx, 31, 0x257F58u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257F50u, 0x257F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F58u;
label_257f58:
    // 0x257f58: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x257f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x257f5c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x257f5cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x257f60: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x257F60u;
    {
        const bool branch_taken_0x257f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257f60) {
            ctx->pc = 0x257F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257F60u;
            // 0x257f64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x257F68u;
            goto label_257f68;
        }
    }
    ctx->pc = 0x257F68u;
label_257f68:
    // 0x257f68: 0x2010  mfhi        $a0
    ctx->pc = 0x257f68u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x257f6c: 0x2484001e  addiu       $a0, $a0, 0x1E
    ctx->pc = 0x257f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
    // 0x257f70: 0xae0405f0  sw          $a0, 0x5F0($s0)
    ctx->pc = 0x257f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 4));
label_257f74:
    // 0x257f74: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x257f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x257f78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257f7c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x257f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_257f80:
    // 0x257f80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x257F80u;
    SET_GPR_U32(ctx, 31, 0x257F88u);
    ctx->pc = 0x257F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F80u;
    // 0x257f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x257F80u, 0x257F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F88u;
label_257f88:
    // 0x257f88: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x257f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x257f8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257F8Cu;
    {
        const bool branch_taken_0x257f8c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x257F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F8Cu;
        // 0x257f90: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f8c) {
            ctx->pc = 0x257F9Cu;
            goto label_257f9c;
        }
    }
    ctx->pc = 0x257F94u;
    // 0x257f94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257F94u;
    {
        const bool branch_taken_0x257f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F94u;
        // 0x257f98: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f94) {
            ctx->pc = 0x257FA4u;
            goto label_257fa4;
        }
    }
    ctx->pc = 0x257F9Cu;
label_257f9c:
    // 0x257f9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257fa0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x257fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_257fa4:
    // 0x257fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257fa8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x257fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x257fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257fb0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x257FB0u;
    SET_GPR_U32(ctx, 31, 0x257FB8u);
    ctx->pc = 0x257FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FB0u;
    // 0x257fb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x257FB0u, 0x257FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FB8u;
label_257fb8:
    // 0x257fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257fbc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x257FBCu;
    SET_GPR_U32(ctx, 31, 0x257FC4u);
    ctx->pc = 0x257FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FBCu;
    // 0x257fc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x257FBCu, 0x257FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FC4u;
label_257fc4:
    // 0x257fc4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x257FC4u;
    {
        const bool branch_taken_0x257fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FC4u;
        // 0x257fc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fc4) {
            ctx->pc = 0x2580A8u;
            goto label_2580a8;
        }
    }
    ctx->pc = 0x257FCCu;
label_257fcc:
    // 0x257fcc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x257FCCu;
    SET_GPR_U32(ctx, 31, 0x257FD4u);
    ctx->pc = 0x257FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FCCu;
    // 0x257fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x257FCCu, 0x257FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FD4u;
label_257fd4:
    // 0x257fd4: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x257fd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x257fd8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x257fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x257fdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257FDCu;
    {
        const bool branch_taken_0x257fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FDCu;
        // 0x257fe0: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fdc) {
            ctx->pc = 0x257FF4u;
            goto label_257ff4;
        }
    }
    ctx->pc = 0x257FE4u;
    // 0x257fe4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x257fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x257fe8: 0x8c431d40  lw          $v1, 0x1D40($v0)
    ctx->pc = 0x257fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7488)));
    // 0x257fec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257FECu;
    {
        const bool branch_taken_0x257fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FECu;
        // 0x257ff0: 0x8c441d44  lw          $a0, 0x1D44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fec) {
            ctx->pc = 0x258000u;
            goto label_258000;
        }
    }
    ctx->pc = 0x257FF4u;
label_257ff4:
    // 0x257ff4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x257ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x257ff8: 0x8c431d48  lw          $v1, 0x1D48($v0)
    ctx->pc = 0x257ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7496)));
    // 0x257ffc: 0x8c441d4c  lw          $a0, 0x1D4C($v0)
    ctx->pc = 0x257ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7500)));
label_258000:
    // 0x258000: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258004: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x258004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25800c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25800cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258010: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x258010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258014: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x258014u;
    SET_GPR_U32(ctx, 31, 0x25801Cu);
    ctx->pc = 0x258018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258014u;
    // 0x258018: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x258014u, 0x25801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25801Cu;
label_25801c:
    // 0x25801c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25801cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258020: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258024: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x258024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_258028:
    // 0x258028: 0xc055f06  jal         func_157C18
    ctx->pc = 0x258028u;
    SET_GPR_U32(ctx, 31, 0x258030u);
    ctx->pc = 0x25802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258028u;
    // 0x25802c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x258028u, 0x258030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258030u;
label_258030:
    // 0x258030: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x258030u;
    {
        const bool branch_taken_0x258030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258030) {
            ctx->pc = 0x258084u;
            goto label_258084;
        }
    }
    ctx->pc = 0x258038u;
    // 0x258038: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x258038u;
    SET_GPR_U32(ctx, 31, 0x258040u);
    ctx->pc = 0x25803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258038u;
    // 0x25803c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x258038u, 0x258040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258040u;
label_258040:
    // 0x258040: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x258040u;
    {
        const bool branch_taken_0x258040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258040u;
        // 0x258044: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258040) {
            ctx->pc = 0x25807Cu;
            goto label_25807c;
        }
    }
    ctx->pc = 0x258048u;
    // 0x258048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25804c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x25804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x258050: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x258050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x258054: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x258054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258058: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x258058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25805c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25805cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258060: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x258060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258064: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x258064u;
    SET_GPR_U32(ctx, 31, 0x25806Cu);
    ctx->pc = 0x258068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258064u;
    // 0x258068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x258064u, 0x25806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25806Cu;
label_25806c:
    // 0x25806c: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x25806Cu;
    SET_GPR_U32(ctx, 31, 0x258074u);
    ctx->pc = 0x258070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25806Cu;
    // 0x258070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x25806Cu, 0x258074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258074u;
label_258074:
    // 0x258074: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258074u;
    {
        const bool branch_taken_0x258074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258074) {
            ctx->pc = 0x258084u;
            goto label_258084;
        }
    }
    ctx->pc = 0x25807Cu;
label_25807c:
    // 0x25807c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25807Cu;
    SET_GPR_U32(ctx, 31, 0x258084u);
    ctx->pc = 0x258080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25807Cu;
    // 0x258080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25807Cu, 0x258084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258084u;
label_258084:
    // 0x258084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25808c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258090: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x258090u;
    SET_GPR_U32(ctx, 31, 0x258098u);
    ctx->pc = 0x258094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258090u;
    // 0x258094: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x258090u, 0x258098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258098u;
label_258098:
    // 0x258098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25809c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25809Cu;
    SET_GPR_U32(ctx, 31, 0x2580A4u);
    ctx->pc = 0x2580A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25809Cu;
    // 0x2580a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25809Cu, 0x2580A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2580A4u;
label_2580a4:
    // 0x2580a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2580a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2580a8:
    // 0x2580a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2580a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2580ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2580acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2580b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2580B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2580B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580B0u;
        // 0x2580b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2580B8u;
}
