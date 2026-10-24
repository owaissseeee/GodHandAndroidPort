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

// Function: SFD_AddWritePtr
// Address: 0x358ee8 - 0x358f68
void SFD_AddWritePtr_0x358ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_AddWritePtr_0x358ee8");
#endif

    switch (ctx->pc) {
        case 0x358f0cu: goto label_358f0c;
        default: break;
    }

    ctx->pc = 0x358ee8u;

    // 0x358ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358ef0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x358ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358ef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358efc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x358efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x358f00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x358f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x358f04: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x358F04u;
    SET_GPR_U32(ctx, 31, 0x358F0Cu);
    ctx->pc = 0x358F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F04u;
    // 0x358f08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x358F04u, 0x358F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F0Cu;
label_358f0c:
    // 0x358f0c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x358f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x358f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x358f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f18: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x358f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f1c: 0x34a50135  ori         $a1, $a1, 0x135
    ctx->pc = 0x358f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
    // 0x358f20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x358F20u;
    {
        const bool branch_taken_0x358f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F20u;
        // 0x358f24: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f20) {
            ctx->pc = 0x358F48u;
            goto label_358f48;
        }
    }
    ctx->pc = 0x358F28u;
    // 0x358f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358f34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x358f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358f38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x358f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358f3c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x358F3Cu;
    ctx->pc = 0x358F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F3Cu;
    // 0x358f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x358F3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358F44u;
    // 0x358f44: 0x0  nop
    ctx->pc = 0x358f44u;
    // NOP
label_358f48:
    // 0x358f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358f54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x358f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358f58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x358f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358f5c: 0x80d70b4  j           func_35C2D0
    ctx->pc = 0x358F5Cu;
    ctx->pc = 0x358F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F5Cu;
    // 0x358f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x358F5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358F64u;
    // 0x358f64: 0x0  nop
    ctx->pc = 0x358f64u;
    // NOP
    ctx->pc = 0x358f68u;
}
