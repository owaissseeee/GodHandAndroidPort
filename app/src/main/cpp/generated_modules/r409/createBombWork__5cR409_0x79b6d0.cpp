#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: createBombWork__5cR409
// Address: 0x79b6d0 - 0x79b7b8
void createBombWork__5cR409_0x79b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("createBombWork__5cR409_0x79b6d0");
#endif

    switch (ctx->pc) {
        case 0x79b718u: goto label_79b718;
        case 0x79b72cu: goto label_79b72c;
        case 0x79b758u: goto label_79b758;
        case 0x79b774u: goto label_79b774;
        default: break;
    }

    ctx->pc = 0x79b6d0u;

    // 0x79b6d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79b6d4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x79b6d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79b6d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79b6dc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79b6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79b6e0: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x79b6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x79b6e4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79b6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79b6e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79b6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79b6f0: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x79b6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79b6f4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79b6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79b6f8: 0x24130055  addiu       $s3, $zero, 0x55
    ctx->pc = 0x79b6f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x79b6fc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x79b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x79b700: 0x3c140074  lui         $s4, 0x74
    ctx->pc = 0x79b700u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
    // 0x79b704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b708: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x79b708u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x79b70c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b710: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b714: 0x0  nop
    ctx->pc = 0x79b714u;
    // NOP
label_79b718:
    // 0x79b718: 0x26a44380  addiu       $a0, $s5, 0x4380
    ctx->pc = 0x79b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17280));
    // 0x79b71c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b724: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x79B724u;
    SET_GPR_U32(ctx, 31, 0x79B72Cu);
    ctx->pc = 0x79B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B724u;
    // 0x79b728: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x79B724u, 0x79B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B72Cu;
label_79b72c:
    // 0x79b72c: 0x26857ac0  addiu       $a1, $s4, 0x7AC0
    ctx->pc = 0x79b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 31424));
    // 0x79b730: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79b730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b734: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b734u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79b738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b73c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B73Cu;
    {
        const bool branch_taken_0x79b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B73Cu;
        // 0x79b740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b73c) {
            ctx->pc = 0x79B784u;
            goto label_79b784;
        }
    }
    ctx->pc = 0x79B744u;
    // 0x79b744: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79b744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x79b748: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x79b748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x79b74c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x79b750: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x79B750u;
    SET_GPR_U32(ctx, 31, 0x79B758u);
    ctx->pc = 0x79B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B750u;
    // 0x79b754: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x79B750u, 0x79B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B758u;
label_79b758:
    // 0x79b758: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b760: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x79b760u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x79b764: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b768: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x79b768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x79b76c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x79B76Cu;
    SET_GPR_U32(ctx, 31, 0x79B774u);
    ctx->pc = 0x79B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B76Cu;
    // 0x79b770: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x79B76Cu, 0x79B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B774u;
label_79b774:
    // 0x79b774: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79b774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b77c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x79b77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x79b780: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79b784:
    // 0x79b784: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x79b784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b788: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79B788u;
    {
        const bool branch_taken_0x79b788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B788u;
        // 0x79b78c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b788) {
            ctx->pc = 0x79B718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b718;
        }
    }
    ctx->pc = 0x79B790u;
    // 0x79b790: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79b790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b794: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79b794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b798: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79b798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b79c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79b79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b7a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79b7a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b7a4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x79b7a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b7ac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x79b7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7B0u;
        // 0x79b7b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B7B8u;
}
} // namespace gh_r409
