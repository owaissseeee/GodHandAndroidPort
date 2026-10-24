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

// Function: func_00122140
// Address: 0x122140 - 0x1223f8
void func_00122140_0x122140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00122140_0x122140");
#endif

    switch (ctx->pc) {
        case 0x122180u: goto label_122180;
        case 0x12218cu: goto label_12218c;
        case 0x122204u: goto label_122204;
        case 0x122218u: goto label_122218;
        case 0x122220u: goto label_122220;
        case 0x122228u: goto label_122228;
        case 0x12227cu: goto label_12227c;
        case 0x122284u: goto label_122284;
        case 0x1222a4u: goto label_1222a4;
        case 0x1222e4u: goto label_1222e4;
        case 0x1222f0u: goto label_1222f0;
        case 0x122320u: goto label_122320;
        case 0x122348u: goto label_122348;
        case 0x122384u: goto label_122384;
        case 0x12238cu: goto label_12238c;
        case 0x122398u: goto label_122398;
        case 0x1223ccu: goto label_1223cc;
        case 0x1223d8u: goto label_1223d8;
        default: break;
    }

    ctx->pc = 0x122140u;

    // 0x122140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122144: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x122144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x122148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12214c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x122150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12215c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12215cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122160: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x122160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x122164: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x122164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x122168: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x12216c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x122170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122174: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x122174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x122178: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x122178u;
    SET_GPR_U32(ctx, 31, 0x122180u);
    ctx->pc = 0x12217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122178u;
    // 0x12217c: 0x8e300694  lw          $s0, 0x694($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x122178u, 0x122180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122180u;
label_122180:
    // 0x122180: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x122180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x122184: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x122184u;
    SET_GPR_U32(ctx, 31, 0x12218Cu);
    ctx->pc = 0x122188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122184u;
    // 0x122188: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x122184u, 0x12218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12218Cu;
label_12218c:
    // 0x12218c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x12218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x122190: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x122190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x122194: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x122194u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x122198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12219c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12219Cu;
    {
        const bool branch_taken_0x12219c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1221A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12219Cu;
        // 0x1221a0: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12219c) {
            ctx->pc = 0x1221B8u;
            goto label_1221b8;
        }
    }
    ctx->pc = 0x1221A4u;
    // 0x1221a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1221a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1221a8: 0x50820027  beql        $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1221A8u;
    {
        const bool branch_taken_0x1221a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1221a8) {
            ctx->pc = 0x1221ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1221A8u;
            // 0x1221ac: 0x8622056e  lh          $v0, 0x56E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122248u;
            goto label_122248;
        }
    }
    ctx->pc = 0x1221B0u;
    // 0x1221b0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1221B0u;
    {
        const bool branch_taken_0x1221b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1221B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221B0u;
        // 0x1221b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221b0) {
            ctx->pc = 0x1223DCu;
            goto label_1223dc;
        }
    }
    ctx->pc = 0x1221B8u;
label_1221b8:
    // 0x1221b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1221b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1221bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1221bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221c0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1221c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1221c4: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1221c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
    // 0x1221c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1221c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1221cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1221ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221d0: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1221d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1221d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1221d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221d8: 0x3c013f0a  lui         $at, 0x3F0A
    ctx->pc = 0x1221d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16138 << 16));
    // 0x1221dc: 0x3421daba  ori         $at, $at, 0xDABA
    ctx->pc = 0x1221dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55994);
    // 0x1221e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1221e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1221e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1221e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1221e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1221ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1221ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1221f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1221f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1221f4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1221f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1221f8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1221f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1221fc: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1221FCu;
    SET_GPR_U32(ctx, 31, 0x122204u);
    ctx->pc = 0x122200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1221FCu;
    // 0x122200: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1221FCu, 0x122204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122204u;
label_122204:
    // 0x122204: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x122204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x122208: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x122208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x12220c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x12220cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x122210: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x122210u;
    SET_GPR_U32(ctx, 31, 0x122218u);
    ctx->pc = 0x122214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122210u;
    // 0x122214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x122210u, 0x122218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122218u;
label_122218:
    // 0x122218: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x122218u;
    SET_GPR_U32(ctx, 31, 0x122220u);
    ctx->pc = 0x12221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122218u;
    // 0x12221c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x122218u, 0x122220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122220u;
label_122220:
    // 0x122220: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x122220u;
    SET_GPR_U32(ctx, 31, 0x122228u);
    ctx->pc = 0x122224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122220u;
    // 0x122224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x122220u, 0x122228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122228u;
label_122228:
    // 0x122228: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x12222c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12222cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122230: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x122230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x122234: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x122234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x122238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12223c: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x12223cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x122240: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x122240u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x122244: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x122244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_122248:
    // 0x122248: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x122248u;
    {
        const bool branch_taken_0x122248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122248u;
        // 0x12224c: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122248) {
            ctx->pc = 0x122274u;
            goto label_122274;
        }
    }
    ctx->pc = 0x122250u;
    // 0x122250: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122250u;
    {
        const bool branch_taken_0x122250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122250u;
        // 0x122254: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122250) {
            ctx->pc = 0x122274u;
            goto label_122274;
        }
    }
    ctx->pc = 0x122258u;
    // 0x122258: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x122258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x12225c: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x12225cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x122260: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x122260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x122264: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x122264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122268: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x122268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12226c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12226cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x122270: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x122270u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_122274:
    // 0x122274: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x122274u;
    SET_GPR_U32(ctx, 31, 0x12227Cu);
    ctx->pc = 0x122278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122274u;
    // 0x122278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x122274u, 0x12227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12227Cu;
label_12227c:
    // 0x12227c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x12227Cu;
    SET_GPR_U32(ctx, 31, 0x122284u);
    ctx->pc = 0x122280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12227Cu;
    // 0x122280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x12227Cu, 0x122284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122284u;
label_122284:
    // 0x122284: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x122284u;
    {
        const bool branch_taken_0x122284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122284) {
            ctx->pc = 0x1222D0u;
            goto label_1222d0;
        }
    }
    ctx->pc = 0x12228Cu;
    // 0x12228c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x12228cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x122290: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x122290u;
    {
        const bool branch_taken_0x122290 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x122294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122290u;
        // 0x122294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122290) {
            ctx->pc = 0x1222C0u;
            goto label_1222c0;
        }
    }
    ctx->pc = 0x122298u;
    // 0x122298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12229c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x12229Cu;
    SET_GPR_U32(ctx, 31, 0x1222A4u);
    ctx->pc = 0x1222A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12229Cu;
    // 0x1222a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x12229Cu, 0x1222A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222A4u;
label_1222a4:
    // 0x1222a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1222a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1222a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1222a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1222ac: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x1222acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1222b0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1222b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1222b4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1222b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1222b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1222B8u;
    {
        const bool branch_taken_0x1222b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1222BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222B8u;
        // 0x1222bc: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222b8) {
            ctx->pc = 0x1222D0u;
            goto label_1222d0;
        }
    }
    ctx->pc = 0x1222C0u;
label_1222c0:
    // 0x1222c0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1222c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1222c4: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x1222c8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1222c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1222cc: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x1222ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_1222d0:
    // 0x1222d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1222d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1222d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1222d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1222d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1222d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222dc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1222DCu;
    SET_GPR_U32(ctx, 31, 0x1222E4u);
    ctx->pc = 0x1222E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222DCu;
    // 0x1222e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1222DCu, 0x1222E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222E4u;
label_1222e4:
    // 0x1222e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1222e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1222e8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1222E8u;
    SET_GPR_U32(ctx, 31, 0x1222F0u);
    ctx->pc = 0x1222ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222E8u;
    // 0x1222ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1222E8u, 0x1222F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222F0u;
label_1222f0:
    // 0x1222f0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1222f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1222f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1222f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1222f8: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x1222F8u;
    {
        const bool branch_taken_0x1222f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1222f8) {
            ctx->pc = 0x1222FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1222F8u;
            // 0x1222fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1223DCu;
            goto label_1223dc;
        }
    }
    ctx->pc = 0x122300u;
    // 0x122300: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x122300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x122304: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x122304u;
    {
        const bool branch_taken_0x122304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122304u;
        // 0x122308: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122304) {
            ctx->pc = 0x1223D8u;
            goto label_1223d8;
        }
    }
    ctx->pc = 0x12230Cu;
    // 0x12230c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x12230cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x122310: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x122310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x122314: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x122314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x122318: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x122318u;
    SET_GPR_U32(ctx, 31, 0x122320u);
    ctx->pc = 0x12231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122318u;
    // 0x12231c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x122318u, 0x122320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122320u;
label_122320:
    // 0x122320: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x122320u;
    {
        const bool branch_taken_0x122320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x122320) {
            ctx->pc = 0x122324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122320u;
            // 0x122324: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12234Cu;
            goto label_12234c;
        }
    }
    ctx->pc = 0x122328u;
    // 0x122328: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x122328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x12232c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12232cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122330: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x122330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122334: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x122334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x122338: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12233c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12233cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x122340: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x122340u;
    SET_GPR_U32(ctx, 31, 0x122348u);
    ctx->pc = 0x122344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122340u;
    // 0x122344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x122340u, 0x122348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122348u;
label_122348:
    // 0x122348: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x122348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_12234c:
    // 0x12234c: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12234Cu;
    {
        const bool branch_taken_0x12234c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x122350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12234Cu;
        // 0x122350: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12234c) {
            ctx->pc = 0x1223A8u;
            goto label_1223a8;
        }
    }
    ctx->pc = 0x122354u;
    // 0x122354: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x122358: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x122358u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x12235c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x12235cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x122360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122364: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x122364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x122368: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x122368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12236c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12236cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122370: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122374: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x122374u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122378: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x122378u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12237c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x12237Cu;
    SET_GPR_U32(ctx, 31, 0x122384u);
    ctx->pc = 0x122380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12237Cu;
    // 0x122380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x12237Cu, 0x122384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122384u;
label_122384:
    // 0x122384: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x122384u;
    SET_GPR_U32(ctx, 31, 0x12238Cu);
    ctx->pc = 0x122388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122384u;
    // 0x122388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x122384u, 0x12238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12238Cu;
label_12238c:
    // 0x12238c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122390: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x122390u;
    SET_GPR_U32(ctx, 31, 0x122398u);
    ctx->pc = 0x122394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122390u;
    // 0x122394: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x122390u, 0x122398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122398u;
label_122398:
    // 0x122398: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x122398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x12239c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x12239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1223a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1223A0u;
    {
        const bool branch_taken_0x1223a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223A0u;
        // 0x1223a4: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223a0) {
            ctx->pc = 0x1223CCu;
            goto label_1223cc;
        }
    }
    ctx->pc = 0x1223A8u;
label_1223a8:
    // 0x1223a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1223a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1223b0: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x1223b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x1223b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1223b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1223b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1223bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1223c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223c4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1223C4u;
    SET_GPR_U32(ctx, 31, 0x1223CCu);
    ctx->pc = 0x1223C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223C4u;
    // 0x1223c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1223C4u, 0x1223CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223CCu;
label_1223cc:
    // 0x1223cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1223ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223d0: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x1223D0u;
    SET_GPR_U32(ctx, 31, 0x1223D8u);
    ctx->pc = 0x1223D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223D0u;
    // 0x1223d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x1223D0u, 0x1223D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223D8u;
label_1223d8:
    // 0x1223d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1223d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1223dc:
    // 0x1223dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1223dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1223e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1223e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1223e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1223e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1223e8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1223e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1223ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1223ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1223F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223ECu;
        // 0x1223f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1223ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1223F4u;
    // 0x1223f4: 0x0  nop
    ctx->pc = 0x1223f4u;
    // NOP
    ctx->pc = 0x1223f8u;
}
