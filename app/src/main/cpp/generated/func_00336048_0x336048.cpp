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

// Function: func_00336048
// Address: 0x336048 - 0x336110
void func_00336048_0x336048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336048_0x336048");
#endif

    switch (ctx->pc) {
        case 0x336098u: goto label_336098;
        case 0x3360e0u: goto label_3360e0;
        default: break;
    }

    ctx->pc = 0x336048u;

    // 0x336048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33604c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33605c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x33605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x336060: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x336060u;
    {
        const bool branch_taken_0x336060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x336060) {
            ctx->pc = 0x336064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336060u;
            // 0x336064: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336088u;
            goto label_336088;
        }
    }
    ctx->pc = 0x336068u;
    // 0x336068: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33606c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33606cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336074: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x336074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
    // 0x336078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33607c: 0x80cd750  j           func_335D40
    ctx->pc = 0x33607Cu;
    ctx->pc = 0x336080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33607Cu;
    // 0x336080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x33607Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336084u;
    // 0x336084: 0x0  nop
    ctx->pc = 0x336084u;
    // NOP
label_336088:
    // 0x336088: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x336088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33608c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x336090: 0xc0ca026  jal         func_328098
    ctx->pc = 0x336090u;
    SET_GPR_U32(ctx, 31, 0x336098u);
    ctx->pc = 0x336094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336090u;
    // 0x336094: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x336090u, 0x336098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336098u;
label_336098:
    // 0x336098: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x336098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33609c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3360a0: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3360A0u;
    {
        const bool branch_taken_0x3360a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3360A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360A0u;
        // 0x3360a4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360a0) {
            ctx->pc = 0x3360E8u;
            goto label_3360e8;
        }
    }
    ctx->pc = 0x3360A8u;
    // 0x3360a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3360A8u;
    {
        const bool branch_taken_0x3360a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360A8u;
        // 0x3360ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360a8) {
            ctx->pc = 0x3360C8u;
            goto label_3360c8;
        }
    }
    ctx->pc = 0x3360B0u;
    // 0x3360b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3360b4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3360B4u;
    {
        const bool branch_taken_0x3360b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3360b4) {
            ctx->pc = 0x3360D8u;
            goto label_3360d8;
        }
    }
    ctx->pc = 0x3360BCu;
    // 0x3360bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3360BCu;
    {
        const bool branch_taken_0x3360bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360BCu;
        // 0x3360c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360bc) {
            ctx->pc = 0x3360FCu;
            goto label_3360fc;
        }
    }
    ctx->pc = 0x3360C4u;
    // 0x3360c4: 0x0  nop
    ctx->pc = 0x3360c4u;
    // NOP
label_3360c8:
    // 0x3360c8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3360C8u;
    {
        const bool branch_taken_0x3360c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3360c8) {
            ctx->pc = 0x3360CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3360C8u;
            // 0x3360cc: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3360F8u;
            goto label_3360f8;
        }
    }
    ctx->pc = 0x3360D0u;
    // 0x3360d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3360D0u;
    {
        const bool branch_taken_0x3360d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360D0u;
        // 0x3360d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360d0) {
            ctx->pc = 0x3360FCu;
            goto label_3360fc;
        }
    }
    ctx->pc = 0x3360D8u;
label_3360d8:
    // 0x3360d8: 0xc0ca050  jal         func_328140
    ctx->pc = 0x3360D8u;
    SET_GPR_U32(ctx, 31, 0x3360E0u);
    ctx->pc = 0x3360DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3360D8u;
    // 0x3360dc: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328140u, 0x3360D8u, 0x3360E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360E0u;
label_3360e0:
    // 0x3360e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3360E0u;
    {
        const bool branch_taken_0x3360e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360E0u;
        // 0x3360e4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360e0) {
            ctx->pc = 0x3360F8u;
            goto label_3360f8;
        }
    }
    ctx->pc = 0x3360E8u;
label_3360e8:
    // 0x3360e8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3360e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3360ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3360ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3360f0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3360f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x3360f4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x3360f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_3360f8:
    // 0x3360f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3360f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3360fc:
    // 0x3360fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3360fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336104: 0x3e00008  jr          $ra
    ctx->pc = 0x336104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336104u;
        // 0x336108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33610Cu;
    // 0x33610c: 0x0  nop
    ctx->pc = 0x33610cu;
    // NOP
    ctx->pc = 0x336110u;
}
