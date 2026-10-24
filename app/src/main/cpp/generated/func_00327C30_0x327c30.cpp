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

// Function: func_00327C30
// Address: 0x327c30 - 0x327d00
void func_00327C30_0x327c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327C30_0x327c30");
#endif

    switch (ctx->pc) {
        case 0x327c98u: goto label_327c98;
        case 0x327ce8u: goto label_327ce8;
        default: break;
    }

    ctx->pc = 0x327c30u;

    // 0x327c30: 0x3c0d003d  lui         $t5, 0x3D
    ctx->pc = 0x327c30u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)61 << 16));
    // 0x327c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327c38: 0x8da904c0  lw          $t1, 0x4C0($t5)
    ctx->pc = 0x327c38u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3D04C0u));
    // 0x327c3c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x327c3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327c44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x327c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x327c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327c4c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x327c4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c50: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x327c50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x327c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c58: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x327C58u;
    {
        const bool branch_taken_0x327c58 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x327C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C58u;
        // 0x327c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c58) {
            ctx->pc = 0x327CC8u;
            goto label_327cc8;
        }
    }
    ctx->pc = 0x327C60u;
    // 0x327c60: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x327c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x327c64: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x327c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x327c68: 0x244704bc  addiu       $a3, $v0, 0x4BC
    ctx->pc = 0x327c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1212));
    // 0x327c6c: 0x248404d0  addiu       $a0, $a0, 0x4D0
    ctx->pc = 0x327c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    // 0x327c70: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x327c70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D04BCu));
    // 0x327c74: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x327c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x327c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327c7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x327c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x327c80: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x327c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327c84: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x327c84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327c88: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x327C88u;
    {
        const bool branch_taken_0x327c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C88u;
        // 0x327c8c: 0x8da304c0  lw          $v1, 0x4C0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c88) {
            ctx->pc = 0x327CCCu;
            goto label_327ccc;
        }
    }
    ctx->pc = 0x327C90u;
    // 0x327c90: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x327c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x327c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_327c98:
    // 0x327c98: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x327c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x327c9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x327C9Cu;
    {
        const bool branch_taken_0x327c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C9Cu;
        // 0x327ca0: 0x8da304c0  lw          $v1, 0x4C0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c9c) {
            ctx->pc = 0x327CCCu;
            goto label_327ccc;
        }
    }
    ctx->pc = 0x327CA4u;
    // 0x327ca4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x327ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x327ca8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x327ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x327cac: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x327cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x327cb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327cb4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x327cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x327cb8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x327cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327cbc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x327cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327cc0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x327CC0u;
    {
        const bool branch_taken_0x327cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327cc0) {
            ctx->pc = 0x327CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327CC0u;
            // 0x327cc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327c98;
        }
    }
    ctx->pc = 0x327CC8u;
label_327cc8:
    // 0x327cc8: 0x8da304c0  lw          $v1, 0x4C0($t5)
    ctx->pc = 0x327cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1216)));
label_327ccc:
    // 0x327ccc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x327CCCu;
    {
        const bool branch_taken_0x327ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x327CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CCCu;
        // 0x327cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ccc) {
            ctx->pc = 0x327CF0u;
            goto label_327cf0;
        }
    }
    ctx->pc = 0x327CD4u;
    // 0x327cd4: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x327cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327cd8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x327cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327cdc: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x327cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ce0: 0xc0c9e94  jal         func_327A50
    ctx->pc = 0x327CE0u;
    SET_GPR_U32(ctx, 31, 0x327CE8u);
    ctx->pc = 0x327CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327CE0u;
    // 0x327ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327A50u, 0x327CE0u, 0x327CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327CE8u;
label_327ce8:
    // 0x327ce8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x327ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x327cec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327cf0:
    // 0x327cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327cf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x327CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CF8u;
        // 0x327cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D00u;
}
