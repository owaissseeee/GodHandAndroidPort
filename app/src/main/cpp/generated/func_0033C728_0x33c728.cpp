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

// Function: func_0033C728
// Address: 0x33c728 - 0x33c770
void func_0033C728_0x33c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C728_0x33c728");
#endif

    if (__builtin_expect(ctx->pc != 0x33c728u, 0)) {
        switch (ctx->pc) {
            case 0x33c738u: goto label_33c738;
            case 0x33c740u: goto label_33c740;
            case 0x33c754u: goto label_33c754;
            default: break;
        }
    }


    // 0x33c728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c730: 0xc0cfe22  jal         func_33F888
    ctx->pc = 0x33C730u;
    SET_GPR_U32(ctx, 31, 0x33C738u);
    if (!runtime->callDirectStatic(rdram, ctx, &Obj33F8_Init_D003EB858_F888_0x33f888, 0x33f888u, 0x33c738u)) {
        return;
    }
    ctx->pc = 0x33C738u;
label_33c738:
    // 0x33c738: 0xc0cf148  jal         func_33C520
    ctx->pc = 0x33C738u;
    SET_GPR_U32(ctx, 31, 0x33C740u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033C520_0x33c520, 0x33c520u, 0x33c740u)) {
        return;
    }
    ctx->pc = 0x33C740u;
label_33c740:
    // 0x33c740: 0x3c04003f  lui         $a0, 0x3F
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33c744: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c748: 0x24849d60  addiu       $a0, $a0, -0x62A0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
    // 0x33c74c: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x33C754u);
    ctx->pc = 0x33C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C74Cu;
    // 0x33c750: 0x24061040  addiu       $a2, $zero, 0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x33c754u)) {
        return;
    }
    ctx->pc = 0x33C754u;
label_33c754:
    // 0x33c754: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c75c: 0x80cf1c2  j           func_33C708
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C75Cu;
    // 0x33c760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C708u, 0x33C75Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x33c764: 0x0  nop
    // NOP
    // 0x33c768: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33c76c: 0x0  nop
    // NOP
    ctx->pc = 0x33c770u;
}