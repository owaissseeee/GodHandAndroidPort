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

// Function: func_001756D8
// Address: 0x1756d8 - 0x175b58
void func_001756D8_0x1756d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001756D8_0x1756d8");
#endif

    switch (ctx->pc) {
        case 0x17570cu: goto label_17570c;
        case 0x175770u: goto label_175770;
        case 0x1757f0u: goto label_1757f0;
        case 0x175814u: goto label_175814;
        case 0x175888u: goto label_175888;
        case 0x17589cu: goto label_17589c;
        case 0x17591cu: goto label_17591c;
        case 0x1759acu: goto label_1759ac;
        case 0x1759d8u: goto label_1759d8;
        case 0x1759e8u: goto label_1759e8;
        case 0x1759f8u: goto label_1759f8;
        case 0x175a08u: goto label_175a08;
        case 0x175a18u: goto label_175a18;
        case 0x175a28u: goto label_175a28;
        case 0x175a30u: goto label_175a30;
        case 0x175a48u: goto label_175a48;
        case 0x175a60u: goto label_175a60;
        default: break;
    }

    ctx->pc = 0x1756d8u;

    // 0x1756d8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1756d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1756dc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1756dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1756e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1756e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756e4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1756e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1756e8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1756e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1756ec: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1756ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1756f0: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x1756f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x1756f4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1756f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1756f8: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x1756f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
    // 0x1756fc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1756fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x175700: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x175700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x175704: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x175704u;
    SET_GPR_U32(ctx, 31, 0x17570Cu);
    ctx->pc = 0x175708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175704u;
    // 0x175708: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x175704u, 0x17570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17570Cu;
label_17570c:
    // 0x17570c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17570cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x175710: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x175710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x175714: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x175714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x175718: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x175718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
    // 0x17571c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17571cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175720: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x175720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175724: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x175724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x175728: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x175728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17572c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17572cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175730: 0x26244380  addiu       $a0, $s1, 0x4380
    ctx->pc = 0x175730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17280));
    // 0x175734: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x175734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x175738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17573c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175740: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x175744: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x175744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x175748: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x175748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17574c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x17574cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x175750: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x175750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x175754: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x175754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x175758: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x175758u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17575c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x17575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x175760: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x175760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175764: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x175764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x175768: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x175768u;
    SET_GPR_U32(ctx, 31, 0x175770u);
    ctx->pc = 0x17576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175768u;
    // 0x17576c: 0xe604000c  swc1        $f4, 0xC($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x175768u, 0x175770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175770u;
label_175770:
    // 0x175770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175774: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x175774u;
    {
        const bool branch_taken_0x175774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175774u;
        // 0x175778: 0xae420608  sw          $v0, 0x608($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175774) {
            ctx->pc = 0x175814u;
            goto label_175814;
        }
    }
    ctx->pc = 0x17577Cu;
    // 0x17577c: 0x26621290  addiu       $v0, $s3, 0x1290
    ctx->pc = 0x17577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4752));
    // 0x175780: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x175780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x175784: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x175784u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x175788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17578c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x17578cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x175790: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175790u;
    {
        const bool branch_taken_0x175790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175790u;
        // 0x175794: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175790) {
            ctx->pc = 0x1757A0u;
            goto label_1757a0;
        }
    }
    ctx->pc = 0x175798u;
    // 0x175798: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x175798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17579c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1757a0:
    // 0x1757a0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1757a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1757a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1757A4u;
    {
        const bool branch_taken_0x1757a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757A4u;
        // 0x1757a8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757a4) {
            ctx->pc = 0x1757BCu;
            goto label_1757bc;
        }
    }
    ctx->pc = 0x1757ACu;
    // 0x1757ac: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1757acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1757b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1757b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1757b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1757B4u;
    {
        const bool branch_taken_0x1757b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757B4u;
        // 0x1757b8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757b4) {
            ctx->pc = 0x1757C0u;
            goto label_1757c0;
        }
    }
    ctx->pc = 0x1757BCu;
label_1757bc:
    // 0x1757bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1757bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1757c0:
    // 0x1757c0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1757c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1757c4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1757c8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1757c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1757cc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1757ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1757d0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1757d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1757d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1757d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1757dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1757dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1757e0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1757e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757e4: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x1757e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x1757e8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1757E8u;
    SET_GPR_U32(ctx, 31, 0x1757F0u);
    ctx->pc = 0x1757ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757E8u;
    // 0x1757ec: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1757E8u, 0x1757F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757F0u;
label_1757f0:
    // 0x1757f0: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x1757f4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1757f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1757f8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1757f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1757fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1757fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175800: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x175800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x175804: 0x8e420608  lw          $v0, 0x608($s2)
    ctx->pc = 0x175804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x175808: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x175808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x17580c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x17580Cu;
    SET_GPR_U32(ctx, 31, 0x175814u);
    ctx->pc = 0x175810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17580Cu;
    // 0x175810: 0x8e440608  lw          $a0, 0x608($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x17580Cu, 0x175814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175814u;
label_175814:
    // 0x175814: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x175818: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x175818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x17581c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17581cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175820: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x175820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x175824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x175824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x175828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x175828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17582c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x17582cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x175830: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x175830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x175834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175838: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x175838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17583c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x17583cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x175840: 0x26b04380  addiu       $s0, $s5, 0x4380
    ctx->pc = 0x175840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 17280));
    // 0x175844: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x175844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x175848: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x175848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17584c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x17584cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x175850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175854: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x175854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x175858: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x175858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17585c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x17585cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x175860: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x175860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175864: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x175864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x175868: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x175868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17586c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x17586cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x175870: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x175870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x175874: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x175874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x175878: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x175878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x17587c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x17587cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x175880: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x175880u;
    SET_GPR_U32(ctx, 31, 0x175888u);
    ctx->pc = 0x175884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175880u;
    // 0x175884: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x175880u, 0x175888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175888u;
label_175888:
    // 0x175888: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x175888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17588c: 0xae420600  sw          $v0, 0x600($s2)
    ctx->pc = 0x17588cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1536), GPR_U32(ctx, 2));
    // 0x175890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175894: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x175894u;
    SET_GPR_U32(ctx, 31, 0x17589Cu);
    ctx->pc = 0x175898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175894u;
    // 0x175898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x175894u, 0x17589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17589Cu;
label_17589c:
    // 0x17589c: 0x8e430600  lw          $v1, 0x600($s2)
    ctx->pc = 0x17589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x1758a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1758a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758a4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1758A4u;
    {
        const bool branch_taken_0x1758a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1758A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758A4u;
        // 0x1758a8: 0xae420604  sw          $v0, 0x604($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758a4) {
            ctx->pc = 0x17592Cu;
            goto label_17592c;
        }
    }
    ctx->pc = 0x1758ACu;
    // 0x1758ac: 0x92641290  lbu         $a0, 0x1290($s3)
    ctx->pc = 0x1758acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4752)));
    // 0x1758b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1758b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758b4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1758b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1758b8: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1758b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1758bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1758BCu;
    {
        const bool branch_taken_0x1758bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1758C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758BCu;
        // 0x1758c0: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758bc) {
            ctx->pc = 0x1758CCu;
            goto label_1758cc;
        }
    }
    ctx->pc = 0x1758C4u;
    // 0x1758c4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1758c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1758c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1758c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1758cc:
    // 0x1758cc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1758ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1758d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1758D0u;
    {
        const bool branch_taken_0x1758d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1758D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758D0u;
        // 0x1758d4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758d0) {
            ctx->pc = 0x1758E8u;
            goto label_1758e8;
        }
    }
    ctx->pc = 0x1758D8u;
    // 0x1758d8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1758d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1758dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1758dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1758e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1758E0u;
    {
        const bool branch_taken_0x1758e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1758E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758E0u;
        // 0x1758e4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758e0) {
            ctx->pc = 0x1758ECu;
            goto label_1758ec;
        }
    }
    ctx->pc = 0x1758E8u;
label_1758e8:
    // 0x1758e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1758e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1758ec:
    // 0x1758ec: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1758ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1758f0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1758f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1758f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1758f8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1758f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1758fc: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1758fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x175900: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x175900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x175904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x175908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17590c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x17590cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175910: 0x8e440600  lw          $a0, 0x600($s2)
    ctx->pc = 0x175910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x175914: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x175914u;
    SET_GPR_U32(ctx, 31, 0x17591Cu);
    ctx->pc = 0x175918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175914u;
    // 0x175918: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x175914u, 0x17591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17591Cu;
label_17591c:
    // 0x17591c: 0x8e430600  lw          $v1, 0x600($s2)
    ctx->pc = 0x17591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x175920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175924: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x175924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x175928: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x175928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17592c:
    // 0x17592c: 0x8e420604  lw          $v0, 0x604($s2)
    ctx->pc = 0x17592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x175930: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x175930u;
    {
        const bool branch_taken_0x175930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175930u;
        // 0x175934: 0x26621290  addiu       $v0, $s3, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175930) {
            ctx->pc = 0x1759BCu;
            goto label_1759bc;
        }
    }
    ctx->pc = 0x175938u;
    // 0x175938: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x175938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x17593c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x17593cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x175940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175944: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x175944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x175948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175948u;
    {
        const bool branch_taken_0x175948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175948u;
        // 0x17594c: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175948) {
            ctx->pc = 0x175958u;
            goto label_175958;
        }
    }
    ctx->pc = 0x175950u;
    // 0x175950: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x175950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175958:
    // 0x175958: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x175958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17595c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17595Cu;
    {
        const bool branch_taken_0x17595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17595Cu;
        // 0x175960: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17595c) {
            ctx->pc = 0x175974u;
            goto label_175974;
        }
    }
    ctx->pc = 0x175964u;
    // 0x175964: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x175968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17596c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17596Cu;
    {
        const bool branch_taken_0x17596c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17596Cu;
        // 0x175970: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17596c) {
            ctx->pc = 0x175978u;
            goto label_175978;
        }
    }
    ctx->pc = 0x175974u;
label_175974:
    // 0x175974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175978:
    // 0x175978: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x175978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x17597c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x17597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x175980: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x175980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x175984: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x175984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x175988: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x175988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x17598c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17598cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175990: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x175990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x175994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x175994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175998: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x175998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17599c: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x17599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x1759a0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1759a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759a4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1759A4u;
    SET_GPR_U32(ctx, 31, 0x1759ACu);
    ctx->pc = 0x1759A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759A4u;
    // 0x1759a8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1759A4u, 0x1759ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759ACu;
label_1759ac:
    // 0x1759ac: 0x8e430604  lw          $v1, 0x604($s2)
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x1759b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1759b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1759b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1759b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1759b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1759b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1759bc:
    // 0x1759bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1759bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1759c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1759c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759c4: 0xa6420d3a  sh          $v0, 0xD3A($s2)
    ctx->pc = 0x1759c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3386), (uint16_t)GPR_U32(ctx, 2));
    // 0x1759c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1759c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759cc: 0xa6420d38  sh          $v0, 0xD38($s2)
    ctx->pc = 0x1759ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1759d0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1759D0u;
    SET_GPR_U32(ctx, 31, 0x1759D8u);
    ctx->pc = 0x1759D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759D0u;
    // 0x1759d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1759D0u, 0x1759D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759D8u;
label_1759d8:
    // 0x1759d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1759d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1759e0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1759E0u;
    SET_GPR_U32(ctx, 31, 0x1759E8u);
    ctx->pc = 0x1759E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759E0u;
    // 0x1759e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1759E0u, 0x1759E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759E8u;
label_1759e8:
    // 0x1759e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1759e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1759f0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1759F0u;
    SET_GPR_U32(ctx, 31, 0x1759F8u);
    ctx->pc = 0x1759F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759F0u;
    // 0x1759f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1759F0u, 0x1759F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759F8u;
label_1759f8:
    // 0x1759f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1759f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1759fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x175a00: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x175A00u;
    SET_GPR_U32(ctx, 31, 0x175A08u);
    ctx->pc = 0x175A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A00u;
    // 0x175a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x175A00u, 0x175A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A08u;
label_175a08:
    // 0x175a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a0c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x175a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x175a10: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x175A10u;
    SET_GPR_U32(ctx, 31, 0x175A18u);
    ctx->pc = 0x175A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A10u;
    // 0x175a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x175A10u, 0x175A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A18u;
label_175a18:
    // 0x175a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a1c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x175a20: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x175A20u;
    SET_GPR_U32(ctx, 31, 0x175A28u);
    ctx->pc = 0x175A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A20u;
    // 0x175a24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x175A20u, 0x175A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A28u;
label_175a28:
    // 0x175a28: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x175A28u;
    SET_GPR_U32(ctx, 31, 0x175A30u);
    ctx->pc = 0x175A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A28u;
    // 0x175a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x175A28u, 0x175A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A30u;
label_175a30:
    // 0x175a30: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x175a34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x175a34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a38: 0x24491290  addiu       $t1, $v0, 0x1290
    ctx->pc = 0x175a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4752));
    // 0x175a3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x175a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175a40: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x175a40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x175a44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x175a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_175a48:
    // 0x175a48: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x175a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x175a4c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x175a4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175a50: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x175a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a54: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x175A54u;
    {
        const bool branch_taken_0x175a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A54u;
        // 0x175a58: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a54) {
            ctx->pc = 0x175AECu;
            goto label_175aec;
        }
    }
    ctx->pc = 0x175A5Cu;
    // 0x175a5c: 0x0  nop
    ctx->pc = 0x175a5cu;
    // NOP
label_175a60:
    // 0x175a60: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x175a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x175a64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175A64u;
    {
        const bool branch_taken_0x175a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A64u;
        // 0x175a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a64) {
            ctx->pc = 0x175A74u;
            goto label_175a74;
        }
    }
    ctx->pc = 0x175A6Cu;
    // 0x175a6c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x175a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175a74:
    // 0x175a74: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x175a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x175a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175A78u;
    {
        const bool branch_taken_0x175a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A78u;
        // 0x175a7c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a78) {
            ctx->pc = 0x175A90u;
            goto label_175a90;
        }
    }
    ctx->pc = 0x175A80u;
    // 0x175a80: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x175a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x175a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175a88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175A88u;
    {
        const bool branch_taken_0x175a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A88u;
        // 0x175a8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a88) {
            ctx->pc = 0x175A94u;
            goto label_175a94;
        }
    }
    ctx->pc = 0x175A90u;
label_175a90:
    // 0x175a90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x175a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175a94:
    // 0x175a94: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x175a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a9c: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x175a9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x175aa0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x175aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x175aa4: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x175aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x175aa8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x175aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x175aac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175AACu;
    {
        const bool branch_taken_0x175aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AACu;
        // 0x175ab0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175aac) {
            ctx->pc = 0x175ABCu;
            goto label_175abc;
        }
    }
    ctx->pc = 0x175AB4u;
    // 0x175ab4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x175ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175abc:
    // 0x175abc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x175abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175ac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175AC0u;
    {
        const bool branch_taken_0x175ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AC0u;
        // 0x175ac4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ac0) {
            ctx->pc = 0x175AD8u;
            goto label_175ad8;
        }
    }
    ctx->pc = 0x175AC8u;
    // 0x175ac8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x175ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x175acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175AD0u;
    {
        const bool branch_taken_0x175ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AD0u;
        // 0x175ad4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ad0) {
            ctx->pc = 0x175ADCu;
            goto label_175adc;
        }
    }
    ctx->pc = 0x175AD8u;
label_175ad8:
    // 0x175ad8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x175ad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175adc:
    // 0x175adc: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x175ae0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x175ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x175ae4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x175ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x175ae8: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x175ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_175aec:
    // 0x175aec: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x175aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x175af0: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x175af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x175af4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x175af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175af8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x175af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175b00: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x175b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175b04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x175B04u;
    {
        const bool branch_taken_0x175b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b04) {
            ctx->pc = 0x175B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175B04u;
            // 0x175b08: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175B20u;
            goto label_175b20;
        }
    }
    ctx->pc = 0x175B0Cu;
    // 0x175b0c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x175b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x175b10: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x175b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175b14: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x175B14u;
    {
        const bool branch_taken_0x175b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175b14) {
            ctx->pc = 0x175B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175B14u;
            // 0x175b18: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175a60;
        }
    }
    ctx->pc = 0x175B1Cu;
    // 0x175b1c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x175b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_175b20:
    // 0x175b20: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x175b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x175b24: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x175B24u;
    {
        const bool branch_taken_0x175b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175b24) {
            ctx->pc = 0x175B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175B24u;
            // 0x175b28: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175a48;
        }
    }
    ctx->pc = 0x175B2Cu;
    // 0x175b2c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x175b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x175b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175b34: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x175b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x175b38: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x175b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x175b3c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x175b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x175b40: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x175b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x175b44: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x175b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x175b48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x175b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x175b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x175B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B4Cu;
        // 0x175b50: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175B54u;
    // 0x175b54: 0x0  nop
    ctx->pc = 0x175b54u;
    // NOP
    ctx->pc = 0x175b58u;
}
