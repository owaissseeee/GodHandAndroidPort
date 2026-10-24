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

// Function: _sceMpegPeepBit
// Address: 0x39eb90 - 0x39ec20
void _sceMpegPeepBit_0x39eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegPeepBit_0x39eb90");
#endif

    switch (ctx->pc) {
        case 0x39ebc8u: goto label_39ebc8;
        case 0x39ebe8u: goto label_39ebe8;
        default: break;
    }

    ctx->pc = 0x39eb90u;

    // 0x39eb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39eb94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39eb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39eb9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39eb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39eba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39eba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eba4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x39eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x39eba8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EBA8u;
    {
        const bool branch_taken_0x39eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBA8u;
        // 0x39ebac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eba8) {
            ctx->pc = 0x39EBC0u;
            goto label_39ebc0;
        }
    }
    ctx->pc = 0x39EBB0u;
    // 0x39ebb0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x39ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x39ebb4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x39ebb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x39ebb8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x39EBB8u;
    {
        const bool branch_taken_0x39ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ebb8) {
            ctx->pc = 0x39EBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EBB8u;
            // 0x39ebbc: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EC00u;
            goto label_39ec00;
        }
    }
    ctx->pc = 0x39EBC0u;
label_39ebc0:
    // 0x39ebc0: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39EBC0u;
    SET_GPR_U32(ctx, 31, 0x39EBC8u);
    ctx->pc = 0x39EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBC0u;
    // 0x39ebc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39EBC0u, 0x39EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBC8u;
label_39ebc8:
    // 0x39ebc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39ebcc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x39ebd0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39ebd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ebd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39ebd8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39ebdc: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x39ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x39ebe0: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39EBE0u;
    SET_GPR_U32(ctx, 31, 0x39EBE8u);
    ctx->pc = 0x39EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBE0u;
    // 0x39ebe4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39EBE0u, 0x39EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBE8u;
label_39ebe8:
    // 0x39ebe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39ebec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39ebecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39ebf0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x39ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x39ebf4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x39ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x39ebf8: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x39ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x39ebfc: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x39ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_39ec00:
    // 0x39ec00: 0x111023  negu        $v0, $s1
    ctx->pc = 0x39ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x39ec04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39ec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ec08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39ec08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ec0c: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x39ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x39ec10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ec10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ec14: 0x3e00008  jr          $ra
    ctx->pc = 0x39EC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC14u;
        // 0x39ec18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EC1Cu;
    // 0x39ec1c: 0x0  nop
    ctx->pc = 0x39ec1cu;
    // NOP
    ctx->pc = 0x39ec20u;
}
