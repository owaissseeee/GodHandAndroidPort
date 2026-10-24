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

// Function: func_001142E0
// Address: 0x1142e0 - 0x114460
void func_001142E0_0x1142e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001142E0_0x1142e0");
#endif

    switch (ctx->pc) {
        case 0x11432cu: goto label_11432c;
        case 0x114358u: goto label_114358;
        case 0x114374u: goto label_114374;
        case 0x114390u: goto label_114390;
        case 0x1143acu: goto label_1143ac;
        case 0x1143c0u: goto label_1143c0;
        case 0x1143ecu: goto label_1143ec;
        case 0x1143f8u: goto label_1143f8;
        case 0x114404u: goto label_114404;
        default: break;
    }

    ctx->pc = 0x1142e0u;

    // 0x1142e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1142e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1142e4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1142e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1142e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1142e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1142ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1142ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1142f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1142f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1142f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1142f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142f8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1142f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1142fc: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1142fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x114300: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x114300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x114304: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114304u;
    {
        const bool branch_taken_0x114304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114304u;
        // 0x114308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114304) {
            ctx->pc = 0x11431Cu;
            goto label_11431c;
        }
    }
    ctx->pc = 0x11430Cu;
    // 0x11430c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11430Cu;
    {
        const bool branch_taken_0x11430c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11430Cu;
        // 0x114310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11430c) {
            ctx->pc = 0x1143B8u;
            goto label_1143b8;
        }
    }
    ctx->pc = 0x114314u;
    // 0x114314: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x114314u;
    {
        const bool branch_taken_0x114314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114314) {
            ctx->pc = 0x1143FCu;
            goto label_1143fc;
        }
    }
    ctx->pc = 0x11431Cu;
label_11431c:
    // 0x11431c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x11431cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x114320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114324: 0xc049396  jal         func_124E58
    ctx->pc = 0x114324u;
    SET_GPR_U32(ctx, 31, 0x11432Cu);
    ctx->pc = 0x114328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114324u;
    // 0x114328: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x114324u, 0x11432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11432Cu;
label_11432c:
    // 0x11432c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x114330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x114334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114338: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11433c: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x11433cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x114340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114344: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x114344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x114348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x114348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11434c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x114350: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x114350u;
    SET_GPR_U32(ctx, 31, 0x114358u);
    ctx->pc = 0x114354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114350u;
    // 0x114354: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x114350u, 0x114358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114358u;
label_114358:
    // 0x114358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11435c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x114360: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x114360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x114364: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x114364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x114368: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11436c: 0xc042902  jal         func_10A408
    ctx->pc = 0x11436Cu;
    SET_GPR_U32(ctx, 31, 0x114374u);
    ctx->pc = 0x114370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11436Cu;
    // 0x114370: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11436Cu, 0x114374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114374u;
label_114374:
    // 0x114374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114378: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x114378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11437c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x11437cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x114380: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x114380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x114384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114388: 0xc042908  jal         func_10A420
    ctx->pc = 0x114388u;
    SET_GPR_U32(ctx, 31, 0x114390u);
    ctx->pc = 0x11438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114388u;
    // 0x11438c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x114388u, 0x114390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114390u;
label_114390:
    // 0x114390: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x114390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x114394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114398: 0xa2021684  sb          $v0, 0x1684($s0)
    ctx->pc = 0x114398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x11439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143a0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1143a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1143a4: 0xc04290e  jal         func_10A438
    ctx->pc = 0x1143A4u;
    SET_GPR_U32(ctx, 31, 0x1143ACu);
    ctx->pc = 0x1143A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143A4u;
    // 0x1143a8: 0xa60303ac  sh          $v1, 0x3AC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x1143A4u, 0x1143ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143ACu;
label_1143ac:
    // 0x1143ac: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1143acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1143b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1143b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1143b4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1143b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1143b8:
    // 0x1143b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1143B8u;
    SET_GPR_U32(ctx, 31, 0x1143C0u);
    ctx->pc = 0x1143BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143B8u;
    // 0x1143bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1143B8u, 0x1143C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143C0u;
label_1143c0:
    // 0x1143c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1143C0u;
    {
        const bool branch_taken_0x1143c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1143c0) {
            ctx->pc = 0x1143D8u;
            goto label_1143d8;
        }
    }
    ctx->pc = 0x1143C8u;
    // 0x1143c8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1143c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1143cc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1143ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1143d0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1143d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1143d4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1143d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1143d8:
    // 0x1143d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1143d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1143dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1143dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1143e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1143e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143e4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1143E4u;
    SET_GPR_U32(ctx, 31, 0x1143ECu);
    ctx->pc = 0x1143E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143E4u;
    // 0x1143e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1143E4u, 0x1143ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143ECu;
label_1143ec:
    // 0x1143ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1143ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1143f0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1143F0u;
    SET_GPR_U32(ctx, 31, 0x1143F8u);
    ctx->pc = 0x1143F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143F0u;
    // 0x1143f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1143F0u, 0x1143F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143F8u;
label_1143f8:
    // 0x1143f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1143f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1143fc:
    // 0x1143fc: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1143FCu;
    SET_GPR_U32(ctx, 31, 0x114404u);
    ctx->pc = 0x114400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143FCu;
    // 0x114400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1143FCu, 0x114404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114404u;
label_114404:
    // 0x114404: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x114404u;
    {
        const bool branch_taken_0x114404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114404) {
            ctx->pc = 0x114408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114404u;
            // 0x114408: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11444Cu;
            goto label_11444c;
        }
    }
    ctx->pc = 0x11440Cu;
    // 0x11440c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11440cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x114410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x114414: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114414u;
    {
        const bool branch_taken_0x114414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114414u;
        // 0x114418: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114414) {
            ctx->pc = 0x11442Cu;
            goto label_11442c;
        }
    }
    ctx->pc = 0x11441Cu;
    // 0x11441c: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x11441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x114420: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x114420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x114424: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x114424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x114428: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x114428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
label_11442c:
    // 0x11442c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11442cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x114430: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x114434: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x114434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x114438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11443c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x11443cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x114440: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x114440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x114444: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x114444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x114448: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x114448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11444c:
    // 0x11444c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11444cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114450: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x114450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x114454: 0x3e00008  jr          $ra
    ctx->pc = 0x114454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114454u;
        // 0x114458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11445Cu;
    // 0x11445c: 0x0  nop
    ctx->pc = 0x11445cu;
    // NOP
    ctx->pc = 0x114460u;
}
