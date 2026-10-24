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

// Function: func_00246F40
// Address: 0x246f40 - 0x247050
void func_00246F40_0x246f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00246F40_0x246f40");
#endif

    switch (ctx->pc) {
        case 0x246f68u: goto label_246f68;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fe8u: goto label_246fe8;
        case 0x24700cu: goto label_24700c;
        case 0x24701cu: goto label_24701c;
        case 0x247030u: goto label_247030;
        case 0x24703cu: goto label_24703c;
        default: break;
    }

    ctx->pc = 0x246f40u;

    // 0x246f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x246f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x246f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x246f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246f54: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x246f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x246f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f5c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x246f60: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x246F60u;
    SET_GPR_U32(ctx, 31, 0x246F68u);
    ctx->pc = 0x246F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F60u;
    // 0x246f64: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x246F60u, 0x246F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F68u;
label_246f68:
    // 0x246f68: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x246f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x246f6c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x246f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x246f70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x246f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x246f74: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x246f74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246f78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x246f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x246f7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x246f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x246f80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x246F80u;
    {
        const bool branch_taken_0x246f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F80u;
        // 0x246f84: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f80) {
            ctx->pc = 0x246F9Cu;
            goto label_246f9c;
        }
    }
    ctx->pc = 0x246F88u;
    // 0x246f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246f8c: 0x50a2001a  beql        $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x246F8Cu;
    {
        const bool branch_taken_0x246f8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x246f8c) {
            ctx->pc = 0x246F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F8Cu;
            // 0x246f90: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FF8u;
            goto label_246ff8;
        }
    }
    ctx->pc = 0x246F94u;
    // 0x246f94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x246F94u;
    {
        const bool branch_taken_0x246f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F94u;
        // 0x246f98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f94) {
            ctx->pc = 0x247040u;
            goto label_247040;
        }
    }
    ctx->pc = 0x246F9Cu;
label_246f9c:
    // 0x246f9c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246F9Cu;
    SET_GPR_U32(ctx, 31, 0x246FA4u);
    ctx->pc = 0x246FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F9Cu;
    // 0x246fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246F9Cu, 0x246FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FA4u;
label_246fa4:
    // 0x246fa4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246fa8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x246fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x246fac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246fb0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x246fb4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x246fb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x246fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fc0: 0x8c450c34  lw          $a1, 0xC34($v0)
    ctx->pc = 0x246fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3124)));
    // 0x246fc4: 0x8c460c38  lw          $a2, 0xC38($v0)
    ctx->pc = 0x246fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
    // 0x246fc8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x246fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x246fcc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246FCCu;
    SET_GPR_U32(ctx, 31, 0x246FD4u);
    ctx->pc = 0x246FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FCCu;
    // 0x246fd0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246FCCu, 0x246FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FD4u;
label_246fd4:
    // 0x246fd4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x246fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x246fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fdc: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x246fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x246fe0: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x246FE0u;
    SET_GPR_U32(ctx, 31, 0x246FE8u);
    ctx->pc = 0x246FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FE0u;
    // 0x246fe4: 0xae0205b4  sw          $v0, 0x5B4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x246FE0u, 0x246FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FE8u;
label_246fe8:
    // 0x246fe8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x246fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246fec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246ff0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x246ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x246ff4: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x246ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_246ff8:
    // 0x246ff8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x246ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x246ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247000: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x247000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x247004: 0xc055f06  jal         func_157C18
    ctx->pc = 0x247004u;
    SET_GPR_U32(ctx, 31, 0x24700Cu);
    ctx->pc = 0x247008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247004u;
    // 0x247008: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x247004u, 0x24700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24700Cu;
label_24700c:
    // 0x24700c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24700Cu;
    {
        const bool branch_taken_0x24700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24700c) {
            ctx->pc = 0x24701Cu;
            goto label_24701c;
        }
    }
    ctx->pc = 0x247014u;
    // 0x247014: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x247014u;
    SET_GPR_U32(ctx, 31, 0x24701Cu);
    ctx->pc = 0x247018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247014u;
    // 0x247018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x247014u, 0x24701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24701Cu;
label_24701c:
    // 0x24701c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24701cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247020: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x247024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247028: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x247028u;
    SET_GPR_U32(ctx, 31, 0x247030u);
    ctx->pc = 0x24702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247028u;
    // 0x24702c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x247028u, 0x247030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247030u;
label_247030:
    // 0x247030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247034: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x247034u;
    SET_GPR_U32(ctx, 31, 0x24703Cu);
    ctx->pc = 0x247038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247034u;
    // 0x247038: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x247034u, 0x24703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24703Cu;
label_24703c:
    // 0x24703c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24703cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247040:
    // 0x247040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247044: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x247044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247048: 0x3e00008  jr          $ra
    ctx->pc = 0x247048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247048u;
        // 0x24704c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247050u;
}
