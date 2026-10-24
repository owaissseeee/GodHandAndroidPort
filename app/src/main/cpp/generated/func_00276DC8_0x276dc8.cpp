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

// Function: func_00276DC8
// Address: 0x276dc8 - 0x276e90
void func_00276DC8_0x276dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276DC8_0x276dc8");
#endif

    switch (ctx->pc) {
        case 0x276df4u: goto label_276df4;
        case 0x276e0cu: goto label_276e0c;
        case 0x276e40u: goto label_276e40;
        case 0x276e7cu: goto label_276e7c;
        default: break;
    }

    ctx->pc = 0x276dc8u;

    // 0x276dc8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x276dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x276dcc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x276dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x276dd0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x276dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x276dd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x276dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x276dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ddc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x276ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x276de0: 0x8e3021b0  lw          $s0, 0x21B0($s1)
    ctx->pc = 0x276de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8624)));
    // 0x276de4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x276DE4u;
    {
        const bool branch_taken_0x276de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x276DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DE4u;
        // 0x276de8: 0xae22218c  sw          $v0, 0x218C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276de4) {
            ctx->pc = 0x276E6Cu;
            goto label_276e6c;
        }
    }
    ctx->pc = 0x276DECu;
    // 0x276dec: 0xc09d12e  jal         func_2744B8
    ctx->pc = 0x276DECu;
    SET_GPR_U32(ctx, 31, 0x276DF4u);
    ctx->pc = 0x276DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DECu;
    // 0x276df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2744B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744B8u, 0x276DECu, 0x276DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DF4u;
label_276df4:
    // 0x276df4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x276DF4u;
    {
        const bool branch_taken_0x276df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DF4u;
        // 0x276df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276df4) {
            ctx->pc = 0x276E70u;
            goto label_276e70;
        }
    }
    ctx->pc = 0x276DFCu;
    // 0x276dfc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x276dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x276e00: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x276e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276e04: 0xc051e62  jal         func_147988
    ctx->pc = 0x276E04u;
    SET_GPR_U32(ctx, 31, 0x276E0Cu);
    ctx->pc = 0x276E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E04u;
    // 0x276e08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x276E04u, 0x276E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E0Cu;
label_276e0c:
    // 0x276e0c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x276e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x276e10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x276e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x276e14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276e18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x276e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276e1c: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x276e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x276e20: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x276e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x276e24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276e28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x276e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e2c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x276e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x276e30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x276e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e34: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x276e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x276e38: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x276E38u;
    SET_GPR_U32(ctx, 31, 0x276E40u);
    ctx->pc = 0x276E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E38u;
    // 0x276e3c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x276E38u, 0x276E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E40u;
label_276e40:
    // 0x276e40: 0x26232190  addiu       $v1, $s1, 0x2190
    ctx->pc = 0x276e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8592));
    // 0x276e44: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x276e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276e48: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276E48u;
    {
        const bool branch_taken_0x276e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x276E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E48u;
        // 0x276e4c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e48) {
            ctx->pc = 0x276E64u;
            goto label_276e64;
        }
    }
    ctx->pc = 0x276E50u;
    // 0x276e50: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x276e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276e54: 0xe6202190  swc1        $f0, 0x2190($s1)
    ctx->pc = 0x276e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8592), bits); }
    // 0x276e58: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x276e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x276e5c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x276e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276e60: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x276e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_276e64:
    // 0x276e64: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x276e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x276e68: 0xae22218c  sw          $v0, 0x218C($s1)
    ctx->pc = 0x276e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8588), GPR_U32(ctx, 2));
label_276e6c:
    // 0x276e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276e70:
    // 0x276e70: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x276e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x276e74: 0xc041004  jal         func_104010
    ctx->pc = 0x276E74u;
    SET_GPR_U32(ctx, 31, 0x276E7Cu);
    ctx->pc = 0x276E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E74u;
    // 0x276e78: 0x248605b0  addiu       $a2, $a0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104010u, 0x276E74u, 0x276E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E7Cu;
label_276e7c:
    // 0x276e7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x276e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276e80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x276e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276e84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x276e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276e88: 0x3e00008  jr          $ra
    ctx->pc = 0x276E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E88u;
        // 0x276e8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276E90u;
}
