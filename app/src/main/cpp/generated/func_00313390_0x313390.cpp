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

// Function: func_00313390
// Address: 0x313390 - 0x313450
void func_00313390_0x313390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00313390_0x313390");
#endif

    switch (ctx->pc) {
        case 0x3133c8u: goto label_3133c8;
        case 0x3133e4u: goto label_3133e4;
        case 0x3133ecu: goto label_3133ec;
        case 0x313408u: goto label_313408;
        default: break;
    }

    ctx->pc = 0x313390u;

    // 0x313390: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313394: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x313398: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31339c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31339cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3133a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3133a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3133a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3133a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3133a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3133a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3133ac: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3133ACu;
    {
        const bool branch_taken_0x3133ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3133B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133ACu;
        // 0x3133b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133ac) {
            ctx->pc = 0x313438u;
            goto label_313438;
        }
    }
    ctx->pc = 0x3133B4u;
    // 0x3133b4: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3133b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3133b8: 0x240421c0  addiu       $a0, $zero, 0x21C0
    ctx->pc = 0x3133b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x3133bc: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x3133bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x3133c0: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3133C0u;
    SET_GPR_U32(ctx, 31, 0x3133C8u);
    ctx->pc = 0x3133C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133C0u;
    // 0x3133c4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3133C0u, 0x3133C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133C8u;
label_3133c8:
    // 0x3133c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3133c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133cc: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3133CCu;
    {
        const bool branch_taken_0x3133cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3133D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133CCu;
        // 0x3133d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133cc) {
            ctx->pc = 0x313438u;
            goto label_313438;
        }
    }
    ctx->pc = 0x3133D4u;
    // 0x3133d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3133d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133d8: 0x240621c0  addiu       $a2, $zero, 0x21C0
    ctx->pc = 0x3133d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x3133dc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3133DCu;
    SET_GPR_U32(ctx, 31, 0x3133E4u);
    ctx->pc = 0x3133E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133DCu;
    // 0x3133e0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3133DCu, 0x3133E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133E4u;
label_3133e4:
    // 0x3133e4: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x3133E4u;
    SET_GPR_U32(ctx, 31, 0x3133ECu);
    ctx->pc = 0x3133E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133E4u;
    // 0x3133e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x3133E4u, 0x3133ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133ECu;
label_3133ec:
    // 0x3133ec: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3133ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3133f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3133f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3133f4: 0x24428028  addiu       $v0, $v0, -0x7FD8
    ctx->pc = 0x3133f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934568));
    // 0x3133f8: 0x260305b0  addiu       $v1, $s0, 0x5B0
    ctx->pc = 0x3133f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x3133fc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x3133fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x313400: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x313400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x313404: 0x0  nop
    ctx->pc = 0x313404u;
    // NOP
label_313408:
    // 0x313408: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x313408u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31340c: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x31340cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313410: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x313410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313414: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x313414u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313418: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x313418u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31341c: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x31341cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313420: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313424: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x313424u;
    {
        const bool branch_taken_0x313424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x313428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313424u;
        // 0x313428: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313424) {
            ctx->pc = 0x313408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313408;
        }
    }
    ctx->pc = 0x31342Cu;
    // 0x31342c: 0xfa202190  sqc2        $vf0, 0x2190($s1)
    ctx->pc = 0x31342cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 8592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313430u;
    {
        const bool branch_taken_0x313430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313430u;
        // 0x313434: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313430) {
            ctx->pc = 0x31343Cu;
            goto label_31343c;
        }
    }
    ctx->pc = 0x313438u;
label_313438:
    // 0x313438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31343c:
    // 0x31343c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313448: 0x3e00008  jr          $ra
    ctx->pc = 0x313448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313448u;
        // 0x31344c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313450u;
}
