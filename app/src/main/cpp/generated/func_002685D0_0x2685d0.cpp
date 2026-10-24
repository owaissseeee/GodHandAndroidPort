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

// Function: func_002685D0
// Address: 0x2685d0 - 0x268788
void func_002685D0_0x2685d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002685D0_0x2685d0");
#endif

    switch (ctx->pc) {
        case 0x268680u: goto label_268680;
        case 0x268740u: goto label_268740;
        case 0x268770u: goto label_268770;
        default: break;
    }

    ctx->pc = 0x2685d0u;

    // 0x2685d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2685d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2685d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2685d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2685d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2685d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2685dc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2685dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2685e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2685e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2685e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2685e8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2685e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2685ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2685ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2685f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2685f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2685f4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2685f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2685f8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2685f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2685fc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2685fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x268600: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x268600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x268604: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x268604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268608: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x268608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26860c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x26860cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x268610: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x268610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268614: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x268614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x268618: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x268618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26861c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x268620: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x268620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x268624: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x268624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x268628: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x268628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x26862c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x26862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x268630: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x268630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x268634: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x268634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x268638: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x268638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x26863c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x26863cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x268640: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x268640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x268644: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x268644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x268648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x268648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26864c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x26864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268650: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x268650u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x268654: 0x28620216  slti        $v0, $v1, 0x216
    ctx->pc = 0x268654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)534) ? 1 : 0);
    // 0x268658: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x268658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26865c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x26865cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x268660: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x268660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x268664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268664u;
    {
        const bool branch_taken_0x268664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268664u;
        // 0x268668: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268664) {
            ctx->pc = 0x268674u;
            goto label_268674;
        }
    }
    ctx->pc = 0x26866Cu;
    // 0x26866c: 0x28620214  slti        $v0, $v1, 0x214
    ctx->pc = 0x26866cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)532) ? 1 : 0);
    // 0x268670: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x268670u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_268674:
    // 0x268674: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x268674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x268678: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x268678u;
    SET_GPR_U32(ctx, 31, 0x268680u);
    ctx->pc = 0x26867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268678u;
    // 0x26867c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x268678u, 0x268680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268680u;
label_268680:
    // 0x268680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268680u;
    {
        const bool branch_taken_0x268680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268680u;
        // 0x268684: 0x8e0316d0  lw          $v1, 0x16D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268680) {
            ctx->pc = 0x268690u;
            goto label_268690;
        }
    }
    ctx->pc = 0x268688u;
    // 0x268688: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x268688u;
    {
        const bool branch_taken_0x268688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x268688) {
            ctx->pc = 0x268748u;
            goto label_268748;
        }
    }
    ctx->pc = 0x268690u;
label_268690:
    // 0x268690: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x268690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x268694: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x268694u;
    {
        const bool branch_taken_0x268694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268694) {
            ctx->pc = 0x268698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268694u;
            // 0x268698: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268774u;
            goto label_268774;
        }
    }
    ctx->pc = 0x26869Cu;
    // 0x26869c: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2686a0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2686a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2686a4: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x2686a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x2686a8: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x2686a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x2686ac: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x2686acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x2686b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2686B0u;
    {
        const bool branch_taken_0x2686b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2686B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686B0u;
        // 0x2686b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686b0) {
            ctx->pc = 0x2686D0u;
            goto label_2686d0;
        }
    }
    ctx->pc = 0x2686B8u;
    // 0x2686b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2686b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2686bc: 0x24425000  addiu       $v0, $v0, 0x5000
    ctx->pc = 0x2686bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20480));
    // 0x2686c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2686c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2686c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2686c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2686c8: 0x800008  jr          $a0
    ctx->pc = 0x2686C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2686D0u: goto label_2686d0;
            case 0x2686E4u: goto label_2686e4;
            case 0x2686F8u: goto label_2686f8;
            case 0x26870Cu: goto label_26870c;
            case 0x268720u: goto label_268720;
            case 0x268770u: goto label_268770;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2686D0u;
label_2686d0:
    // 0x2686d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2686d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2686d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2686d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686d8: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2686d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2686dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2686DCu;
    {
        const bool branch_taken_0x2686dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2686E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686DCu;
        // 0x2686e0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686dc) {
            ctx->pc = 0x268730u;
            goto label_268730;
        }
    }
    ctx->pc = 0x2686E4u;
label_2686e4:
    // 0x2686e4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2686e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2686e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2686e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686ec: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2686ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2686f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2686F0u;
    {
        const bool branch_taken_0x2686f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2686F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686F0u;
        // 0x2686f4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686f0) {
            ctx->pc = 0x268730u;
            goto label_268730;
        }
    }
    ctx->pc = 0x2686F8u;
label_2686f8:
    // 0x2686f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2686f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2686fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2686fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268700: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x268700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x268704: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x268704u;
    {
        const bool branch_taken_0x268704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268704u;
        // 0x268708: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268704) {
            ctx->pc = 0x268730u;
            goto label_268730;
        }
    }
    ctx->pc = 0x26870Cu;
label_26870c:
    // 0x26870c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x26870cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x268710: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x268710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268714: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x268714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x268718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268718u;
    {
        const bool branch_taken_0x268718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268718u;
        // 0x26871c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268718) {
            ctx->pc = 0x268730u;
            goto label_268730;
        }
    }
    ctx->pc = 0x268720u;
label_268720:
    // 0x268720: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x268720u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x268724: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x268724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268728: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x268728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x26872c: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x26872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_268730:
    // 0x268730: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x268730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268734: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x268734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268738: 0xc0c194a  jal         func_306528
    ctx->pc = 0x268738u;
    SET_GPR_U32(ctx, 31, 0x268740u);
    ctx->pc = 0x26873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268738u;
    // 0x26873c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x268738u, 0x268740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268740u;
label_268740:
    // 0x268740: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x268740u;
    {
        const bool branch_taken_0x268740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268740u;
        // 0x268744: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268740) {
            ctx->pc = 0x268774u;
            goto label_268774;
        }
    }
    ctx->pc = 0x268748u;
label_268748:
    // 0x268748: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x268748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x26874c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26874Cu;
    {
        const bool branch_taken_0x26874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26874Cu;
        // 0x268750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26874c) {
            ctx->pc = 0x268770u;
            goto label_268770;
        }
    }
    ctx->pc = 0x268754u;
    // 0x268754: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x268754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x268758: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x268758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x26875c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268760: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x268760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x268764: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x268764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268768: 0xc0c1880  jal         func_306200
    ctx->pc = 0x268768u;
    SET_GPR_U32(ctx, 31, 0x268770u);
    ctx->pc = 0x26876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268768u;
    // 0x26876c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x268768u, 0x268770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268770u;
label_268770:
    // 0x268770: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x268770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_268774:
    // 0x268774: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x268774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x268778: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x268778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26877c: 0x3e00008  jr          $ra
    ctx->pc = 0x26877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26877Cu;
        // 0x268780: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26877Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268784u;
    // 0x268784: 0x0  nop
    ctx->pc = 0x268784u;
    // NOP
    ctx->pc = 0x268788u;
}
