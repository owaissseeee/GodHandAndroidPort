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

// Function: func_00355E88
// Address: 0x355e88 - 0x355f88
void func_00355E88_0x355e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355E88_0x355e88");
#endif

    switch (ctx->pc) {
        case 0x355ea0u: goto label_355ea0;
        case 0x355eacu: goto label_355eac;
        case 0x355ef8u: goto label_355ef8;
        case 0x355f1cu: goto label_355f1c;
        case 0x355f74u: goto label_355f74;
        default: break;
    }

    ctx->pc = 0x355e88u;

    // 0x355e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x355e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x355e98: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x355E98u;
    SET_GPR_U32(ctx, 31, 0x355EA0u);
    ctx->pc = 0x355E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355E98u;
    // 0x355e9c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x355E98u, 0x355EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355EA0u;
label_355ea0:
    // 0x355ea0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x355ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x355ea4: 0xc0d5620  jal         func_355880
    ctx->pc = 0x355EA4u;
    SET_GPR_U32(ctx, 31, 0x355EACu);
    ctx->pc = 0x355EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355EA4u;
    // 0x355ea8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355880u, 0x355EA4u, 0x355EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355EACu;
label_355eac:
    // 0x355eac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x355eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x355eb0: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x355eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x355eb4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x355eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x355eb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x355eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x355ebc: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x355ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x355ec0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x355ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x355ec4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x355ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x355ec8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x355ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x355ecc: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x355eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x355ed0: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x355ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x355ed4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x355ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x355ed8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x355ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B430u));
    // 0x355edc: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x355edcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x355ee0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x355ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x355ee4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x355ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u));
    // 0x355ee8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x355ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x355eec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x355eecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x355ef0: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x355ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x355ef4: 0x0  nop
    ctx->pc = 0x355ef4u;
    // NOP
label_355ef8:
    // 0x355ef8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x355ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x355efc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x355efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x355f00: 0x0  nop
    ctx->pc = 0x355f00u;
    // NOP
    // 0x355f04: 0x0  nop
    ctx->pc = 0x355f04u;
    // NOP
    // 0x355f08: 0x0  nop
    ctx->pc = 0x355f08u;
    // NOP
    // 0x355f0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x355F0Cu;
    {
        const bool branch_taken_0x355f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355f0c) {
            ctx->pc = 0x355EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355ef8;
        }
    }
    ctx->pc = 0x355F14u;
    // 0x355f14: 0xc0d5606  jal         func_355818
    ctx->pc = 0x355F14u;
    SET_GPR_U32(ctx, 31, 0x355F1Cu);
    ctx->pc = 0x355F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355F14u;
    // 0x355f18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355818u, 0x355F14u, 0x355F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355F1Cu;
label_355f1c:
    // 0x355f1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x355f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x355f20: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x355f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x355f24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x355f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x355f28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355f28u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x355f2c: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x355f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x355f30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x355f30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x355f34: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x355f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x355f38: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x355f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x355f3c: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x355f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x355f40: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x355f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x355f44: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x355f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x355f48: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x355f48u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x355f4c: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x355f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x355f50: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x355f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x355f54: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x355f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x355f58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x355f58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x355f5c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x355f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x355f60: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x355f60u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x355f64: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x355f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x355f68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x355f68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x355f6c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x355F6Cu;
    SET_GPR_U32(ctx, 31, 0x355F74u);
    ctx->pc = 0x355F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355F6Cu;
    // 0x355f70: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x355F6Cu, 0x355F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355F74u;
label_355f74:
    // 0x355f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355f7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x355f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355f80: 0x3e00008  jr          $ra
    ctx->pc = 0x355F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F80u;
        // 0x355f84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355F88u;
}
