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

// Function: func_001156D8
// Address: 0x1156d8 - 0x1158e8
void func_001156D8_0x1156d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001156D8_0x1156d8");
#endif

    switch (ctx->pc) {
        case 0x115744u: goto label_115744;
        case 0x11574cu: goto label_11574c;
        case 0x115780u: goto label_115780;
        case 0x115794u: goto label_115794;
        case 0x1157b4u: goto label_1157b4;
        case 0x1157bcu: goto label_1157bc;
        case 0x1157dcu: goto label_1157dc;
        case 0x1157e8u: goto label_1157e8;
        case 0x115874u: goto label_115874;
        case 0x115888u: goto label_115888;
        case 0x115890u: goto label_115890;
        case 0x1158a4u: goto label_1158a4;
        case 0x1158c8u: goto label_1158c8;
        case 0x1158d4u: goto label_1158d4;
        default: break;
    }

    ctx->pc = 0x1156d8u;

    // 0x1156d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1156d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1156dc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1156dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1156e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1156e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1156e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1156e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1156e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1156e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1156ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1156ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1156f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1156f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156f4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1156f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1156f8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1156f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x1156fc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1156fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x115700: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x115700u;
    {
        const bool branch_taken_0x115700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115700u;
        // 0x115704: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115700) {
            ctx->pc = 0x11578Cu;
            goto label_11578c;
        }
    }
    ctx->pc = 0x115708u;
    // 0x115708: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115708u;
    {
        const bool branch_taken_0x115708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115708) {
            ctx->pc = 0x11570Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115708u;
            // 0x11570c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115720u;
            goto label_115720;
        }
    }
    ctx->pc = 0x115710u;
    // 0x115710: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x115710u;
    {
        const bool branch_taken_0x115710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x115710) {
            ctx->pc = 0x115714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115710u;
            // 0x115714: 0xa60005e0  sh          $zero, 0x5E0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115738u;
            goto label_115738;
        }
    }
    ctx->pc = 0x115718u;
    // 0x115718: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x115718u;
    {
        const bool branch_taken_0x115718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115718u;
        // 0x11571c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115718) {
            ctx->pc = 0x1158D8u;
            goto label_1158d8;
        }
    }
    ctx->pc = 0x115720u;
label_115720:
    // 0x115720: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x115720u;
    {
        const bool branch_taken_0x115720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115720u;
        // 0x115724: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115720) {
            ctx->pc = 0x1157F0u;
            goto label_1157f0;
        }
    }
    ctx->pc = 0x115728u;
    // 0x115728: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x115728u;
    {
        const bool branch_taken_0x115728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x115728) {
            ctx->pc = 0x115880u;
            goto label_115880;
        }
    }
    ctx->pc = 0x115730u;
    // 0x115730: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x115730u;
    {
        const bool branch_taken_0x115730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115730u;
        // 0x115734: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115730) {
            ctx->pc = 0x1158D8u;
            goto label_1158d8;
        }
    }
    ctx->pc = 0x115738u;
label_115738:
    // 0x115738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11573c: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x11573Cu;
    SET_GPR_U32(ctx, 31, 0x115744u);
    ctx->pc = 0x115740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11573Cu;
    // 0x115740: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x11573Cu, 0x115744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115744u;
label_115744:
    // 0x115744: 0xc049396  jal         func_124E58
    ctx->pc = 0x115744u;
    SET_GPR_U32(ctx, 31, 0x11574Cu);
    ctx->pc = 0x115748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115744u;
    // 0x115748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x115744u, 0x11574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11574Cu;
label_11574c:
    // 0x11574c: 0xc6000670  lwc1        $f0, 0x670($s0)
    ctx->pc = 0x11574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115754: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x115754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x115758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11575c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x11575cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x115760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x115764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x115768: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x115768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11576c: 0x8c4504c4  lw          $a1, 0x4C4($v0)
    ctx->pc = 0x11576cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1220)));
    // 0x115770: 0x8c4604c8  lw          $a2, 0x4C8($v0)
    ctx->pc = 0x115770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1224)));
    // 0x115774: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x115774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x115778: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x115778u;
    SET_GPR_U32(ctx, 31, 0x115780u);
    ctx->pc = 0x11577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115778u;
    // 0x11577c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x115778u, 0x115780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115780u;
label_115780:
    // 0x115780: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x115780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x115784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115788: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x115788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11578c:
    // 0x11578c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11578Cu;
    SET_GPR_U32(ctx, 31, 0x115794u);
    ctx->pc = 0x115790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11578Cu;
    // 0x115790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11578Cu, 0x115794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115794u;
label_115794:
    // 0x115794: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x115794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x115798: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x115798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11579c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1157a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1157a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1157a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1157a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1157a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157ac: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1157ACu;
    SET_GPR_U32(ctx, 31, 0x1157B4u);
    ctx->pc = 0x1157B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157ACu;
    // 0x1157b0: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1157ACu, 0x1157B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157B4u;
label_1157b4:
    // 0x1157b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1157B4u;
    SET_GPR_U32(ctx, 31, 0x1157BCu);
    ctx->pc = 0x1157B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157B4u;
    // 0x1157b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1157B4u, 0x1157BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157BCu;
label_1157bc:
    // 0x1157bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1157BCu;
    {
        const bool branch_taken_0x1157bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157BCu;
        // 0x1157c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157bc) {
            ctx->pc = 0x1157C8u;
            goto label_1157c8;
        }
    }
    ctx->pc = 0x1157C4u;
    // 0x1157c4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1157c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1157c8:
    // 0x1157c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1157c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1157cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1157ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1157d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1157d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157d4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1157D4u;
    SET_GPR_U32(ctx, 31, 0x1157DCu);
    ctx->pc = 0x1157D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157D4u;
    // 0x1157d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1157D4u, 0x1157DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157DCu;
label_1157dc:
    // 0x1157dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1157dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157e0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1157E0u;
    SET_GPR_U32(ctx, 31, 0x1157E8u);
    ctx->pc = 0x1157E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157E0u;
    // 0x1157e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1157E0u, 0x1157E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157E8u;
label_1157e8:
    // 0x1157e8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1157E8u;
    {
        const bool branch_taken_0x1157e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E8u;
        // 0x1157ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e8) {
            ctx->pc = 0x1158D8u;
            goto label_1158d8;
        }
    }
    ctx->pc = 0x1157F0u;
label_1157f0:
    // 0x1157f0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1157f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1157f4: 0x26020660  addiu       $v0, $s0, 0x660
    ctx->pc = 0x1157f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x1157f8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1157F8u;
    {
        const bool branch_taken_0x1157f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1157f8) {
            ctx->pc = 0x1157FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1157F8u;
            // 0x1157fc: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11581Cu;
            goto label_11581c;
        }
    }
    ctx->pc = 0x115800u;
    // 0x115800: 0xc6000660  lwc1        $f0, 0x660($s0)
    ctx->pc = 0x115800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115804: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x115804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x115808: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11580c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x11580cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x115810: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115814: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x115814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x115818: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x115818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_11581c:
    // 0x11581c: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x115820: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115820u;
    {
        const bool branch_taken_0x115820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x115820) {
            ctx->pc = 0x115824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115820u;
            // 0x115824: 0xc6000670  lwc1        $f0, 0x670($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x115844u;
            goto label_115844;
        }
    }
    ctx->pc = 0x115828u;
    // 0x115828: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x115828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11582c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x11582cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x115830: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115834: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x115834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x115838: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11583c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x11583cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x115840: 0xc6000670  lwc1        $f0, 0x670($s0)
    ctx->pc = 0x115840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115844:
    // 0x115844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115848: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x115848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11584c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11584cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115850: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x115850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x115854: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115858: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x115858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11585c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11585cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115860: 0x8c4504d4  lw          $a1, 0x4D4($v0)
    ctx->pc = 0x115860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
    // 0x115864: 0x8c4604d8  lw          $a2, 0x4D8($v0)
    ctx->pc = 0x115864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1240)));
    // 0x115868: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x115868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11586c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11586Cu;
    SET_GPR_U32(ctx, 31, 0x115874u);
    ctx->pc = 0x115870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11586Cu;
    // 0x115870: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11586Cu, 0x115874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115874u;
label_115874:
    // 0x115874: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x115874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x115878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11587c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11587cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_115880:
    // 0x115880: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x115880u;
    SET_GPR_U32(ctx, 31, 0x115888u);
    ctx->pc = 0x115884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115880u;
    // 0x115884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x115880u, 0x115888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115888u;
label_115888:
    // 0x115888: 0xc055f06  jal         func_157C18
    ctx->pc = 0x115888u;
    SET_GPR_U32(ctx, 31, 0x115890u);
    ctx->pc = 0x11588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115888u;
    // 0x11588c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x115888u, 0x115890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115890u;
label_115890:
    // 0x115890: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115890u;
    {
        const bool branch_taken_0x115890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115890u;
        // 0x115894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115890) {
            ctx->pc = 0x1158B4u;
            goto label_1158b4;
        }
    }
    ctx->pc = 0x115898u;
    // 0x115898: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11589c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11589Cu;
    SET_GPR_U32(ctx, 31, 0x1158A4u);
    ctx->pc = 0x1158A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11589Cu;
    // 0x1158a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11589Cu, 0x1158A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158A4u;
label_1158a4:
    // 0x1158a4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1158a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1158a8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1158a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1158ac: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1158acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1158b0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1158b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1158b4:
    // 0x1158b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1158b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1158b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1158bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1158bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1158C0u;
    SET_GPR_U32(ctx, 31, 0x1158C8u);
    ctx->pc = 0x1158C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158C0u;
    // 0x1158c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1158C0u, 0x1158C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158C8u;
label_1158c8:
    // 0x1158c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1158c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1158CCu;
    SET_GPR_U32(ctx, 31, 0x1158D4u);
    ctx->pc = 0x1158D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158CCu;
    // 0x1158d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1158CCu, 0x1158D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158D4u;
label_1158d4:
    // 0x1158d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1158d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1158d8:
    // 0x1158d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1158d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1158dc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1158dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1158e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1158E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1158E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158E0u;
        // 0x1158e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1158E8u;
}
