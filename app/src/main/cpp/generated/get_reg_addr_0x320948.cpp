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

// Function: get_reg_addr
// Address: 0x320948 - 0x3209d0
void get_reg_addr_0x320948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_reg_addr_0x320948");
#endif

    switch (ctx->pc) {
        case 0x320978u: goto label_320978;
        case 0x3209c4u: goto label_3209c4;
        default: break;
    }

    ctx->pc = 0x320948u;

    // 0x320948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32094c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32094cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320954: 0x24a8029c  addiu       $t0, $a1, 0x29C
    ctx->pc = 0x320954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 668));
    // 0x320958: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x320958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x32095c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320960: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x320960u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320964: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x320964u;
    {
        const bool branch_taken_0x320964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x320968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320964u;
        // 0x320968: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320964) {
            ctx->pc = 0x320998u;
            goto label_320998;
        }
    }
    ctx->pc = 0x32096Cu;
    // 0x32096c: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x32096cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x320970: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x320970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x320974: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_320978:
    // 0x320978: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x32097c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x32097cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320980: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x320980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320984: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x320984u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x320988: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x320988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x32098c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x32098cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320990: 0x5064fff9  beql        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x320990u;
    {
        const bool branch_taken_0x320990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x320990) {
            ctx->pc = 0x320994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320990u;
            // 0x320994: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320978;
        }
    }
    ctx->pc = 0x320998u;
label_320998:
    // 0x320998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x320998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32099c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x32099cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3209a0: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3209A0u;
    {
        const bool branch_taken_0x3209a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3209A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209A0u;
        // 0x3209a4: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209a0) {
            ctx->pc = 0x3209BCu;
            goto label_3209bc;
        }
    }
    ctx->pc = 0x3209A8u;
    // 0x3209a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3209a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3209ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3209acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3209b0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3209b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3209b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3209B4u;
    {
        const bool branch_taken_0x3209b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209B4u;
        // 0x3209b8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209b4) {
            ctx->pc = 0x3209C4u;
            goto label_3209c4;
        }
    }
    ctx->pc = 0x3209BCu;
label_3209bc:
    // 0x3209bc: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x3209BCu;
    SET_GPR_U32(ctx, 31, 0x3209C4u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x3209BCu, 0x3209C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209C4u;
label_3209c4:
    // 0x3209c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3209c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3209c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3209C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3209CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209C8u;
        // 0x3209cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3209C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3209D0u;
}
