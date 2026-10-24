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

// Function: cSnd_ReserveSeSlot
// Address: 0x2cb6e0 - 0x2cb778
void cSnd_ReserveSeSlot_0x2cb6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_ReserveSeSlot_0x2cb6e0");
#endif

    switch (ctx->pc) {
        case 0x2cb704u: goto label_2cb704;
        case 0x2cb71cu: goto label_2cb71c;
        case 0x2cb730u: goto label_2cb730;
        case 0x2cb748u: goto label_2cb748;
        default: break;
    }

    ctx->pc = 0x2cb6e0u;

    // 0x2cb6e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb6e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2cb6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2cb6e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2cb6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2cb6ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2cb6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2cb6f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cb6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb6fc: 0xc0b3030  jal         func_2CC0C0
    ctx->pc = 0x2CB6FCu;
    SET_GPR_U32(ctx, 31, 0x2CB704u);
    ctx->pc = 0x2CB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6FCu;
    // 0x2cb700: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC0C0u, 0x2CB6FCu, 0x2CB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB704u;
label_2cb704:
    // 0x2cb704: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2cb704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb70c: 0x16120013  bne         $s0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB70Cu;
    {
        const bool branch_taken_0x2cb70c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB70Cu;
        // 0x2cb710: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb70c) {
            ctx->pc = 0x2CB75Cu;
            goto label_2cb75c;
        }
    }
    ctx->pc = 0x2CB714u;
    // 0x2cb714: 0xc0b3014  jal         func_2CC050
    ctx->pc = 0x2CB714u;
    SET_GPR_U32(ctx, 31, 0x2CB71Cu);
    ctx->pc = 0x2CB718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB714u;
    // 0x2cb718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC050u, 0x2CB714u, 0x2CB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB71Cu;
label_2cb71c:
    // 0x2cb71c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb720: 0x1212000c  beq         $s0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2CB720u;
    {
        const bool branch_taken_0x2cb720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB720u;
        // 0x2cb724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb720) {
            ctx->pc = 0x2CB754u;
            goto label_2cb754;
        }
    }
    ctx->pc = 0x2CB728u;
    // 0x2cb728: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB728u;
    SET_GPR_U32(ctx, 31, 0x2CB730u);
    ctx->pc = 0x2CB72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB728u;
    // 0x2cb72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB728u, 0x2CB730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB730u;
label_2cb730:
    // 0x2cb730: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x2cb730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x2cb734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb738: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cb738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb73c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb740: 0xc0b3dd8  jal         func_2CF760
    ctx->pc = 0x2CB740u;
    SET_GPR_U32(ctx, 31, 0x2CB748u);
    ctx->pc = 0x2CB744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB740u;
    // 0x2cb744: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF760u, 0x2CB740u, 0x2CB748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB748u;
label_2cb748:
    // 0x2cb748: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cb748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb74c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB74Cu;
    {
        const bool branch_taken_0x2cb74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB74Cu;
        // 0x2cb750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb74c) {
            ctx->pc = 0x2CB758u;
            goto label_2cb758;
        }
    }
    ctx->pc = 0x2CB754u;
label_2cb754:
    // 0x2cb754: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cb754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb758:
    // 0x2cb758: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2cb758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cb75c:
    // 0x2cb75c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2cb75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cb760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb764: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2cb764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb76c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB76Cu;
        // 0x2cb770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB774u;
    // 0x2cb774: 0x0  nop
    ctx->pc = 0x2cb774u;
    // NOP
    ctx->pc = 0x2cb778u;
}
