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

// Function: UpdateAttackState2F6_1161E0
// Address: 0x1161e0 - 0x1162c0
void UpdateAttackState2F6_1161E0_0x1161e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateAttackState2F6_1161E0_0x1161e0");
#endif

    switch (ctx->pc) {
        case 0x116238u: goto label_116238;
        case 0x116240u: goto label_116240;
        case 0x11626cu: goto label_11626c;
        case 0x116288u: goto label_116288;
        case 0x116290u: goto label_116290;
        case 0x11629cu: goto label_11629c;
        case 0x1162a8u: goto label_1162a8;
        default: break;
    }

    ctx->pc = 0x1161e0u;

    // 0x1161e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1161e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1161e4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1161e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1161e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1161e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1161ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1161ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1161f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1161f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1161f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1161f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161f8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1161f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1161fc: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1161fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x116200: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x116200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x116204: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x116204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x116208: 0x34422080  ori         $v0, $v0, 0x2080
    ctx->pc = 0x116208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8320);
    // 0x11620c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11620Cu;
    {
        const bool branch_taken_0x11620c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11620Cu;
        // 0x116210: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11620c) {
            ctx->pc = 0x116228u;
            goto label_116228;
        }
    }
    ctx->pc = 0x116214u;
    // 0x116214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116218: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x116218u;
    {
        const bool branch_taken_0x116218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x116218) {
            ctx->pc = 0x116278u;
            goto label_116278;
        }
    }
    ctx->pc = 0x116220u;
    // 0x116220: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x116220u;
    {
        const bool branch_taken_0x116220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116220u;
        // 0x116224: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116220) {
            ctx->pc = 0x1162ACu;
            goto label_1162ac;
        }
    }
    ctx->pc = 0x116228u;
label_116228:
    // 0x116228: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x116228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11622c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116230: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x116230u;
    SET_GPR_U32(ctx, 31, 0x116238u);
    ctx->pc = 0x116234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116230u;
    // 0x116234: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x116230u, 0x116238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116238u;
label_116238:
    // 0x116238: 0xc049396  jal         func_124E58
    ctx->pc = 0x116238u;
    SET_GPR_U32(ctx, 31, 0x116240u);
    ctx->pc = 0x11623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116238u;
    // 0x11623c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x116238u, 0x116240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116240u;
label_116240:
    // 0x116240: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x116240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x116244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x116248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11624c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11624cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116250: 0x8c4508d8  lw          $a1, 0x8D8($v0)
    ctx->pc = 0x116250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2264)));
    // 0x116254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116258: 0x8c4608dc  lw          $a2, 0x8DC($v0)
    ctx->pc = 0x116258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2268)));
    // 0x11625c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11625cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116260: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x116260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x116264: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x116264u;
    SET_GPR_U32(ctx, 31, 0x11626Cu);
    ctx->pc = 0x116268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116264u;
    // 0x116268: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x116264u, 0x11626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11626Cu;
label_11626c:
    // 0x11626c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11626cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x116270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116274: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x116274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_116278:
    // 0x116278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11627c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11627cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116280: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x116280u;
    SET_GPR_U32(ctx, 31, 0x116288u);
    ctx->pc = 0x116284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116280u;
    // 0x116284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x116280u, 0x116288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116288u;
label_116288:
    // 0x116288: 0xc055f06  jal         func_157C18
    ctx->pc = 0x116288u;
    SET_GPR_U32(ctx, 31, 0x116290u);
    ctx->pc = 0x11628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116288u;
    // 0x11628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x116288u, 0x116290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116290u;
label_116290:
    // 0x116290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116294: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x116294u;
    SET_GPR_U32(ctx, 31, 0x11629Cu);
    ctx->pc = 0x116298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116294u;
    // 0x116298: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x116294u, 0x11629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11629Cu;
label_11629c:
    // 0x11629c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162a0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1162A0u;
    SET_GPR_U32(ctx, 31, 0x1162A8u);
    ctx->pc = 0x1162A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162A0u;
    // 0x1162a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1162A0u, 0x1162A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162A8u;
label_1162a8:
    // 0x1162a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1162a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1162ac:
    // 0x1162ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1162acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1162b0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1162b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1162b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1162B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1162B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162B4u;
        // 0x1162b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1162B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1162BCu;
    // 0x1162bc: 0x0  nop
    ctx->pc = 0x1162bcu;
    // NOP
    ctx->pc = 0x1162c0u;
}
