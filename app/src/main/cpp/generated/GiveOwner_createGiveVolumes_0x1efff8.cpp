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

// Function: GiveOwner_createGiveVolumes
// Address: 0x1efff8 - 0x1f00e8
void GiveOwner_createGiveVolumes_0x1efff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GiveOwner_createGiveVolumes_0x1efff8");
#endif

    switch (ctx->pc) {
        case 0x1f0040u: goto label_1f0040;
        case 0x1f0054u: goto label_1f0054;
        case 0x1f0080u: goto label_1f0080;
        case 0x1f009cu: goto label_1f009c;
        default: break;
    }

    ctx->pc = 0x1efff8u;

    // 0x1efff8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1efffc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1efffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f0000: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f0000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f0004: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f0004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f0008: 0x24900bb0  addiu       $s0, $a0, 0xBB0
    ctx->pc = 0x1f0008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2992));
    // 0x1f000c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f0010: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f0010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0014: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f0018: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x1f0018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f001c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1f001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1f0020: 0x24130055  addiu       $s3, $zero, 0x55
    ctx->pc = 0x1f0020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1f0024: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1f0024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1f0028: 0x3c140074  lui         $s4, 0x74
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
    // 0x1f002c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0030: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x1f0030u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x1f0034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0038: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f003c: 0x0  nop
    ctx->pc = 0x1f003cu;
    // NOP
label_1f0040:
    // 0x1f0040: 0x26a44380  addiu       $a0, $s5, 0x4380
    ctx->pc = 0x1f0040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17280));
    // 0x1f0044: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f0044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f0048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f004c: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1F004Cu;
    SET_GPR_U32(ctx, 31, 0x1F0054u);
    ctx->pc = 0x1F0050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F004Cu;
    // 0x1f0050: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1F004Cu, 0x1F0054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0054u;
label_1f0054:
    // 0x1f0054: 0x26857ac0  addiu       $a1, $s4, 0x7AC0
    ctx->pc = 0x1f0054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 31424));
    // 0x1f0058: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f0058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f005c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f005cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0064: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0064u;
    {
        const bool branch_taken_0x1f0064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0064u;
        // 0x1f0068: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0064) {
            ctx->pc = 0x1F00ACu;
            goto label_1f00ac;
        }
    }
    ctx->pc = 0x1F006Cu;
    // 0x1f006c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0070: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f0070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f0074: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f0074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f0078: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1F0078u;
    SET_GPR_U32(ctx, 31, 0x1F0080u);
    ctx->pc = 0x1F007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0078u;
    // 0x1f007c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1F0078u, 0x1F0080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0080u;
label_1f0080:
    // 0x1f0080: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f0080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f0084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0088: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x1f0088u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x1f008c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f0090: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x1f0090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x1f0094: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1F0094u;
    SET_GPR_U32(ctx, 31, 0x1F009Cu);
    ctx->pc = 0x1F0098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0094u;
    // 0x1f0098: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1F0094u, 0x1F009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F009Cu;
label_1f009c:
    // 0x1f009c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f00a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f00a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f00a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f00ac:
    // 0x1f00ac: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x1f00acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f00b0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1F00B0u;
    {
        const bool branch_taken_0x1f00b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00B0u;
        // 0x1f00b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00b0) {
            ctx->pc = 0x1F0040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0040;
        }
    }
    ctx->pc = 0x1F00B8u;
    // 0x1f00b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f00b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f00bc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f00bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f00c0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f00c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f00c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f00c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f00c8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1f00c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f00cc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1f00ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f00d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f00d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f00d4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1f00d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f00d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F00D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00D8u;
        // 0x1f00dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F00D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F00E0u;
    // 0x1f00e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f00e4: 0x0  nop
    ctx->pc = 0x1f00e4u;
    // NOP
    ctx->pc = 0x1f00e8u;
}
