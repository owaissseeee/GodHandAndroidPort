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

// Function: sceIpuStopDMA
// Address: 0x3baa68 - 0x3bab50
void sceIpuStopDMA_0x3baa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceIpuStopDMA_0x3baa68");
#endif

    switch (ctx->pc) {
        case 0x3baa80u: goto label_3baa80;
        case 0x3baac8u: goto label_3baac8;
        case 0x3baaecu: goto label_3baaec;
        default: break;
    }

    ctx->pc = 0x3baa68u;

    // 0x3baa68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3baa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3baa6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3baa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3baa70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3baa70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baa74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3baa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3baa78: 0xc0eea7c  jal         func_3BA9F0
    ctx->pc = 0x3BAA78u;
    SET_GPR_U32(ctx, 31, 0x3BAA80u);
    ctx->pc = 0x3BAA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAA78u;
    // 0x3baa7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA9F0u, 0x3BAA78u, 0x3BAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAA80u;
label_3baa80:
    // 0x3baa80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3baa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3baa84: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3baa84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3baa88: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x3baa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x3baa8c: 0x34c6b430  ori         $a2, $a2, 0xB430
    ctx->pc = 0x3baa8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46128);
    // 0x3baa90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3baa90u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x3baa94: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3baa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3baa98: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x3baa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x3baa9c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3baa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3baaa0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3baaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3baaa4: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x3baaa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x3baaa8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3baaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3baaac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3baaacu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B430u));
    // 0x3baab0: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x3baab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x3baab4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3baab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3baab8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3baab8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u));
    // 0x3baabc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3baabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3baac0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3baac0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x3baac4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3baac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3baac8:
    // 0x3baac8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3baac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3baacc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3baaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3baad0: 0x0  nop
    ctx->pc = 0x3baad0u;
    // NOP
    // 0x3baad4: 0x0  nop
    ctx->pc = 0x3baad4u;
    // NOP
    // 0x3baad8: 0x0  nop
    ctx->pc = 0x3baad8u;
    // NOP
    // 0x3baadc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAADCu;
    {
        const bool branch_taken_0x3baadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baadc) {
            ctx->pc = 0x3BAAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3baac8;
        }
    }
    ctx->pc = 0x3BAAE4u;
    // 0x3baae4: 0xc0eea5e  jal         func_3BA978
    ctx->pc = 0x3BAAE4u;
    SET_GPR_U32(ctx, 31, 0x3BAAECu);
    ctx->pc = 0x3BAAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAAE4u;
    // 0x3baae8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA978u, 0x3BAAE4u, 0x3BAAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAAECu;
label_3baaec:
    // 0x3baaec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3baaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3baaf0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3baaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3baaf4: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x3baaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x3baaf8: 0x34e7b020  ori         $a3, $a3, 0xB020
    ctx->pc = 0x3baaf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45088);
    // 0x3baafc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3baafcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x3bab00: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3bab00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3bab04: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x3bab04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x3bab08: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3bab08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3bab0c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3bab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3bab10: 0x34c62020  ori         $a2, $a2, 0x2020
    ctx->pc = 0x3bab10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8224);
    // 0x3bab14: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bab14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bab18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bab18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bab1c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3bab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x3bab20: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x3bab20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x3bab24: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3bab24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3bab28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bab28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x3bab2c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3bab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3bab30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3bab30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x3bab34: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3bab34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3bab38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bab38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3bab3c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3bab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3bab40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bab40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bab44: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB44u;
        // 0x3bab48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAB4Cu;
    // 0x3bab4c: 0x0  nop
    ctx->pc = 0x3bab4cu;
    // NOP
    ctx->pc = 0x3bab50u;
}
