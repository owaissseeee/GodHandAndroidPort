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

// Function: _$_7istream
// Address: 0x38a398 - 0x38a438
void ps2____7istream_0x38a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____7istream_0x38a398");
#endif

    switch (ctx->pc) {
        case 0x38a410u: goto label_38a410;
        case 0x38a424u: goto label_38a424;
        default: break;
    }

    ctx->pc = 0x38a398u;

    // 0x38a398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38a39c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38a3a0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x38a3a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38a3a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38a3b0: 0x2444d168  addiu       $a0, $v0, -0x2E98
    ctx->pc = 0x38a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955368));
    // 0x38a3b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38a3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3b8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x38a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38a3bc: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x38A3BCu;
    {
        const bool branch_taken_0x38a3bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3BCu;
        // 0x38a3c0: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a3bc) {
            ctx->pc = 0x38A3ECu;
            goto label_38a3ec;
        }
    }
    ctx->pc = 0x38A3C4u;
    // 0x38a3c4: 0xdc45d168  ld          $a1, -0x2E98($v0)
    ctx->pc = 0x38a3c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955368)));
    // 0x38a3c8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x38a3c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a3cc: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x38a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x38a3d0: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x38a3d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a3d4: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x38a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x38a3d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38a3dc: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x38a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x38a3e0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x38a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x38a3e4: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x38a3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a3e8: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x38a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_38a3ec:
    // 0x38a3ec: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x38a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x38a3f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A3F0u;
    {
        const bool branch_taken_0x38a3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3F0u;
        // 0x38a3f4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a3f0) {
            ctx->pc = 0x38A410u;
            goto label_38a410;
        }
    }
    ctx->pc = 0x38A3F8u;
    // 0x38a3f8: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x38a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x38a3fc: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x38a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x38a400: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A400u;
    {
        const bool branch_taken_0x38a400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A400u;
        // 0x38a404: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a400) {
            ctx->pc = 0x38A410u;
            goto label_38a410;
        }
    }
    ctx->pc = 0x38A408u;
    // 0x38a408: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x38A408u;
    SET_GPR_U32(ctx, 31, 0x38A410u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x38A408u, 0x38A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A410u;
label_38a410:
    // 0x38a410: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x38a410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x38a414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A414u;
    {
        const bool branch_taken_0x38a414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A414u;
        // 0x38a418: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a414) {
            ctx->pc = 0x38A428u;
            goto label_38a428;
        }
    }
    ctx->pc = 0x38A41Cu;
    // 0x38a41c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x38A41Cu;
    SET_GPR_U32(ctx, 31, 0x38A424u);
    ctx->pc = 0x38A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A41Cu;
    // 0x38a420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x38A41Cu, 0x38A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A424u;
label_38a424:
    // 0x38a424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38a424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38a428:
    // 0x38a428: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38a428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a42c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38a42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a430: 0x3e00008  jr          $ra
    ctx->pc = 0x38A430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A430u;
        // 0x38a434: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A438u;
}
