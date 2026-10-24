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

// Function: func_0032D3A8
// Address: 0x32d3a8 - 0x32d430
void func_0032D3A8_0x32d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D3A8_0x32d3a8");
#endif

    switch (ctx->pc) {
        case 0x32d3e0u: goto label_32d3e0;
        case 0x32d3f0u: goto label_32d3f0;
        case 0x32d400u: goto label_32d400;
        case 0x32d408u: goto label_32d408;
        default: break;
    }

    ctx->pc = 0x32d3a8u;

    // 0x32d3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32d3ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32d3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32d3b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x32d3b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x32d3c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32d3c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3cc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x32d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32d3d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x32d3d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32d3d8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32D3D8u;
    SET_GPR_U32(ctx, 31, 0x32D3E0u);
    ctx->pc = 0x32D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3D8u;
    // 0x32d3dc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32D3D8u, 0x32D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3E0u;
label_32d3e0:
    // 0x32d3e0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x32d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x32d3e4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x32d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x32d3e8: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32D3E8u;
    SET_GPR_U32(ctx, 31, 0x32D3F0u);
    ctx->pc = 0x32D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3E8u;
    // 0x32d3ec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32D3E8u, 0x32D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3F0u;
label_32d3f0:
    // 0x32d3f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32d3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32d3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3f8: 0xc0cb50c  jal         func_32D430
    ctx->pc = 0x32D3F8u;
    SET_GPR_U32(ctx, 31, 0x32D400u);
    ctx->pc = 0x32D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3F8u;
    // 0x32d3fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D430u, 0x32D3F8u, 0x32D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D400u;
label_32d400:
    // 0x32d400: 0xc0cff22  jal         func_33FC88
    ctx->pc = 0x32D400u;
    SET_GPR_U32(ctx, 31, 0x32D408u);
    ctx->pc = 0x32D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D400u;
    // 0x32d404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32D400u, 0x32D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D408u;
label_32d408:
    // 0x32d408: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32d408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d40c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32d40cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d410: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32d410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d414: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32d414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d418: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32d418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32d41c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32d41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d420: 0x3e00008  jr          $ra
    ctx->pc = 0x32D420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D420u;
        // 0x32d424: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D428u;
    // 0x32d428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x32d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32d42c: 0x0  nop
    ctx->pc = 0x32d42cu;
    // NOP
    ctx->pc = 0x32d430u;
}
