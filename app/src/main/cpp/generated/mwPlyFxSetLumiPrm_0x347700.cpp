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

// Function: mwPlyFxSetLumiPrm
// Address: 0x347700 - 0x3477a8
void mwPlyFxSetLumiPrm_0x347700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwPlyFxSetLumiPrm_0x347700");
#endif

    switch (ctx->pc) {
        case 0x347724u: goto label_347724;
        default: break;
    }

    ctx->pc = 0x347700u;

    // 0x347700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347708: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x347708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34770c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x347710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x347718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34771c: 0xc0d1b12  jal         func_346C48
    ctx->pc = 0x34771Cu;
    SET_GPR_U32(ctx, 31, 0x347724u);
    ctx->pc = 0x347720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34771Cu;
    // 0x347720: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C48u, 0x34771Cu, 0x347724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347724u;
label_347724:
    // 0x347724: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x347724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x347728: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x347728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34772c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347734: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x347734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34773c: 0x2e070001  sltiu       $a3, $s0, 0x1
    ctx->pc = 0x34773cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x347740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x347744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347748: 0x80d7f56  j           func_35FD58
    ctx->pc = 0x347748u;
    ctx->pc = 0x34774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347748u;
    // 0x34774c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FD58u, 0x347748u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347750u;
    // 0x347750: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x347750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x347754: 0x0  nop
    ctx->pc = 0x347754u;
    // NOP
    // 0x347758: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x347758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34775c: 0x0  nop
    ctx->pc = 0x34775cu;
    // NOP
    // 0x347760: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x347764: 0x0  nop
    ctx->pc = 0x347764u;
    // NOP
    // 0x347768: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34776c: 0x0  nop
    ctx->pc = 0x34776cu;
    // NOP
    // 0x347770: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x347770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x347774: 0x0  nop
    ctx->pc = 0x347774u;
    // NOP
    // 0x347778: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34777c: 0x0  nop
    ctx->pc = 0x34777cu;
    // NOP
    // 0x347780: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x347784: 0x0  nop
    ctx->pc = 0x347784u;
    // NOP
    // 0x347788: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x347788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34778c: 0x0  nop
    ctx->pc = 0x34778cu;
    // NOP
    // 0x347790: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x347794: 0x0  nop
    ctx->pc = 0x347794u;
    // NOP
    // 0x347798: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34779c: 0x0  nop
    ctx->pc = 0x34779cu;
    // NOP
    // 0x3477a0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x3477a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3477a4: 0x0  nop
    ctx->pc = 0x3477a4u;
    // NOP
    ctx->pc = 0x3477a8u;
}
