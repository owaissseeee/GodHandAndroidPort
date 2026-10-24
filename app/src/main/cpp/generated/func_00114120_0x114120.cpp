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

// Function: func_00114120
// Address: 0x114120 - 0x1142e0
void func_00114120_0x114120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00114120_0x114120");
#endif

    switch (ctx->pc) {
        case 0x114174u: goto label_114174;
        case 0x1141a4u: goto label_1141a4;
        case 0x1141c0u: goto label_1141c0;
        case 0x1141e8u: goto label_1141e8;
        case 0x1141f0u: goto label_1141f0;
        case 0x1141f8u: goto label_1141f8;
        case 0x11420cu: goto label_11420c;
        case 0x114238u: goto label_114238;
        case 0x114244u: goto label_114244;
        case 0x11426cu: goto label_11426c;
        case 0x114288u: goto label_114288;
        case 0x114290u: goto label_114290;
        case 0x114298u: goto label_114298;
        case 0x1142a4u: goto label_1142a4;
        default: break;
    }

    ctx->pc = 0x114120u;

    // 0x114120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114124: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x114124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x114128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11412c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x114130: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x114130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x114134: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x114134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x114138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11413c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114140: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x114140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x114144: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x114144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x114148: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x114148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x11414c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11414Cu;
    {
        const bool branch_taken_0x11414c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11414Cu;
        // 0x114150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11414c) {
            ctx->pc = 0x114164u;
            goto label_114164;
        }
    }
    ctx->pc = 0x114154u;
    // 0x114154: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x114154u;
    {
        const bool branch_taken_0x114154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x114154) {
            ctx->pc = 0x114204u;
            goto label_114204;
        }
    }
    ctx->pc = 0x11415Cu;
    // 0x11415c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11415Cu;
    {
        const bool branch_taken_0x11415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11415Cu;
        // 0x114160: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11415c) {
            ctx->pc = 0x114248u;
            goto label_114248;
        }
    }
    ctx->pc = 0x114164u;
label_114164:
    // 0x114164: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x114164u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x114168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11416c: 0xc049396  jal         func_124E58
    ctx->pc = 0x11416Cu;
    SET_GPR_U32(ctx, 31, 0x114174u);
    ctx->pc = 0x114170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11416Cu;
    // 0x114170: 0xa64005e2  sh          $zero, 0x5E2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x11416Cu, 0x114174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114174u;
label_114174:
    // 0x114174: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x114174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x114178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11417c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x114180: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x114180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x114184: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x114184u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x114188: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x114188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11418c: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x11418cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x114190: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114194: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x114194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x114198: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x114198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11419c: 0xc042902  jal         func_10A408
    ctx->pc = 0x11419Cu;
    SET_GPR_U32(ctx, 31, 0x1141A4u);
    ctx->pc = 0x1141A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11419Cu;
    // 0x1141a0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11419Cu, 0x1141A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141A4u;
label_1141a4:
    // 0x1141a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1141a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1141a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1141ac: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1141acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1141b0: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x1141b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1141b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1141b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141b8: 0xc042908  jal         func_10A420
    ctx->pc = 0x1141B8u;
    SET_GPR_U32(ctx, 31, 0x1141C0u);
    ctx->pc = 0x1141BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1141B8u;
    // 0x1141bc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1141B8u, 0x1141C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141C0u;
label_1141c0:
    // 0x1141c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1141c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1141c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1141c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1141c8: 0xa2421684  sb          $v0, 0x1684($s2)
    ctx->pc = 0x1141c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x1141cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1141ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1141d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141d4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1141d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1141d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1141d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1141dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1141E0u;
    SET_GPR_U32(ctx, 31, 0x1141E8u);
    ctx->pc = 0x1141E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1141E0u;
    // 0x1141e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1141E0u, 0x1141E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141E8u;
label_1141e8:
    // 0x1141e8: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x1141E8u;
    SET_GPR_U32(ctx, 31, 0x1141F0u);
    ctx->pc = 0x1141ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1141E8u;
    // 0x1141ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x1141E8u, 0x1141F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141F0u;
label_1141f0:
    // 0x1141f0: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x1141F0u;
    SET_GPR_U32(ctx, 31, 0x1141F8u);
    ctx->pc = 0x1141F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1141F0u;
    // 0x1141f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x1141F0u, 0x1141F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141F8u;
label_1141f8:
    // 0x1141f8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1141f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1141fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1141fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114200: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x114200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_114204:
    // 0x114204: 0xc055f06  jal         func_157C18
    ctx->pc = 0x114204u;
    SET_GPR_U32(ctx, 31, 0x11420Cu);
    ctx->pc = 0x114208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114204u;
    // 0x114208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x114204u, 0x11420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11420Cu;
label_11420c:
    // 0x11420c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11420Cu;
    {
        const bool branch_taken_0x11420c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11420c) {
            ctx->pc = 0x114224u;
            goto label_114224;
        }
    }
    ctx->pc = 0x114214u;
    // 0x114214: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x114214u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x114218: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x114218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11421c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x11421cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x114220: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x114220u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_114224:
    // 0x114224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114228: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x114228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11422c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114230: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x114230u;
    SET_GPR_U32(ctx, 31, 0x114238u);
    ctx->pc = 0x114234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114230u;
    // 0x114234: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114230u, 0x114238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114238u;
label_114238:
    // 0x114238: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11423c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11423Cu;
    SET_GPR_U32(ctx, 31, 0x114244u);
    ctx->pc = 0x114240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11423Cu;
    // 0x114240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11423Cu, 0x114244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114244u;
label_114244:
    // 0x114244: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x114244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_114248:
    // 0x114248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11424c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11424Cu;
    {
        const bool branch_taken_0x11424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11424Cu;
        // 0x114250: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11424c) {
            ctx->pc = 0x114290u;
            goto label_114290;
        }
    }
    ctx->pc = 0x114254u;
    // 0x114254: 0x2444b000  addiu       $a0, $v0, -0x5000
    ctx->pc = 0x114254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x114258: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x114258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11425c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11425Cu;
    {
        const bool branch_taken_0x11425c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11425c) {
            ctx->pc = 0x114290u;
            goto label_114290;
        }
    }
    ctx->pc = 0x114264u;
    // 0x114264: 0xc0aa732  jal         func_2A9CC8
    ctx->pc = 0x114264u;
    SET_GPR_U32(ctx, 31, 0x11426Cu);
    ctx->pc = 0x114268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114264u;
    // 0x114268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9CC8u, 0x114264u, 0x11426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11426Cu;
label_11426c:
    // 0x11426c: 0x8e4215f4  lw          $v0, 0x15F4($s2)
    ctx->pc = 0x11426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5620)));
    // 0x114270: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x114270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x114274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114278: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x114278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x11427c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x114280: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x114280u;
    SET_GPR_U32(ctx, 31, 0x114288u);
    ctx->pc = 0x114284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114280u;
    // 0x114284: 0xae4215f4  sw          $v0, 0x15F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x114280u, 0x114288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114288u;
label_114288:
    // 0x114288: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x114288u;
    SET_GPR_U32(ctx, 31, 0x114290u);
    ctx->pc = 0x11428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114288u;
    // 0x11428c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x114288u, 0x114290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114290u;
label_114290:
    // 0x114290: 0xc04290e  jal         func_10A438
    ctx->pc = 0x114290u;
    SET_GPR_U32(ctx, 31, 0x114298u);
    ctx->pc = 0x114294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114290u;
    // 0x114294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x114290u, 0x114298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114298u;
label_114298:
    // 0x114298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11429c: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11429Cu;
    SET_GPR_U32(ctx, 31, 0x1142A4u);
    ctx->pc = 0x1142A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11429Cu;
    // 0x1142a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11429Cu, 0x1142A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142A4u;
label_1142a4:
    // 0x1142a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1142A4u;
    {
        const bool branch_taken_0x1142a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1142A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142A4u;
        // 0x1142a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142a4) {
            ctx->pc = 0x1142C8u;
            goto label_1142c8;
        }
    }
    ctx->pc = 0x1142ACu;
    // 0x1142ac: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x1142acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x1142b0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1142b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1142b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1142b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1142b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1142b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1142bc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1142bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1142c0: 0xe6400674  swc1        $f0, 0x674($s2)
    ctx->pc = 0x1142c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1652), bits); }
    // 0x1142c4: 0xa64203ac  sh          $v0, 0x3AC($s2)
    ctx->pc = 0x1142c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 940), (uint16_t)GPR_U32(ctx, 2));
label_1142c8:
    // 0x1142c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1142c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1142cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1142ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1142d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1142d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1142d4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1142d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1142d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1142D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1142DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142D8u;
        // 0x1142dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1142D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1142E0u;
}
