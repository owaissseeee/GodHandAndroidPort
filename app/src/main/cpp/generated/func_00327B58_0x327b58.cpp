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

// Function: func_00327B58
// Address: 0x327b58 - 0x327c30
void func_00327B58_0x327b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327B58_0x327b58");
#endif

    switch (ctx->pc) {
        case 0x327bc0u: goto label_327bc0;
        case 0x327c10u: goto label_327c10;
        default: break;
    }

    ctx->pc = 0x327b58u;

    // 0x327b58: 0x3c0d003d  lui         $t5, 0x3D
    ctx->pc = 0x327b58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)61 << 16));
    // 0x327b5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327b60: 0x8da904b8  lw          $t1, 0x4B8($t5)
    ctx->pc = 0x327b60u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3D04B8u));
    // 0x327b64: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x327b64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327b6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x327b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x327b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327b74: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x327b74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b78: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x327b78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b7c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x327b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b80: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x327B80u;
    {
        const bool branch_taken_0x327b80 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x327B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B80u;
        // 0x327b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b80) {
            ctx->pc = 0x327BF0u;
            goto label_327bf0;
        }
    }
    ctx->pc = 0x327B88u;
    // 0x327b88: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x327b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x327b8c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x327b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x327b90: 0x244704b4  addiu       $a3, $v0, 0x4B4
    ctx->pc = 0x327b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1204));
    // 0x327b94: 0x248404d0  addiu       $a0, $a0, 0x4D0
    ctx->pc = 0x327b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    // 0x327b98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x327b98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D04B4u));
    // 0x327b9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x327b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x327ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327ba4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x327ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x327ba8: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x327ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327bac: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x327bacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327bb0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x327BB0u;
    {
        const bool branch_taken_0x327bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BB0u;
        // 0x327bb4: 0x8da304b8  lw          $v1, 0x4B8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327bb0) {
            ctx->pc = 0x327BF4u;
            goto label_327bf4;
        }
    }
    ctx->pc = 0x327BB8u;
    // 0x327bb8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x327bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327bbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x327bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_327bc0:
    // 0x327bc0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x327bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x327bc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x327BC4u;
    {
        const bool branch_taken_0x327bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BC4u;
        // 0x327bc8: 0x8da304b8  lw          $v1, 0x4B8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327bc4) {
            ctx->pc = 0x327BF4u;
            goto label_327bf4;
        }
    }
    ctx->pc = 0x327BCCu;
    // 0x327bcc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x327bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x327bd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x327bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x327bd4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x327bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x327bd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327bdc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x327bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x327be0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x327be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327be4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x327be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327be8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x327BE8u;
    {
        const bool branch_taken_0x327be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327be8) {
            ctx->pc = 0x327BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327BE8u;
            // 0x327bec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327bc0;
        }
    }
    ctx->pc = 0x327BF0u;
label_327bf0:
    // 0x327bf0: 0x8da304b8  lw          $v1, 0x4B8($t5)
    ctx->pc = 0x327bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1208)));
label_327bf4:
    // 0x327bf4: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x327BF4u;
    {
        const bool branch_taken_0x327bf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x327BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BF4u;
        // 0x327bf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327bf4) {
            ctx->pc = 0x327C1Cu;
            goto label_327c1c;
        }
    }
    ctx->pc = 0x327BFCu;
    // 0x327bfc: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x327bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c00: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x327c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c04: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x327c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c08: 0xc0c9e94  jal         func_327A50
    ctx->pc = 0x327C08u;
    SET_GPR_U32(ctx, 31, 0x327C10u);
    ctx->pc = 0x327C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C08u;
    // 0x327c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327A50u, 0x327C08u, 0x327C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C10u;
label_327c10:
    // 0x327c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327c14: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x327c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x327c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327c1c:
    // 0x327c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327c20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327c24: 0x3e00008  jr          $ra
    ctx->pc = 0x327C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C24u;
        // 0x327c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C2Cu;
    // 0x327c2c: 0x0  nop
    ctx->pc = 0x327c2cu;
    // NOP
    ctx->pc = 0x327c30u;
}
