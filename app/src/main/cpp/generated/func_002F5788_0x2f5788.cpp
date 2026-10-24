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

// Function: func_002F5788
// Address: 0x2f5788 - 0x2f5bf8
void func_002F5788_0x2f5788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F5788_0x2f5788");
#endif

    switch (ctx->pc) {
        case 0x2f57e4u: goto label_2f57e4;
        case 0x2f5800u: goto label_2f5800;
        case 0x2f5838u: goto label_2f5838;
        case 0x2f5878u: goto label_2f5878;
        case 0x2f5928u: goto label_2f5928;
        case 0x2f5968u: goto label_2f5968;
        case 0x2f59a8u: goto label_2f59a8;
        case 0x2f59b4u: goto label_2f59b4;
        case 0x2f59c4u: goto label_2f59c4;
        case 0x2f59f8u: goto label_2f59f8;
        case 0x2f5bb0u: goto label_2f5bb0;
        case 0x2f5bbcu: goto label_2f5bbc;
        case 0x2f5bccu: goto label_2f5bcc;
        default: break;
    }

    ctx->pc = 0x2f5788u;

    // 0x2f5788: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f5788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f578c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2f5790: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f5790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2f5794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5798: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f5798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2f579c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2f57a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f57a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f57a4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2f57a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2f57a8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f57a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2f57ac: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f57acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f57b0: 0x9043018d  lbu         $v1, 0x18D($v0)
    ctx->pc = 0x2f57b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 397)));
    // 0x2f57b4: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x2f57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f57b8: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2f57b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x2f57bc: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x2f57bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2f57c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F57C0u;
    {
        const bool branch_taken_0x2f57c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57C0u;
        // 0x2f57c4: 0xa2030249  sb          $v1, 0x249($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 585), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57c0) {
            ctx->pc = 0x2F57D0u;
            goto label_2f57d0;
        }
    }
    ctx->pc = 0x2F57C8u;
    // 0x2f57c8: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F57C8u;
    {
        const bool branch_taken_0x2f57c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57c8) {
            ctx->pc = 0x2F57CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F57C8u;
            // 0x2f57cc: 0x82060249  lb          $a2, 0x249($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F57DCu;
            goto label_2f57dc;
        }
    }
    ctx->pc = 0x2F57D0u;
label_2f57d0:
    // 0x2f57d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f57d4: 0xa2020249  sb          $v0, 0x249($s0)
    ctx->pc = 0x2f57d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 585), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f57d8: 0x82060249  lb          $a2, 0x249($s0)
    ctx->pc = 0x2f57d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
label_2f57dc:
    // 0x2f57dc: 0xc0baf44  jal         func_2EBD10
    ctx->pc = 0x2F57DCu;
    SET_GPR_U32(ctx, 31, 0x2F57E4u);
    ctx->pc = 0x2F57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57DCu;
    // 0x2f57e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBD10u, 0x2F57DCu, 0x2F57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57E4u;
label_2f57e4:
    // 0x2f57e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F57E4u;
    {
        const bool branch_taken_0x2f57e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57E4u;
        // 0x2f57e8: 0x3c060075  lui         $a2, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57e4) {
            ctx->pc = 0x2F5808u;
            goto label_2f5808;
        }
    }
    ctx->pc = 0x2F57ECu;
    // 0x2f57ec: 0x82040249  lb          $a0, 0x249($s0)
    ctx->pc = 0x2f57ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f57f0: 0x24c64240  addiu       $a2, $a2, 0x4240
    ctx->pc = 0x2f57f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16960));
    // 0x2f57f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f57f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f57f8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2F57F8u;
    SET_GPR_U32(ctx, 31, 0x2F5800u);
    ctx->pc = 0x2F57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57F8u;
    // 0x2f57fc: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2F57F8u, 0x2F5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5800u;
label_2f5800:
    // 0x2f5800: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5800u;
    {
        const bool branch_taken_0x2f5800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5800u;
        // 0x2f5804: 0xae0202f0  sw          $v0, 0x2F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5800) {
            ctx->pc = 0x2F5810u;
            goto label_2f5810;
        }
    }
    ctx->pc = 0x2F5808u;
label_2f5808:
    // 0x2f5808: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x2F5808u;
    {
        const bool branch_taken_0x2f5808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5808u;
        // 0x2f580c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5808) {
            ctx->pc = 0x2F5BD0u;
            goto label_2f5bd0;
        }
    }
    ctx->pc = 0x2F5810u;
label_2f5810:
    // 0x2f5810: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f5810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f5814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5818: 0x26110220  addiu       $s1, $s0, 0x220
    ctx->pc = 0x2f5818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x2f581c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2f581cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f5820: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5820u;
    {
        const bool branch_taken_0x2f5820 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5820u;
        // 0x2f5824: 0x27b30050  addiu       $s3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5820) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5828u;
    // 0x2f5828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f582c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f582cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5830: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x2f5830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x2f5834: 0x0  nop
    ctx->pc = 0x2f5834u;
    // NOP
label_2f5838:
    // 0x2f5838: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2f5838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f583c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f5840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f5844: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2f5844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f5848: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f5848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2f584c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2f584cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2f5850: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2f5850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2f5854: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f5854u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f5858: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2f5858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f585c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F585Cu;
    {
        const bool branch_taken_0x2f585c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f585c) {
            ctx->pc = 0x2F5860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F585Cu;
            // 0x2f5860: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5838;
        }
    }
    ctx->pc = 0x2F5864u;
label_2f5864:
    // 0x2f5864: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f5864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2f5868: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f586c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f586cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f5870: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F5870u;
    SET_GPR_U32(ctx, 31, 0x2F5878u);
    ctx->pc = 0x2F5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5870u;
    // 0x2f5874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F5870u, 0x2F5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5878u;
label_2f5878:
    // 0x2f5878: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f5878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f587c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2f587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f5880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5884: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f5884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f5888: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x2f5888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x2f588c: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2f588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5890: 0xe6000310  swc1        $f0, 0x310($s0)
    ctx->pc = 0x2f5890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x2f5894: 0xc4810140  lwc1        $f1, 0x140($a0)
    ctx->pc = 0x2f5894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5898: 0xe6010314  swc1        $f1, 0x314($s0)
    ctx->pc = 0x2f5898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 788), bits); }
    // 0x2f589c: 0xc4800144  lwc1        $f0, 0x144($a0)
    ctx->pc = 0x2f589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f58a0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2f58a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2f58a4: 0xe6020318  swc1        $f2, 0x318($s0)
    ctx->pc = 0x2f58a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 792), bits); }
    // 0x2f58a8: 0xc4800148  lwc1        $f0, 0x148($a0)
    ctx->pc = 0x2f58a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f58ac: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x2f58acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x2f58b0: 0xc481014c  lwc1        $f1, 0x14C($a0)
    ctx->pc = 0x2f58b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f58b4: 0xe6010304  swc1        $f1, 0x304($s0)
    ctx->pc = 0x2f58b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x2f58b8: 0xc4800150  lwc1        $f0, 0x150($a0)
    ctx->pc = 0x2f58b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f58bc: 0xe6000308  swc1        $f0, 0x308($s0)
    ctx->pc = 0x2f58bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x2f58c0: 0x9082018e  lbu         $v0, 0x18E($a0)
    ctx->pc = 0x2f58c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 398)));
    // 0x2f58c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2f58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2f58c8: 0xa202032c  sb          $v0, 0x32C($s0)
    ctx->pc = 0x2f58c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 812), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f58cc: 0x8083018f  lb          $v1, 0x18F($a0)
    ctx->pc = 0x2f58ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 399)));
    // 0x2f58d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f58d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f58d4: 0x0  nop
    ctx->pc = 0x2f58d4u;
    // NOP
    // 0x2f58d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f58d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f58dc: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2f58dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x2f58e0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2f58e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2f58e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f58e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f58e8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f58ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f58ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f58f0: 0xe600031c  swc1        $f0, 0x31C($s0)
    ctx->pc = 0x2f58f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 796), bits); }
    // 0x2f58f4: 0x80620190  lb          $v0, 0x190($v1)
    ctx->pc = 0x2f58f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x2f58f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f58f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f58fc: 0x0  nop
    ctx->pc = 0x2f58fcu;
    // NOP
    // 0x2f5900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5904: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f5904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2f5908: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f5908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2f590c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f590cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5914: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2f5914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2f5918: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f5918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f591c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f591cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5920: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F5920u;
    SET_GPR_U32(ctx, 31, 0x2F5928u);
    ctx->pc = 0x2F5924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5920u;
    // 0x2f5924: 0xe6000320  swc1        $f0, 0x320($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F5920u, 0x2F5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5928u;
label_2f5928:
    // 0x2f5928: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f5928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f592c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5930: 0x80430193  lb          $v1, 0x193($v0)
    ctx->pc = 0x2f5930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 403)));
    // 0x2f5934: 0x80450191  lb          $a1, 0x191($v0)
    ctx->pc = 0x2f5934u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 401)));
    // 0x2f5938: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f5938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f593c: 0x0  nop
    ctx->pc = 0x2f593cu;
    // NOP
    // 0x2f5940: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f5940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f5944: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f5944u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5948: 0x0  nop
    ctx->pc = 0x2f5948u;
    // NOP
    // 0x2f594c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f594cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f5950: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f5950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f5954: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2f5954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2f5958: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2f5958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2f595c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2f595cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2f5960: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F5960u;
    SET_GPR_U32(ctx, 31, 0x2F5968u);
    ctx->pc = 0x2F5964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5960u;
    // 0x2f5964: 0xe6010324  swc1        $f1, 0x324($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 804), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F5960u, 0x2F5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5968u;
label_2f5968:
    // 0x2f5968: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f5968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f596c: 0xc60c0324  lwc1        $f12, 0x324($s0)
    ctx->pc = 0x2f596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f5970: 0x80430194  lb          $v1, 0x194($v0)
    ctx->pc = 0x2f5970u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2f5974: 0x80440192  lb          $a0, 0x192($v0)
    ctx->pc = 0x2f5974u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 402)));
    // 0x2f5978: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f5978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f597c: 0x0  nop
    ctx->pc = 0x2f597cu;
    // NOP
    // 0x2f5980: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f5980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f5984: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f5984u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5988: 0x0  nop
    ctx->pc = 0x2f5988u;
    // NOP
    // 0x2f598c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f598cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f5990: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f5990u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f5994: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2f5994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2f5998: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2f5998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2f599c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2f599cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2f59a0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F59A0u;
    SET_GPR_U32(ctx, 31, 0x2F59A8u);
    ctx->pc = 0x2F59A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59A0u;
    // 0x2f59a4: 0xe6010328  swc1        $f1, 0x328($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 808), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F59A0u, 0x2F59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59A8u;
label_2f59a8:
    // 0x2f59a8: 0xc60c0328  lwc1        $f12, 0x328($s0)
    ctx->pc = 0x2f59a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f59ac: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F59ACu;
    SET_GPR_U32(ctx, 31, 0x2F59B4u);
    ctx->pc = 0x2F59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59ACu;
    // 0x2f59b0: 0xe6000324  swc1        $f0, 0x324($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 804), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F59ACu, 0x2F59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59B4u;
label_2f59b4:
    // 0x2f59b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f59b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59b8: 0xe6000328  swc1        $f0, 0x328($s0)
    ctx->pc = 0x2f59b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 808), bits); }
    // 0x2f59bc: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F59BCu;
    SET_GPR_U32(ctx, 31, 0x2F59C4u);
    ctx->pc = 0x2F59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59BCu;
    // 0x2f59c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F59BCu, 0x2F59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59C4u;
label_2f59c4:
    // 0x2f59c4: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f59c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f59c8: 0x18400077  blez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2F59C8u;
    {
        const bool branch_taken_0x2f59c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59C8u;
        // 0x2f59cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59c8) {
            ctx->pc = 0x2F5BA8u;
            goto label_2f5ba8;
        }
    }
    ctx->pc = 0x2F59D0u;
    // 0x2f59d0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2f59d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2f59d4: 0x847b8  dsll        $t0, $t0, 30
    ctx->pc = 0x2f59d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 30);
    // 0x2f59d8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x2f59d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x2f59dc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2f59dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2f59e0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x2f59e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x2f59e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f59e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f59e8: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x2f59e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x2f59ec: 0x3c090800  lui         $t1, 0x800
    ctx->pc = 0x2f59ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2048 << 16));
    // 0x2f59f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f59f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f59f4: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x2f59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_2f59f8:
    // 0x2f59f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2f59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f59fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5a00: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5A00u;
    {
        const bool branch_taken_0x2f5a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A00u;
        // 0x2f5a04: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a00) {
            ctx->pc = 0x2F5A1Cu;
            goto label_2f5a1c;
        }
    }
    ctx->pc = 0x2F5A08u;
    // 0x2f5a08: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f5a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f5a0c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5a10: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f5a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f5a14: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5a18: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f5a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f5a1c:
    // 0x2f5a1c: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2f5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f5a20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5a24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f5a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f5a28: 0xfc680060  sd          $t0, 0x60($v1)
    ctx->pc = 0x2f5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 8));
    // 0x2f5a2c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f5a30: 0xfc470068  sd          $a3, 0x68($v0)
    ctx->pc = 0x2f5a30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 7));
    // 0x2f5a34: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5a38: 0xfc680060  sd          $t0, 0x60($v1)
    ctx->pc = 0x2f5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 8));
    // 0x2f5a3c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2f5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5a40: 0xfc470068  sd          $a3, 0x68($v0)
    ctx->pc = 0x2f5a40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 7));
    // 0x2f5a44: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x2f5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2f5a48: 0x6a1024  and         $v0, $v1, $t2
    ctx->pc = 0x2f5a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x2f5a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5A4Cu;
    {
        const bool branch_taken_0x2f5a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A4Cu;
        // 0x2f5a50: 0x691024  and         $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a4c) {
            ctx->pc = 0x2F5A5Cu;
            goto label_2f5a5c;
        }
    }
    ctx->pc = 0x2F5A54u;
    // 0x2f5a54: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f5a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f5a58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f5a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f5a5c:
    // 0x2f5a5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5a60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5a64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5A64u;
    {
        const bool branch_taken_0x2f5a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A64u;
        // 0x2f5a68: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a64) {
            ctx->pc = 0x2F5A74u;
            goto label_2f5a74;
        }
    }
    ctx->pc = 0x2F5A6Cu;
    // 0x2f5a6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f5a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f5a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5a74:
    // 0x2f5a74: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x2f5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2f5a78: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f5a78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5a7c: 0x0  nop
    ctx->pc = 0x2f5a7cu;
    // NOP
    // 0x2f5a80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f5a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f5a84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f5a88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f5a8c: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x2f5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x2f5a90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2f5a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5a94: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f5a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f5a98: 0xc60202d4  lwc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2f5a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5a9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5aa0: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2f5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f5aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5aa8: 0x0  nop
    ctx->pc = 0x2f5aa8u;
    // NOP
    // 0x2f5aac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5ab4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2f5ab4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2f5ab8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f5ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f5abc: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2f5abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2f5ac0: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f5ac4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f5ac8: 0xfc4600a8  sd          $a2, 0xA8($v0)
    ctx->pc = 0x2f5ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 6));
    // 0x2f5acc: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2f5accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f5ad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5ad4: 0xe46300c0  swc1        $f3, 0xC0($v1)
    ctx->pc = 0x2f5ad4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2f5ad8: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f5ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f5adc: 0xc60202d4  lwc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2f5adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5ae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5ae4: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2f5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f5ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5aec: 0x0  nop
    ctx->pc = 0x2f5aecu;
    // NOP
    // 0x2f5af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5af8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2f5af8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2f5afc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f5afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f5b00: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x2f5b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x2f5b04: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f5b08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f5b0c: 0xfc4600c8  sd          $a2, 0xC8($v0)
    ctx->pc = 0x2f5b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 6));
    // 0x2f5b10: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5b14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5b18: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x2f5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x2f5b1c: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f5b1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f5b20: 0xc60202d4  lwc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2f5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5b24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5b28: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5b30: 0x0  nop
    ctx->pc = 0x2f5b30u;
    // NOP
    // 0x2f5b34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5b3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2f5b3cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2f5b40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f5b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f5b44: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2f5b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2f5b48: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2f5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5b4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f5b50: 0xfc4600a8  sd          $a2, 0xA8($v0)
    ctx->pc = 0x2f5b50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 6));
    // 0x2f5b54: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5b5c: 0xe46300c0  swc1        $f3, 0xC0($v1)
    ctx->pc = 0x2f5b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2f5b60: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f5b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f5b64: 0xc60202d4  lwc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2f5b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5b68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5b6c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5b74: 0x0  nop
    ctx->pc = 0x2f5b74u;
    // NOP
    // 0x2f5b78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5b7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5b80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f5b80u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2f5b84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f5b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f5b88: 0xe46100c4  swc1        $f1, 0xC4($v1)
    ctx->pc = 0x2f5b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x2f5b8c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2f5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f5b90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f5b94: 0xfc4600c8  sd          $a2, 0xC8($v0)
    ctx->pc = 0x2f5b94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 6));
    // 0x2f5b98: 0x82030249  lb          $v1, 0x249($s0)
    ctx->pc = 0x2f5b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f5b9c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2f5b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f5ba0: 0x5460ff95  bnel        $v1, $zero, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2F5BA0u;
    {
        const bool branch_taken_0x2f5ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ba0) {
            ctx->pc = 0x2F5BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5BA0u;
            // 0x2f5ba4: 0x8e0302bc  lw          $v1, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F59F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f59f8;
        }
    }
    ctx->pc = 0x2F5BA8u;
label_2f5ba8:
    // 0x2f5ba8: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2F5BA8u;
    SET_GPR_U32(ctx, 31, 0x2F5BB0u);
    ctx->pc = 0x2F5BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BA8u;
    // 0x2f5bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2F5BA8u, 0x2F5BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BB0u;
label_2f5bb0:
    // 0x2f5bb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f5bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bb4: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2F5BB4u;
    SET_GPR_U32(ctx, 31, 0x2F5BBCu);
    ctx->pc = 0x2F5BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BB4u;
    // 0x2f5bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2F5BB4u, 0x2F5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BBCu;
label_2f5bbc:
    // 0x2f5bbc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2f5bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5bc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bc4: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2F5BC4u;
    SET_GPR_U32(ctx, 31, 0x2F5BCCu);
    ctx->pc = 0x2F5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BC4u;
    // 0x2f5bc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2F5BC4u, 0x2F5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BCCu;
label_2f5bcc:
    // 0x2f5bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5bd0:
    // 0x2f5bd0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f5bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f5bd4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f5bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f5bd8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f5bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f5bdc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f5bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f5be0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f5be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f5be4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2f5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f5be8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f5bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BECu;
        // 0x2f5bf0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5BF4u;
    // 0x2f5bf4: 0x0  nop
    ctx->pc = 0x2f5bf4u;
    // NOP
    ctx->pc = 0x2f5bf8u;
}
