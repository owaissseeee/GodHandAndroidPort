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

// Function: func_0035F8B8
// Address: 0x35f8b8 - 0x35f900
void func_0035F8B8_0x35f8b8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F8B8_0x35f8b8");
#endif

    if (__builtin_expect(ctx->pc != 0x35f8b8u, 0)) {
        switch (ctx->pc) {
            case 0x35f8dcu: goto label_35f8dc;
            case 0x35f8ecu: goto label_35f8ec;
            default: break;
        }
    }


    // 0x35f8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f8bc: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f8c4: 0x3c10003f  lui         $s0, 0x3F
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x35f8c8: 0x2610e338  addiu       $s0, $s0, -0x1CC8
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959928));
    // 0x35f8cc: 0x240604c8  addiu       $a2, $zero, 0x4C8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
    // 0x35f8d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35f8d4: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x35F8DCu);
    ctx->pc = 0x35F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8D4u;
    // 0x35f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x35f8dcu)) {
        return;
    }
label_35f8dc:
    // 0x35f8dc: 0x24030008  addiu       $v1, $zero, 0x8
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35f8e0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x35f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x35f8e4: 0xc0d7f06  jal         func_35FC18
    SET_GPR_U32(ctx, 31, 0x35F8ECu);
    ctx->pc = 0x35F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8E4u;
    // 0x35f8e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_D_003EE34C_35FC18_0x35fc18, 0x35fc18u, 0x35f8ecu)) {
        return;
    }
label_35f8ec:
    // 0x35f8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f8f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35f8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f8f4: 0x80d8328  j           func_360CA0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8F4u;
    // 0x35f8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360CA0u, 0x35F8F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x35f8fc: 0x0  nop
    // NOP
    ctx->pc = 0x35f900u;
}