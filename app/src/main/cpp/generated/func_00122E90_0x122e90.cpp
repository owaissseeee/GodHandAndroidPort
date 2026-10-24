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

// Function: func_00122E90
// Address: 0x122e90 - 0x123160
void func_00122E90_0x122e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00122E90_0x122e90");
#endif

    switch (ctx->pc) {
        case 0x122f00u: goto label_122f00;
        case 0x122f24u: goto label_122f24;
        case 0x122f30u: goto label_122f30;
        case 0x122f38u: goto label_122f38;
        case 0x122f48u: goto label_122f48;
        case 0x122f78u: goto label_122f78;
        case 0x123074u: goto label_123074;
        case 0x123094u: goto label_123094;
        case 0x1230b8u: goto label_1230b8;
        case 0x1230d4u: goto label_1230d4;
        case 0x123100u: goto label_123100;
        case 0x123134u: goto label_123134;
        case 0x123140u: goto label_123140;
        default: break;
    }

    ctx->pc = 0x122e90u;

    // 0x122e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122e94: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x122e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x122e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122e9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x122e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x122ea0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x122ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x122ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122eac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122eb0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x122eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x122eb4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x122eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x122eb8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x122eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122ebc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x122EBCu;
    {
        const bool branch_taken_0x122ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EBCu;
        // 0x122ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ebc) {
            ctx->pc = 0x122ED4u;
            goto label_122ed4;
        }
    }
    ctx->pc = 0x122EC4u;
    // 0x122ec4: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x122EC4u;
    {
        const bool branch_taken_0x122ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x122EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EC4u;
        // 0x122ec8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ec4) {
            ctx->pc = 0x1230CCu;
            goto label_1230cc;
        }
    }
    ctx->pc = 0x122ECCu;
    // 0x122ecc: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x122ECCu;
    {
        const bool branch_taken_0x122ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122ECCu;
        // 0x122ed0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ecc) {
            ctx->pc = 0x123148u;
            goto label_123148;
        }
    }
    ctx->pc = 0x122ED4u;
label_122ed4:
    // 0x122ed4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x122ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x122ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122edc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x122edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x122ee0: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x122ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x122ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ee8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x122ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122eec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ef0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ef4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x122ef4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ef8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x122EF8u;
    SET_GPR_U32(ctx, 31, 0x122F00u);
    ctx->pc = 0x122EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EF8u;
    // 0x122efc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x122EF8u, 0x122F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F00u;
label_122f00:
    // 0x122f00: 0x24060123  addiu       $a2, $zero, 0x123
    ctx->pc = 0x122f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x122f04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x122f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x122f10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x122f14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f1c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x122F1Cu;
    SET_GPR_U32(ctx, 31, 0x122F24u);
    ctx->pc = 0x122F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F1Cu;
    // 0x122f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x122F1Cu, 0x122F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F24u;
label_122f24:
    // 0x122f24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x122f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122f28: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x122F28u;
    SET_GPR_U32(ctx, 31, 0x122F30u);
    ctx->pc = 0x122F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F28u;
    // 0x122f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x122F28u, 0x122F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F30u;
label_122f30:
    // 0x122f30: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x122F30u;
    SET_GPR_U32(ctx, 31, 0x122F38u);
    ctx->pc = 0x122F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F30u;
    // 0x122f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x122F30u, 0x122F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F38u;
label_122f38:
    // 0x122f38: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x122f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x122f3c: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x122f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x122f40: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x122F40u;
    SET_GPR_U32(ctx, 31, 0x122F48u);
    ctx->pc = 0x122F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F40u;
    // 0x122f44: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x122F40u, 0x122F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F48u;
label_122f48:
    // 0x122f48: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x122f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x122f4c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x122f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x122f50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x122F50u;
    {
        const bool branch_taken_0x122f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F50u;
        // 0x122f54: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f50) {
            ctx->pc = 0x122F70u;
            goto label_122f70;
        }
    }
    ctx->pc = 0x122F58u;
    // 0x122f58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x122f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x122f5c: 0x2442c790  addiu       $v0, $v0, -0x3870
    ctx->pc = 0x122f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952848));
    // 0x122f60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x122f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x122f64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x122f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122f68: 0x800008  jr          $a0
    ctx->pc = 0x122F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122F70u: goto label_122f70;
            case 0x122FF0u: goto label_122ff0;
            case 0x123000u: goto label_123000;
            case 0x123010u: goto label_123010;
            case 0x123020u: goto label_123020;
            case 0x123030u: goto label_123030;
            case 0x123040u: goto label_123040;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122F70u;
label_122f70:
    // 0x122f70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x122F70u;
    SET_GPR_U32(ctx, 31, 0x122F78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x122F70u, 0x122F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F78u;
label_122f78:
    // 0x122f78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x122f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x122f7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x122f7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x122f80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x122F80u;
    {
        const bool branch_taken_0x122f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x122f80) {
            ctx->pc = 0x122F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122F80u;
            // 0x122f84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x122F88u;
            goto label_122f88;
        }
    }
    ctx->pc = 0x122F88u;
label_122f88:
    // 0x122f88: 0x2010  mfhi        $a0
    ctx->pc = 0x122f88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x122f8c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x122f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x122f90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x122F90u;
    {
        const bool branch_taken_0x122f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F90u;
        // 0x122f94: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f90) {
            ctx->pc = 0x122FB0u;
            goto label_122fb0;
        }
    }
    ctx->pc = 0x122F98u;
    // 0x122f98: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x122f9c: 0x2442c7b0  addiu       $v0, $v0, -0x3850
    ctx->pc = 0x122f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x122fa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x122fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x122fa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122fa8: 0x800008  jr          $a0
    ctx->pc = 0x122FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122FB0u: goto label_122fb0;
            case 0x122FC0u: goto label_122fc0;
            case 0x122FD0u: goto label_122fd0;
            case 0x122FE0u: goto label_122fe0;
            case 0x123040u: goto label_123040;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122FA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122FB0u;
label_122fb0:
    // 0x122fb0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x122fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x122fb4: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x122fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x122fb8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x122FB8u;
    {
        const bool branch_taken_0x122fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FB8u;
        // 0x122fbc: 0x8c44015c  lw          $a0, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fb8) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x122FC0u;
label_122fc0:
    // 0x122fc0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x122fc4: 0x8c4304fc  lw          $v1, 0x4FC($v0)
    ctx->pc = 0x122fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1276)));
    // 0x122fc8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x122FC8u;
    {
        const bool branch_taken_0x122fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FC8u;
        // 0x122fcc: 0x8c440500  lw          $a0, 0x500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fc8) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x122FD0u;
label_122fd0:
    // 0x122fd0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x122fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x122fd4: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x122fd8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x122FD8u;
    {
        const bool branch_taken_0x122fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FD8u;
        // 0x122fdc: 0x8c440168  lw          $a0, 0x168($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fd8) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x122FE0u;
label_122fe0:
    // 0x122fe0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x122fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x122fe4: 0x8c430504  lw          $v1, 0x504($v0)
    ctx->pc = 0x122fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
    // 0x122fe8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x122FE8u;
    {
        const bool branch_taken_0x122fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FE8u;
        // 0x122fec: 0x8c440508  lw          $a0, 0x508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fe8) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x122FF0u;
label_122ff0:
    // 0x122ff0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x122ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x122ff4: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x122ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x122ff8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x122FF8u;
    {
        const bool branch_taken_0x122ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FF8u;
        // 0x122ffc: 0x8c44015c  lw          $a0, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ff8) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x123000u;
label_123000:
    // 0x123000: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x123000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x123004: 0x8c4304fc  lw          $v1, 0x4FC($v0)
    ctx->pc = 0x123004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1276)));
    // 0x123008: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x123008u;
    {
        const bool branch_taken_0x123008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123008u;
        // 0x12300c: 0x8c440500  lw          $a0, 0x500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123008) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x123010u;
label_123010:
    // 0x123010: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x123010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x123014: 0x8c430514  lw          $v1, 0x514($v0)
    ctx->pc = 0x123014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1300)));
    // 0x123018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x123018u;
    {
        const bool branch_taken_0x123018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123018u;
        // 0x12301c: 0x8c440518  lw          $a0, 0x518($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123018) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x123020u;
label_123020:
    // 0x123020: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x123020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x123024: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x123024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x123028: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x123028u;
    {
        const bool branch_taken_0x123028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123028u;
        // 0x12302c: 0x8c440168  lw          $a0, 0x168($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123028) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x123030u;
label_123030:
    // 0x123030: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x123030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x123034: 0x8c430504  lw          $v1, 0x504($v0)
    ctx->pc = 0x123034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
    // 0x123038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x123038u;
    {
        const bool branch_taken_0x123038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123038u;
        // 0x12303c: 0x8c440508  lw          $a0, 0x508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123038) {
            ctx->pc = 0x12304Cu;
            goto label_12304c;
        }
    }
    ctx->pc = 0x123040u;
label_123040:
    // 0x123040: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x123040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x123044: 0x8c43050c  lw          $v1, 0x50C($v0)
    ctx->pc = 0x123044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1292)));
    // 0x123048: 0x8c440510  lw          $a0, 0x510($v0)
    ctx->pc = 0x123048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
label_12304c:
    // 0x12304c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x12304cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123050: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x123050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123054: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x123058: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x123058u;
    {
        const bool branch_taken_0x123058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123058u;
        // 0x12305c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123058) {
            ctx->pc = 0x123098u;
            goto label_123098;
        }
    }
    ctx->pc = 0x123060u;
    // 0x123060: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x123060u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123064: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x123064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123068: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x123068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12306c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x12306Cu;
    SET_GPR_U32(ctx, 31, 0x123074u);
    ctx->pc = 0x123070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12306Cu;
    // 0x123070: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x12306Cu, 0x123074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123074u;
label_123074:
    // 0x123074: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x123074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x123078: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x123078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12307c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12307cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x123080: 0x0  nop
    ctx->pc = 0x123080u;
    // NOP
    // 0x123084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x123084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x123088: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x123088u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x12308c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x12308Cu;
    SET_GPR_U32(ctx, 31, 0x123094u);
    ctx->pc = 0x123090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12308Cu;
    // 0x123090: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x12308Cu, 0x123094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123094u;
label_123094:
    // 0x123094: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x123094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_123098:
    // 0x123098: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x123098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12309c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12309cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1230a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1230ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1230acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230b0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1230B0u;
    SET_GPR_U32(ctx, 31, 0x1230B8u);
    ctx->pc = 0x1230B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230B0u;
    // 0x1230b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1230B0u, 0x1230B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230B8u;
label_1230b8:
    // 0x1230b8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1230b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1230bc: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1230bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1230c0: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x1230c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x1230c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1230c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1230c8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1230c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1230cc:
    // 0x1230cc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1230CCu;
    SET_GPR_U32(ctx, 31, 0x1230D4u);
    ctx->pc = 0x1230D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230CCu;
    // 0x1230d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1230CCu, 0x1230D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230D4u;
label_1230d4:
    // 0x1230d4: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x1230d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1230D8u;
    {
        const bool branch_taken_0x1230d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230D8u;
        // 0x1230dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230d8) {
            ctx->pc = 0x1230E8u;
            goto label_1230e8;
        }
    }
    ctx->pc = 0x1230E0u;
    // 0x1230e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1230E0u;
    {
        const bool branch_taken_0x1230e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230E0u;
        // 0x1230e4: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230e0) {
            ctx->pc = 0x1230F8u;
            goto label_1230f8;
        }
    }
    ctx->pc = 0x1230E8u;
label_1230e8:
    // 0x1230e8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1230e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1230ec: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1230ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x1230f0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1230f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1230f4: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x1230f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_1230f8:
    // 0x1230f8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1230F8u;
    SET_GPR_U32(ctx, 31, 0x123100u);
    ctx->pc = 0x1230FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230F8u;
    // 0x1230fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1230F8u, 0x123100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123100u;
label_123100:
    // 0x123100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123100u;
    {
        const bool branch_taken_0x123100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123100u;
        // 0x123104: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123100) {
            ctx->pc = 0x123120u;
            goto label_123120;
        }
    }
    ctx->pc = 0x123108u;
    // 0x123108: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x123108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
    // 0x12310c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x123110: 0xac437a24  sw          $v1, 0x7A24($v0)
    ctx->pc = 0x123110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31268), GPR_U32(ctx, 3));
    // 0x123114: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x123114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x123118: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x123118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12311c: 0xa22402f6  sb          $a0, 0x2F6($s1)
    ctx->pc = 0x12311cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 4));
label_123120:
    // 0x123120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123124: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x123124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x123128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12312c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x12312Cu;
    SET_GPR_U32(ctx, 31, 0x123134u);
    ctx->pc = 0x123130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12312Cu;
    // 0x123130: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x12312Cu, 0x123134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123134u;
label_123134:
    // 0x123134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123138: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x123138u;
    SET_GPR_U32(ctx, 31, 0x123140u);
    ctx->pc = 0x12313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123138u;
    // 0x12313c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x123138u, 0x123140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123140u;
label_123140:
    // 0x123140: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x123140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123144: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x123144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_123148:
    // 0x123148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12314c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123150: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x123150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x123154: 0x3e00008  jr          $ra
    ctx->pc = 0x123154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123154u;
        // 0x123158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12315Cu;
    // 0x12315c: 0x0  nop
    ctx->pc = 0x12315cu;
    // NOP
    ctx->pc = 0x123160u;
}
