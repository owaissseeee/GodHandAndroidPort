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

// Function: func_0032DFC0
// Address: 0x32dfc0 - 0x32e040
void func_0032DFC0_0x32dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DFC0_0x32dfc0");
#endif

    switch (ctx->pc) {
        case 0x32e010u: goto label_32e010;
        default: break;
    }

    ctx->pc = 0x32dfc0u;

    // 0x32dfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32dfc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32dfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dfcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32dfd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32dfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dfd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32dfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32dfd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32dfd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dfdc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x32DFDCu;
    {
        const bool branch_taken_0x32dfdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFDCu;
        // 0x32dfe0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfdc) {
            ctx->pc = 0x32E008u;
            goto label_32e008;
        }
    }
    ctx->pc = 0x32DFE4u;
    // 0x32dfe4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32dfe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32dfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dfec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32dfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32dff0: 0x24842c98  addiu       $a0, $a0, 0x2C98
    ctx->pc = 0x32dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11416));
    // 0x32dff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32dff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dff8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32dff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32dffc: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32DFFCu;
    ctx->pc = 0x32E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DFFCu;
    // 0x32e000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32DFFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E004u;
    // 0x32e004: 0x0  nop
    ctx->pc = 0x32e004u;
    // NOP
label_32e008:
    // 0x32e008: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32E008u;
    SET_GPR_U32(ctx, 31, 0x32E010u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32E008u, 0x32E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E010u;
label_32e010:
    // 0x32e010: 0xae1101c4  sw          $s1, 0x1C4($s0)
    ctx->pc = 0x32e010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 17));
    // 0x32e014: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x32e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x32e018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e01c: 0xae0201c8  sw          $v0, 0x1C8($s0)
    ctx->pc = 0x32e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
    // 0x32e020: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32e020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e028: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32e028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32e02c: 0x80cff22  j           func_33FC88
    ctx->pc = 0x32E02Cu;
    ctx->pc = 0x32E030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E02Cu;
    // 0x32e030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32E02Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E034u;
    // 0x32e034: 0x0  nop
    ctx->pc = 0x32e034u;
    // NOP
    // 0x32e038: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32e038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32e03c: 0x0  nop
    ctx->pc = 0x32e03cu;
    // NOP
    ctx->pc = 0x32e040u;
}
