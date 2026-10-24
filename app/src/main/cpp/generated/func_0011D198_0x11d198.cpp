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

// Function: func_0011D198
// Address: 0x11d198 - 0x11d4b0
void func_0011D198_0x11d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011D198_0x11d198");
#endif

    switch (ctx->pc) {
        case 0x11d1e4u: goto label_11d1e4;
        case 0x11d1f0u: goto label_11d1f0;
        case 0x11d214u: goto label_11d214;
        case 0x11d21cu: goto label_11d21c;
        case 0x11d268u: goto label_11d268;
        case 0x11d27cu: goto label_11d27c;
        case 0x11d2a0u: goto label_11d2a0;
        case 0x11d2e4u: goto label_11d2e4;
        case 0x11d2ecu: goto label_11d2ec;
        case 0x11d30cu: goto label_11d30c;
        case 0x11d34cu: goto label_11d34c;
        case 0x11d358u: goto label_11d358;
        case 0x11d39cu: goto label_11d39c;
        case 0x11d3a8u: goto label_11d3a8;
        case 0x11d3f8u: goto label_11d3f8;
        case 0x11d434u: goto label_11d434;
        case 0x11d43cu: goto label_11d43c;
        case 0x11d44cu: goto label_11d44c;
        case 0x11d480u: goto label_11d480;
        case 0x11d48cu: goto label_11d48c;
        default: break;
    }

    ctx->pc = 0x11d198u;

    // 0x11d198: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d19c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11d1a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11d1a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11d1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d1b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11d1b8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11d1b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11d1bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11d1c0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11d1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11d1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d1c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1cc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11d1d0: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11d1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11d1d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11d1d8: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x11d1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11d1dc: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11D1DCu;
    SET_GPR_U32(ctx, 31, 0x11D1E4u);
    ctx->pc = 0x11D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1DCu;
    // 0x11d1e0: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11D1DCu, 0x11D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1E4u;
label_11d1e4:
    // 0x11d1e4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11d1e8: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11D1E8u;
    SET_GPR_U32(ctx, 31, 0x11D1F0u);
    ctx->pc = 0x11D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1E8u;
    // 0x11d1ec: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11D1E8u, 0x11D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1F0u;
label_11d1f0:
    // 0x11d1f0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11d1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11d1f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D1F4u;
    {
        const bool branch_taken_0x11d1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1F4u;
        // 0x11d1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1f4) {
            ctx->pc = 0x11D20Cu;
            goto label_11d20c;
        }
    }
    ctx->pc = 0x11D1FCu;
    // 0x11d1fc: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11D1FCu;
    {
        const bool branch_taken_0x11d1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11d1fc) {
            ctx->pc = 0x11D200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D1FCu;
            // 0x11d200: 0x8622056e  lh          $v0, 0x56E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D2B0u;
            goto label_11d2b0;
        }
    }
    ctx->pc = 0x11D204u;
    // 0x11d204: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x11D204u;
    {
        const bool branch_taken_0x11d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D204u;
        // 0x11d208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d204) {
            ctx->pc = 0x11D49Cu;
            goto label_11d49c;
        }
    }
    ctx->pc = 0x11D20Cu;
label_11d20c:
    // 0x11d20c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11D20Cu;
    SET_GPR_U32(ctx, 31, 0x11D214u);
    ctx->pc = 0x11D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D20Cu;
    // 0x11d210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11D20Cu, 0x11D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D214u;
label_11d214:
    // 0x11d214: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11D214u;
    SET_GPR_U32(ctx, 31, 0x11D21Cu);
    ctx->pc = 0x11D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D214u;
    // 0x11d218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11D214u, 0x11D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D21Cu;
label_11d21c:
    // 0x11d21c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11d220: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11d220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d224: 0x3c01bed5  lui         $at, 0xBED5
    ctx->pc = 0x11d224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48853 << 16));
    // 0x11d228: 0x34213f7d  ori         $at, $at, 0x3F7D
    ctx->pc = 0x11d228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16253);
    // 0x11d22c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11d230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d234: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d23c: 0x3c013f8f  lui         $at, 0x3F8F
    ctx->pc = 0x11d23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16271 << 16));
    // 0x11d240: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x11d240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x11d244: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d24c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d254: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11d254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11d258: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11d258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11d25c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11d25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11d260: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11D260u;
    SET_GPR_U32(ctx, 31, 0x11D268u);
    ctx->pc = 0x11D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D260u;
    // 0x11d264: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11D260u, 0x11D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D268u;
label_11d268:
    // 0x11d268: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11d268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11d26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d270: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11d270u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11d274: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11D274u;
    SET_GPR_U32(ctx, 31, 0x11D27Cu);
    ctx->pc = 0x11D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D274u;
    // 0x11d278: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11D274u, 0x11D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D27Cu;
label_11d27c:
    // 0x11d27c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d280: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x11d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11d284: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11d284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11d288: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11d288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11d28c: 0xae2315b4  sw          $v1, 0x15B4($s1)
    ctx->pc = 0x11d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 3));
    // 0x11d290: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11d294: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11d294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11d298: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11D298u;
    SET_GPR_U32(ctx, 31, 0x11D2A0u);
    ctx->pc = 0x11D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D298u;
    // 0x11d29c: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11D298u, 0x11D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2A0u;
label_11d2a0:
    // 0x11d2a0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11d2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11d2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11d2a8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11d2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11d2ac: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11d2acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_11d2b0:
    // 0x11d2b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11D2B0u;
    {
        const bool branch_taken_0x11d2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2B0u;
        // 0x11d2b4: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2b0) {
            ctx->pc = 0x11D2DCu;
            goto label_11d2dc;
        }
    }
    ctx->pc = 0x11D2B8u;
    // 0x11d2b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D2B8u;
    {
        const bool branch_taken_0x11d2b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2B8u;
        // 0x11d2bc: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2b8) {
            ctx->pc = 0x11D2DCu;
            goto label_11d2dc;
        }
    }
    ctx->pc = 0x11D2C0u;
    // 0x11d2c0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11d2c4: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11d2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11d2c8: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x11d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11d2cc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11d2ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d2d0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11d2d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d2d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11d2d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11d2d8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11d2dc:
    // 0x11d2dc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11D2DCu;
    SET_GPR_U32(ctx, 31, 0x11D2E4u);
    ctx->pc = 0x11D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2DCu;
    // 0x11d2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11D2DCu, 0x11D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2E4u;
label_11d2e4:
    // 0x11d2e4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11D2E4u;
    SET_GPR_U32(ctx, 31, 0x11D2ECu);
    ctx->pc = 0x11D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2E4u;
    // 0x11d2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11D2E4u, 0x11D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2ECu;
label_11d2ec:
    // 0x11d2ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D2ECu;
    {
        const bool branch_taken_0x11d2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d2ec) {
            ctx->pc = 0x11D338u;
            goto label_11d338;
        }
    }
    ctx->pc = 0x11D2F4u;
    // 0x11d2f4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11d2f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11d2f8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D2F8u;
    {
        const bool branch_taken_0x11d2f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2F8u;
        // 0x11d2fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2f8) {
            ctx->pc = 0x11D328u;
            goto label_11d328;
        }
    }
    ctx->pc = 0x11D300u;
    // 0x11d300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d304: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11D304u;
    SET_GPR_U32(ctx, 31, 0x11D30Cu);
    ctx->pc = 0x11D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D304u;
    // 0x11d308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11D304u, 0x11D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D30Cu;
label_11d30c:
    // 0x11d30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d310: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d314: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11d314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11d318: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11d318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11d31c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11d31cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11d320: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D320u;
    {
        const bool branch_taken_0x11d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D320u;
        // 0x11d324: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d320) {
            ctx->pc = 0x11D338u;
            goto label_11d338;
        }
    }
    ctx->pc = 0x11D328u;
label_11d328:
    // 0x11d328: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11d328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11d32c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11d330: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11d334: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11d334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11d338:
    // 0x11d338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d33c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11d33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11d340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d344: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11D344u;
    SET_GPR_U32(ctx, 31, 0x11D34Cu);
    ctx->pc = 0x11D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D344u;
    // 0x11d348: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11D344u, 0x11D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D34Cu;
label_11d34c:
    // 0x11d34c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11d34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11d350: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11D350u;
    SET_GPR_U32(ctx, 31, 0x11D358u);
    ctx->pc = 0x11D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D350u;
    // 0x11d354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11D350u, 0x11D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D358u;
label_11d358:
    // 0x11d358: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11d358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11d35c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11d360: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D360u;
    {
        const bool branch_taken_0x11d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D360u;
        // 0x11d364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d360) {
            ctx->pc = 0x11D3B0u;
            goto label_11d3b0;
        }
    }
    ctx->pc = 0x11D368u;
    // 0x11d368: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11d36c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D36Cu;
    {
        const bool branch_taken_0x11d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d36c) {
            ctx->pc = 0x11D370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D36Cu;
            // 0x11d370: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D3B8u;
            goto label_11d3b8;
        }
    }
    ctx->pc = 0x11D374u;
    // 0x11d374: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D374u;
    {
        const bool branch_taken_0x11d374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D374u;
        // 0x11d378: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d374) {
            ctx->pc = 0x11D39Cu;
            goto label_11d39c;
        }
    }
    ctx->pc = 0x11D37Cu;
    // 0x11d37c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x11d37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x11d380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d384: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11d384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d38c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11d390: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11d390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11d394: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11D394u;
    SET_GPR_U32(ctx, 31, 0x11D39Cu);
    ctx->pc = 0x11D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D394u;
    // 0x11d398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11D394u, 0x11D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D39Cu;
label_11d39c:
    // 0x11d39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3a0: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11D3A0u;
    SET_GPR_U32(ctx, 31, 0x11D3A8u);
    ctx->pc = 0x11D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3A0u;
    // 0x11d3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11D3A0u, 0x11D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3A8u;
label_11d3a8:
    // 0x11d3a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D3A8u;
    {
        const bool branch_taken_0x11d3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3A8u;
        // 0x11d3ac: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3a8) {
            ctx->pc = 0x11D3B8u;
            goto label_11d3b8;
        }
    }
    ctx->pc = 0x11D3B0u;
label_11d3b0:
    // 0x11d3b0: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x11d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x11d3b4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11d3b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_11d3b8:
    // 0x11d3b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11d3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11d3bc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11D3BCu;
    {
        const bool branch_taken_0x11d3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3BCu;
        // 0x11d3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3bc) {
            ctx->pc = 0x11D494u;
            goto label_11d494;
        }
    }
    ctx->pc = 0x11D3C4u;
    // 0x11d3c4: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11d3c8: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x11D3C8u;
    {
        const bool branch_taken_0x11d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3c8) {
            ctx->pc = 0x11D3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D3C8u;
            // 0x11d3cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D49Cu;
            goto label_11d49c;
        }
    }
    ctx->pc = 0x11D3D0u;
    // 0x11d3d0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D3D0u;
    {
        const bool branch_taken_0x11d3d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3D0u;
        // 0x11d3d4: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3d0) {
            ctx->pc = 0x11D3F8u;
            goto label_11d3f8;
        }
    }
    ctx->pc = 0x11D3D8u;
    // 0x11d3d8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x11d3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x11d3dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d3e0: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d3e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d3e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d3e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11d3ec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11d3ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11d3f0: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11D3F0u;
    SET_GPR_U32(ctx, 31, 0x11D3F8u);
    ctx->pc = 0x11D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3F0u;
    // 0x11d3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11D3F0u, 0x11D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3F8u;
label_11d3f8:
    // 0x11d3f8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11d3f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11d3fc: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11D3FCu;
    {
        const bool branch_taken_0x11d3fc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3FCu;
        // 0x11d400: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3fc) {
            ctx->pc = 0x11D45Cu;
            goto label_11d45c;
        }
    }
    ctx->pc = 0x11D404u;
    // 0x11d404: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11d404u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11d408: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11d408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11d40c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11d40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11d410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d414: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11d414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11d418: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11d418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d41c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11d41cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d420: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11d420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d424: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11d424u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d428: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11d428u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d42c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11D42Cu;
    SET_GPR_U32(ctx, 31, 0x11D434u);
    ctx->pc = 0x11D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D42Cu;
    // 0x11d430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11D42Cu, 0x11D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D434u;
label_11d434:
    // 0x11d434: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11D434u;
    SET_GPR_U32(ctx, 31, 0x11D43Cu);
    ctx->pc = 0x11D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D434u;
    // 0x11d438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11D434u, 0x11D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D43Cu;
label_11d43c:
    // 0x11d43c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11d440: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11d444: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11D444u;
    SET_GPR_U32(ctx, 31, 0x11D44Cu);
    ctx->pc = 0x11D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D444u;
    // 0x11d448: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11D444u, 0x11D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D44Cu;
label_11d44c:
    // 0x11d44c: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11d44cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11d450: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11d454: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11D454u;
    {
        const bool branch_taken_0x11d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D454u;
        // 0x11d458: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d454) {
            ctx->pc = 0x11D480u;
            goto label_11d480;
        }
    }
    ctx->pc = 0x11D45Cu;
label_11d45c:
    // 0x11d45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d460: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11d464: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11d464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11d468: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11d468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d46c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11d46cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d470: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11d470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d474: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11d474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d478: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11D478u;
    SET_GPR_U32(ctx, 31, 0x11D480u);
    ctx->pc = 0x11D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D478u;
    // 0x11d47c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11D478u, 0x11D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D480u;
label_11d480:
    // 0x11d480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d484: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11D484u;
    SET_GPR_U32(ctx, 31, 0x11D48Cu);
    ctx->pc = 0x11D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D484u;
    // 0x11d488: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11D484u, 0x11D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D48Cu;
label_11d48c:
    // 0x11d48c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D48Cu;
    {
        const bool branch_taken_0x11d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D48Cu;
        // 0x11d490: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d48c) {
            ctx->pc = 0x11D49Cu;
            goto label_11d49c;
        }
    }
    ctx->pc = 0x11D494u;
label_11d494:
    // 0x11d494: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11d494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x11d498: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11d498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11d49c:
    // 0x11d49c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11d49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d4a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d4a4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4A8u;
        // 0x11d4ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D4B0u;
}
