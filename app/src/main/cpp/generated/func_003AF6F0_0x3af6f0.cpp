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

// Function: func_003AF6F0
// Address: 0x3af6f0 - 0x3af7b8
void func_003AF6F0_0x3af6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AF6F0_0x3af6f0");
#endif

    switch (ctx->pc) {
        case 0x3af714u: goto label_3af714;
        case 0x3af724u: goto label_3af724;
        case 0x3af798u: goto label_3af798;
        default: break;
    }

    ctx->pc = 0x3af6f0u;

    // 0x3af6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3af6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3af6f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3af6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3af6f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3af6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3af6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af700: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3af700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3af704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3af708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3af708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3af70c: 0xc0ebcf6  jal         func_3AF3D8
    ctx->pc = 0x3AF70Cu;
    SET_GPR_U32(ctx, 31, 0x3AF714u);
    ctx->pc = 0x3AF710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF70Cu;
    // 0x3af710: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF3D8u, 0x3AF70Cu, 0x3AF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF714u;
label_3af714:
    // 0x3af714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3af714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af718: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x3af718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3af71c: 0xc0ebcf6  jal         func_3AF3D8
    ctx->pc = 0x3AF71Cu;
    SET_GPR_U32(ctx, 31, 0x3AF724u);
    ctx->pc = 0x3AF720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF71Cu;
    // 0x3af720: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF3D8u, 0x3AF71Cu, 0x3AF724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF724u;
label_3af724:
    // 0x3af724: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3af724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3af728: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3af728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af72c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3af72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3af730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3af730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af734: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3af734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3af738: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3af738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3af73c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3af73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3af740: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3af740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3af744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3af744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3af748: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AF748u;
    {
        const bool branch_taken_0x3af748 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3AF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF748u;
        // 0x3af74c: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af748) {
            ctx->pc = 0x3AF770u;
            goto label_3af770;
        }
    }
    ctx->pc = 0x3AF750u;
    // 0x3af750: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x3af750u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3af754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3af754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3af758: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3af758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af75c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3af75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3af760: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af764: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x3af764u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3af768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF768u;
    {
        const bool branch_taken_0x3af768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF768u;
        // 0x3af76c: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af768) {
            ctx->pc = 0x3AF78Cu;
            goto label_3af78c;
        }
    }
    ctx->pc = 0x3AF770u;
label_3af770:
    // 0x3af770: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x3af770u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3af774: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3af774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3af778: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3af778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af77c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3af77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3af780: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af784: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x3af784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3af788: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3af788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3af78c:
    // 0x3af78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3af78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af790: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x3AF790u;
    SET_GPR_U32(ctx, 31, 0x3AF798u);
    ctx->pc = 0x3AF794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF790u;
    // 0x3af794: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x3AF790u, 0x3AF798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF798u;
label_3af798:
    // 0x3af798: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3af798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af79c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3af79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af7a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3af7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af7a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3af7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7A8u;
        // 0x3af7ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF7B0u;
    // 0x3af7b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3af7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3af7b4: 0x0  nop
    ctx->pc = 0x3af7b4u;
    // NOP
    ctx->pc = 0x3af7b8u;
}
