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

// Function: func_0024A0B0
// Address: 0x24a0b0 - 0x24a518
void func_0024A0B0_0x24a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024A0B0_0x24a0b0");
#endif

    switch (ctx->pc) {
        case 0x24a10cu: goto label_24a10c;
        case 0x24a138u: goto label_24a138;
        case 0x24a144u: goto label_24a144;
        case 0x24a160u: goto label_24a160;
        case 0x24a174u: goto label_24a174;
        case 0x24a188u: goto label_24a188;
        case 0x24a1a0u: goto label_24a1a0;
        case 0x24a1b4u: goto label_24a1b4;
        case 0x24a1c8u: goto label_24a1c8;
        case 0x24a20cu: goto label_24a20c;
        case 0x24a218u: goto label_24a218;
        case 0x24a228u: goto label_24a228;
        case 0x24a230u: goto label_24a230;
        case 0x24a2acu: goto label_24a2ac;
        case 0x24a418u: goto label_24a418;
        case 0x24a498u: goto label_24a498;
        case 0x24a4d4u: goto label_24a4d4;
        case 0x24a4e0u: goto label_24a4e0;
        case 0x24a4fcu: goto label_24a4fc;
        default: break;
    }

    ctx->pc = 0x24a0b0u;

    // 0x24a0b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x24a0b4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x24a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x24a0b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a0bc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x24a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x24a0c0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24a0c4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x24a0c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x24a0c8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x24a0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24a0cc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x24a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24a0d0: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x24a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24a0d4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x24a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x24a0d8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x24a0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x24a0dc: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x24a0dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a0e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24a0e4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A0E4u;
    {
        const bool branch_taken_0x24a0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0E4u;
        // 0x24a0e8: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0e4) {
            ctx->pc = 0x24A100u;
            goto label_24a100;
        }
    }
    ctx->pc = 0x24A0ECu;
    // 0x24a0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a0f0: 0x1082009d  beq         $a0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x24A0F0u;
    {
        const bool branch_taken_0x24a0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a0f0) {
            ctx->pc = 0x24A368u;
            goto label_24a368;
        }
    }
    ctx->pc = 0x24A0F8u;
    // 0x24a0f8: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x24A0F8u;
    {
        const bool branch_taken_0x24a0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0F8u;
        // 0x24a0fc: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0f8) {
            ctx->pc = 0x24A4E4u;
            goto label_24a4e4;
        }
    }
    ctx->pc = 0x24A100u;
label_24a100:
    // 0x24a100: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24a100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a104: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24A104u;
    SET_GPR_U32(ctx, 31, 0x24A10Cu);
    ctx->pc = 0x24A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A104u;
    // 0x24a108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24A104u, 0x24A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A10Cu;
label_24a10c:
    // 0x24a10c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24a110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a114: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24a114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a118: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24a118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a11c: 0x8c653d70  lw          $a1, 0x3D70($v1)
    ctx->pc = 0x24a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15728)));
    // 0x24a120: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24a120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a124: 0x8c663d74  lw          $a2, 0x3D74($v1)
    ctx->pc = 0x24a124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15732)));
    // 0x24a128: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24a128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24a12c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24a130: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24A130u;
    SET_GPR_U32(ctx, 31, 0x24A138u);
    ctx->pc = 0x24A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A130u;
    // 0x24a134: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24A130u, 0x24A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A138u;
label_24a138:
    // 0x24a138: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24a138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24a13c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24A13Cu;
    SET_GPR_U32(ctx, 31, 0x24A144u);
    ctx->pc = 0x24A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A13Cu;
    // 0x24a140: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24A13Cu, 0x24A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A144u;
label_24a144:
    // 0x24a144: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24a148: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24A148u;
    {
        const bool branch_taken_0x24a148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A148u;
        // 0x24a14c: 0x8e040748  lw          $a0, 0x748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a148) {
            ctx->pc = 0x24A190u;
            goto label_24a190;
        }
    }
    ctx->pc = 0x24A150u;
    // 0x24a150: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A150u;
    {
        const bool branch_taken_0x24a150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A150u;
        // 0x24a154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a150) {
            ctx->pc = 0x24A160u;
            goto label_24a160;
        }
    }
    ctx->pc = 0x24A158u;
    // 0x24a158: 0xc0a04aa  jal         func_2812A8
    ctx->pc = 0x24A158u;
    SET_GPR_U32(ctx, 31, 0x24A160u);
    ctx->pc = 0x24A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A158u;
    // 0x24a15c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812A8u, 0x24A158u, 0x24A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A160u;
label_24a160:
    // 0x24a160: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x24a164: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A164u;
    {
        const bool branch_taken_0x24a164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A164u;
        // 0x24a168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a164) {
            ctx->pc = 0x24A174u;
            goto label_24a174;
        }
    }
    ctx->pc = 0x24A16Cu;
    // 0x24a16c: 0xc0a0c72  jal         func_2831C8
    ctx->pc = 0x24A16Cu;
    SET_GPR_U32(ctx, 31, 0x24A174u);
    ctx->pc = 0x24A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A16Cu;
    // 0x24a170: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831C8u, 0x24A16Cu, 0x24A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A174u;
label_24a174:
    // 0x24a174: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
    // 0x24a178: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24A178u;
    {
        const bool branch_taken_0x24a178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a178) {
            ctx->pc = 0x24A1C8u;
            goto label_24a1c8;
        }
    }
    ctx->pc = 0x24A180u;
    // 0x24a180: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x24A180u;
    SET_GPR_U32(ctx, 31, 0x24A188u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x24A180u, 0x24A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A188u;
label_24a188:
    // 0x24a188: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24A188u;
    {
        const bool branch_taken_0x24a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a188) {
            ctx->pc = 0x24A1C8u;
            goto label_24a1c8;
        }
    }
    ctx->pc = 0x24A190u;
label_24a190:
    // 0x24a190: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A190u;
    {
        const bool branch_taken_0x24a190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A190u;
        // 0x24a194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a190) {
            ctx->pc = 0x24A1A0u;
            goto label_24a1a0;
        }
    }
    ctx->pc = 0x24A198u;
    // 0x24a198: 0xc0a04aa  jal         func_2812A8
    ctx->pc = 0x24A198u;
    SET_GPR_U32(ctx, 31, 0x24A1A0u);
    ctx->pc = 0x24A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A198u;
    // 0x24a19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812A8u, 0x24A198u, 0x24A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1A0u;
label_24a1a0:
    // 0x24a1a0: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x24a1a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A1A4u;
    {
        const bool branch_taken_0x24a1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1A4u;
        // 0x24a1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1a4) {
            ctx->pc = 0x24A1B4u;
            goto label_24a1b4;
        }
    }
    ctx->pc = 0x24A1ACu;
    // 0x24a1ac: 0xc0a0c72  jal         func_2831C8
    ctx->pc = 0x24A1ACu;
    SET_GPR_U32(ctx, 31, 0x24A1B4u);
    ctx->pc = 0x24A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1ACu;
    // 0x24a1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831C8u, 0x24A1ACu, 0x24A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1B4u;
label_24a1b4:
    // 0x24a1b4: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
    // 0x24a1b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A1B8u;
    {
        const bool branch_taken_0x24a1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a1b8) {
            ctx->pc = 0x24A1C8u;
            goto label_24a1c8;
        }
    }
    ctx->pc = 0x24A1C0u;
    // 0x24a1c0: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x24A1C0u;
    SET_GPR_U32(ctx, 31, 0x24A1C8u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x24A1C0u, 0x24A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1C8u;
label_24a1c8:
    // 0x24a1c8: 0x3c01bdb9  lui         $at, 0xBDB9
    ctx->pc = 0x24a1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48569 << 16));
    // 0x24a1cc: 0x342123a3  ori         $at, $at, 0x23A3
    ctx->pc = 0x24a1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9123);
    // 0x24a1d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24a1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a1d4: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x24a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x24a1d8: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
    // 0x24a1dc: 0x3421b3d0  ori         $at, $at, 0xB3D0
    ctx->pc = 0x24a1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46032);
    // 0x24a1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a1e4: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x24a1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24a1e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24a1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24a1ec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x24a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x24a1f0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x24a1f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a1f4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x24a1f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a1f8: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24a1f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24a1fc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x24a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a200: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x24a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a204: 0xc051e62  jal         func_147988
    ctx->pc = 0x24A204u;
    SET_GPR_U32(ctx, 31, 0x24A20Cu);
    ctx->pc = 0x24A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A204u;
    // 0x24a208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x24A204u, 0x24A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A20Cu;
label_24a20c:
    // 0x24a20c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x24a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x24a210: 0xc051f10  jal         func_147C40
    ctx->pc = 0x24A210u;
    SET_GPR_U32(ctx, 31, 0x24A218u);
    ctx->pc = 0x24A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A210u;
    // 0x24a214: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x24A210u, 0x24A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A218u;
label_24a218:
    // 0x24a218: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24a21c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24a21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a220: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24A220u;
    SET_GPR_U32(ctx, 31, 0x24A228u);
    ctx->pc = 0x24A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A220u;
    // 0x24a224: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24A220u, 0x24A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A228u;
label_24a228:
    // 0x24a228: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24A228u;
    SET_GPR_U32(ctx, 31, 0x24A230u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24A228u, 0x24A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A230u;
label_24a230:
    // 0x24a230: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x24a230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24a234: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x24a234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24a238: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x24a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24a23c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x24a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24a240: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x24a240u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a244: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x24a244u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a248: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24a248u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24a24c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x24a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a250: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x24a250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24a254: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x24a254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a258: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x24a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a25c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x24a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a260: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x24a260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24a264: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x24a264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24a268: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x24a268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24a26c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x24a26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24a270: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x24a270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x24a274: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x24a274u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24a278: 0x0  nop
    ctx->pc = 0x24a278u;
    // NOP
    // 0x24a27c: 0x0  nop
    ctx->pc = 0x24a27cu;
    // NOP
    // 0x24a280: 0x46020504  c1          0x20504
    ctx->pc = 0x24a280u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x24a284: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x24a284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x24a288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a28c: 0x0  nop
    ctx->pc = 0x24a28cu;
    // NOP
    // 0x24a290: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24a290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a294: 0x0  nop
    ctx->pc = 0x24a294u;
    // NOP
    // 0x24a298: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24A298u;
    {
        const bool branch_taken_0x24a298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a298) {
            ctx->pc = 0x24A29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A298u;
            // 0x24a29c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A2A0u;
            goto label_24a2a0;
        }
    }
    ctx->pc = 0x24A2A0u;
label_24a2a0:
    // 0x24a2a0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x24a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24a2a4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x24A2A4u;
    SET_GPR_U32(ctx, 31, 0x24A2ACu);
    ctx->pc = 0x24A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2A4u;
    // 0x24a2a8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x24A2A4u, 0x24A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2ACu;
label_24a2ac:
    // 0x24a2ac: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x24a2acu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x24a2b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a2b4: 0x0  nop
    ctx->pc = 0x24a2b4u;
    // NOP
    // 0x24a2b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x24a2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a2bc: 0x0  nop
    ctx->pc = 0x24a2bcu;
    // NOP
    // 0x24a2c0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x24A2C0u;
    {
        const bool branch_taken_0x24a2c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2C0u;
        // 0x24a2c4: 0xc7a40050  lwc1        $f4, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2c0) {
            ctx->pc = 0x24A304u;
            goto label_24a304;
        }
    }
    ctx->pc = 0x24A2C8u;
    // 0x24a2c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a2cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24a2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a2d0: 0x0  nop
    ctx->pc = 0x24a2d0u;
    // NOP
    // 0x24a2d4: 0x0  nop
    ctx->pc = 0x24a2d4u;
    // NOP
    // 0x24a2d8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x24a2d8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x24a2dc: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x24a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a2e0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x24a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a2e4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x24a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a2e8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x24a2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24a2ec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24a2ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24a2f0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24a2f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24a2f4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x24a2f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x24a2f8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x24a2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24a2fc: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x24a2fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24a300: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x24a300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_24a304:
    // 0x24a304: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x24a304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24a308: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x24a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a30c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x24a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a310: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x24a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a314: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x24a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a318: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x24a318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24a31c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x24a31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24a320: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x24a320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24a324: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x24a324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a328: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x24a328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x24a32c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x24a32cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x24a330: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x24a330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24a334: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x24a334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a338: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x24a33c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x24a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24a340: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A340u;
    {
        const bool branch_taken_0x24a340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A340u;
        // 0x24a344: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a340) {
            ctx->pc = 0x24A35Cu;
            goto label_24a35c;
        }
    }
    ctx->pc = 0x24A348u;
    // 0x24a348: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x24a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a34c: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x24a34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x24a350: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24a350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24a354: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x24a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a358: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24a358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_24a35c:
    // 0x24a35c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24a35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a364: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24a364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24a368:
    // 0x24a368: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24a368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24a36c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24a36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24a370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a374: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x24a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24a378: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x24a37c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24a37cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a380: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x24a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a384: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x24a384u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a388: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x24a388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x24a38c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x24a38cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x24a390: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x24a390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24a394: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x24a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a398: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x24a398u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a39c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x24a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a3a0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a3a4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24a3a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24a3a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a3ac: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x24a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a3b0: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x24a3b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a3b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x24a3b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x24a3b8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x24a3b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x24a3bc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x24a3bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24a3c0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x24a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a3c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x24a3c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a3c8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x24a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a3cc: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x24a3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a3d0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x24a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24a3d4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x24a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a3d8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x24a3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a3dc: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x24a3dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24a3e0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x24a3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24a3e4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x24a3e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24a3e8: 0xda040580  lqc2        $vf4, 0x580($s0)
    ctx->pc = 0x24a3e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x24a3ec: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x24a3ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a3f0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24a3f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24a3f4: 0xfa040580  sqc2        $vf4, 0x580($s0)
    ctx->pc = 0x24a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a3f8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x24a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x24a3fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24a3fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a400: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x24a400u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a404: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24a404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24a408: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24a408u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24a40c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24a410: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24A410u;
    SET_GPR_U32(ctx, 31, 0x24A418u);
    ctx->pc = 0x24A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A410u;
    // 0x24a414: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24A410u, 0x24A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A418u;
label_24a418:
    // 0x24a418: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24a41c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24a41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24a420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A420u;
    {
        const bool branch_taken_0x24a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A420u;
        // 0x24a424: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a420) {
            ctx->pc = 0x24A440u;
            goto label_24a440;
        }
    }
    ctx->pc = 0x24A428u;
    // 0x24a428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24a428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24a42c: 0x2442d7f0  addiu       $v0, $v0, -0x2810
    ctx->pc = 0x24a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957040));
    // 0x24a430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24a430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a438: 0x800008  jr          $a0
    ctx->pc = 0x24A438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24A440u: goto label_24a440;
            case 0x24A450u: goto label_24a450;
            case 0x24A460u: goto label_24a460;
            case 0x24A470u: goto label_24a470;
            case 0x24A480u: goto label_24a480;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A438u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24A440u;
label_24a440:
    // 0x24a440: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x24a440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x24a444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a448: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24A448u;
    {
        const bool branch_taken_0x24a448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A448u;
        // 0x24a44c: 0xe600176c  swc1        $f0, 0x176C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a448) {
            ctx->pc = 0x24A490u;
            goto label_24a490;
        }
    }
    ctx->pc = 0x24A450u;
label_24a450:
    // 0x24a450: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x24a454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a458: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24A458u;
    {
        const bool branch_taken_0x24a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A458u;
        // 0x24a45c: 0xe600176c  swc1        $f0, 0x176C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a458) {
            ctx->pc = 0x24A490u;
            goto label_24a490;
        }
    }
    ctx->pc = 0x24A460u;
label_24a460:
    // 0x24a460: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x24a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x24a464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a468: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24A468u;
    {
        const bool branch_taken_0x24a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A468u;
        // 0x24a46c: 0xe600176c  swc1        $f0, 0x176C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a468) {
            ctx->pc = 0x24A490u;
            goto label_24a490;
        }
    }
    ctx->pc = 0x24A470u;
label_24a470:
    // 0x24a470: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x24a470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x24a474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a478: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A478u;
    {
        const bool branch_taken_0x24a478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A478u;
        // 0x24a47c: 0xe600176c  swc1        $f0, 0x176C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a478) {
            ctx->pc = 0x24A490u;
            goto label_24a490;
        }
    }
    ctx->pc = 0x24A480u;
label_24a480:
    // 0x24a480: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x24a480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x24a484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a488: 0x0  nop
    ctx->pc = 0x24a488u;
    // NOP
    // 0x24a48c: 0xe600176c  swc1        $f0, 0x176C($s0)
    ctx->pc = 0x24a48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5996), bits); }
label_24a490:
    // 0x24a490: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24A490u;
    SET_GPR_U32(ctx, 31, 0x24A498u);
    ctx->pc = 0x24A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A490u;
    // 0x24a494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24A490u, 0x24A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A498u;
label_24a498:
    // 0x24a498: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A498u;
    {
        const bool branch_taken_0x24a498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A498u;
        // 0x24a49c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a498) {
            ctx->pc = 0x24A4C0u;
            goto label_24a4c0;
        }
    }
    ctx->pc = 0x24A4A0u;
    // 0x24a4a0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24a4a4: 0x240400a5  addiu       $a0, $zero, 0xA5
    ctx->pc = 0x24a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x24a4a8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24a4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a4ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24a4b0: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x24a4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a4b4: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x24a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x24a4b8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24a4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a4bc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24a4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24a4c0:
    // 0x24a4c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a4c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24a4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24a4c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4cc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24A4CCu;
    SET_GPR_U32(ctx, 31, 0x24A4D4u);
    ctx->pc = 0x24A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4CCu;
    // 0x24a4d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24A4CCu, 0x24A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4D4u;
label_24a4d4:
    // 0x24a4d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24a4d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24a4d8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24A4D8u;
    SET_GPR_U32(ctx, 31, 0x24A4E0u);
    ctx->pc = 0x24A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4D8u;
    // 0x24a4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24A4D8u, 0x24A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4E0u;
label_24a4e0:
    // 0x24a4e0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24a4e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_24a4e4:
    // 0x24a4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a4e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A4E8u;
    {
        const bool branch_taken_0x24a4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4E8u;
        // 0x24a4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4e8) {
            ctx->pc = 0x24A4FCu;
            goto label_24a4fc;
        }
    }
    ctx->pc = 0x24A4F0u;
    // 0x24a4f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4f4: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24A4F4u;
    SET_GPR_U32(ctx, 31, 0x24A4FCu);
    ctx->pc = 0x24A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4F4u;
    // 0x24a4f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24A4F4u, 0x24A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4FCu;
label_24a4fc:
    // 0x24a4fc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x24a4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24a500: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x24a500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24a504: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a508: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x24a508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24a50c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A50Cu;
        // 0x24a510: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A514u;
    // 0x24a514: 0x0  nop
    ctx->pc = 0x24a514u;
    // NOP
    ctx->pc = 0x24a518u;
}
