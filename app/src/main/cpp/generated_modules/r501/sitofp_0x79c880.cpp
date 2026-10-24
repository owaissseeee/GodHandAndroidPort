#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: sitofp
// Address: 0x79c880 - 0x79c938
void sitofp_0x79c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sitofp_0x79c880");
#endif

    switch (ctx->pc) {
        case 0x79c900u: goto label_79c900;
        case 0x79c92cu: goto label_79c92c;
        default: break;
    }

    ctx->pc = 0x79c880u;

    // 0x79c880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79c884: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c888: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x79c888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x79c88c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79c890: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x79c890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x79c894: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C894u;
    {
        const bool branch_taken_0x79c894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C894u;
        // 0x79c898: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c894) {
            ctx->pc = 0x79C8A8u;
            goto label_79c8a8;
        }
    }
    ctx->pc = 0x79C89Cu;
    // 0x79c89c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c8a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79C8A0u;
    {
        const bool branch_taken_0x79c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8A0u;
        // 0x79c8a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8a0) {
            ctx->pc = 0x79C924u;
            goto label_79c924;
        }
    }
    ctx->pc = 0x79C8A8u;
label_79c8a8:
    // 0x79c8a8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79c8ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79C8ACu;
    {
        const bool branch_taken_0x79c8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8ACu;
        // 0x79c8b0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8ac) {
            ctx->pc = 0x79C8D8u;
            goto label_79c8d8;
        }
    }
    ctx->pc = 0x79C8B4u;
    // 0x79c8b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79c8b8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C8B8u;
    {
        const bool branch_taken_0x79c8b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8B8u;
        // 0x79c8bc: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8b8) {
            ctx->pc = 0x79C8D0u;
            goto label_79c8d0;
        }
    }
    ctx->pc = 0x79C8C0u;
    // 0x79c8c0: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x79c8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x79c8c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79c8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79c8c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79C8C8u;
    {
        const bool branch_taken_0x79c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8C8u;
        // 0x79c8cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8c8) {
            ctx->pc = 0x79C930u;
            goto label_79c930;
        }
    }
    ctx->pc = 0x79C8D0u;
label_79c8d0:
    // 0x79c8d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C8D0u;
    {
        const bool branch_taken_0x79c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8D0u;
        // 0x79c8d4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8d0) {
            ctx->pc = 0x79C8DCu;
            goto label_79c8dc;
        }
    }
    ctx->pc = 0x79C8D8u;
label_79c8d8:
    // 0x79c8d8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x79c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_79c8dc:
    // 0x79c8dc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x79c8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79c8e0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79c8e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79c8e8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x79c8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x79c8ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79C8ECu;
    {
        const bool branch_taken_0x79c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8ECu;
        // 0x79c8f0: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8ec) {
            ctx->pc = 0x79C924u;
            goto label_79c924;
        }
    }
    ctx->pc = 0x79C8F4u;
    // 0x79c8f4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x79c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79c8f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79c8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79c8fc: 0x0  nop
    ctx->pc = 0x79c8fcu;
    // NOP
label_79c900:
    // 0x79c900: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x79c900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x79c904: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79c908: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79c908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c90c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x79c90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c910: 0x0  nop
    ctx->pc = 0x79c910u;
    // NOP
    // 0x79c914: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C914u;
    {
        const bool branch_taken_0x79c914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c914) {
            ctx->pc = 0x79C900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c900;
        }
    }
    ctx->pc = 0x79C91Cu;
    // 0x79c91c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x79c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x79c920: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x79c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_79c924:
    // 0x79c924: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x79C924u;
    SET_GPR_U32(ctx, 31, 0x79C92Cu);
    ctx->pc = 0x79C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C924u;
    // 0x79c928: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x79C924u, 0x79C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C92Cu;
label_79c92c:
    // 0x79c92c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c930:
    // 0x79c930: 0x3e00008  jr          $ra
    ctx->pc = 0x79C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C930u;
        // 0x79c934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C938u;
}
} // namespace gh_r501
