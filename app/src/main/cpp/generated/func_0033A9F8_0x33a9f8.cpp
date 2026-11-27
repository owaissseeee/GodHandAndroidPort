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

// Function: func_0033A9F8
// Address: 0x33a9f8 - 0x33aa48
void func_0033A9F8_0x33a9f8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A9F8_0x33a9f8");
#endif

    if (__builtin_expect(ctx->pc != 0x33a9f8u, 0)) {
        switch (ctx->pc) {
            case 0x33aa1cu: goto label_33aa1c;
            case 0x33aa2cu: goto label_33aa2c;
            default: break;
        }
    }


    // 0x33a9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33a9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33aa00: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aa04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33aa08: 0xa0882d  daddu       $s1, $a1, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aa0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33aa10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33aa14: 0xc0ce27e  jal         func_3389F8
    SET_GPR_U32(ctx, 31, 0x33AA1Cu);
    ctx->pc = 0x33AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA14u;
    // 0x33aa18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B658_3389F8_0x3389f8, 0x3389f8u, 0x33aa1cu)) {
        return;
    }
label_33aa1c:
    // 0x33aa1c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aa20: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aa24: 0xc0cea92  jal         func_33AA48
    SET_GPR_U32(ctx, 31, 0x33AA2Cu);
    ctx->pc = 0x33AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA24u;
    // 0x33aa28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033AA48_0x33aa48, 0x33aa48u, 0x33aa2cu)) {
        return;
    }
label_33aa2c:
    // 0x33aa2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33aa2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aa30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33aa30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33aa34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33aa34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aa38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33aa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33aa3c: 0x80ce284  j           func_338A10
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA3Cu;
    // 0x33aa40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33AA3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x33aa44: 0x0  nop
    // NOP
    ctx->pc = 0x33aa48u;
}