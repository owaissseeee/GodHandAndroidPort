#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: titleLevelSel__5cR020
// Address: 0x79b0e0 - 0x79b9e8
void titleLevelSel__5cR020_0x79b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("titleLevelSel__5cR020_0x79b0e0");
#endif

    switch (ctx->pc) {
        case 0x79b150u: goto label_79b150;
        case 0x79b168u: goto label_79b168;
        case 0x79b180u: goto label_79b180;
        case 0x79b19cu: goto label_79b19c;
        case 0x79b1b8u: goto label_79b1b8;
        case 0x79b1d4u: goto label_79b1d4;
        case 0x79b258u: goto label_79b258;
        case 0x79b340u: goto label_79b340;
        case 0x79b3ecu: goto label_79b3ec;
        case 0x79b428u: goto label_79b428;
        case 0x79b468u: goto label_79b468;
        case 0x79b474u: goto label_79b474;
        case 0x79b490u: goto label_79b490;
        case 0x79b4acu: goto label_79b4ac;
        case 0x79b4ccu: goto label_79b4cc;
        case 0x79b4e0u: goto label_79b4e0;
        case 0x79b4f0u: goto label_79b4f0;
        case 0x79b504u: goto label_79b504;
        case 0x79b550u: goto label_79b550;
        case 0x79b56cu: goto label_79b56c;
        case 0x79b5c8u: goto label_79b5c8;
        case 0x79b5e0u: goto label_79b5e0;
        case 0x79b630u: goto label_79b630;
        case 0x79b670u: goto label_79b670;
        case 0x79b694u: goto label_79b694;
        case 0x79b6a8u: goto label_79b6a8;
        case 0x79b6bcu: goto label_79b6bc;
        case 0x79b6d4u: goto label_79b6d4;
        case 0x79b6ecu: goto label_79b6ec;
        case 0x79b704u: goto label_79b704;
        case 0x79b714u: goto label_79b714;
        case 0x79b72cu: goto label_79b72c;
        case 0x79b744u: goto label_79b744;
        case 0x79b7c0u: goto label_79b7c0;
        case 0x79b800u: goto label_79b800;
        case 0x79b83cu: goto label_79b83c;
        case 0x79b86cu: goto label_79b86c;
        case 0x79b89cu: goto label_79b89c;
        case 0x79b8b0u: goto label_79b8b0;
        case 0x79b8c4u: goto label_79b8c4;
        case 0x79b940u: goto label_79b940;
        case 0x79b958u: goto label_79b958;
        case 0x79b978u: goto label_79b978;
        case 0x79b990u: goto label_79b990;
        case 0x79b9a8u: goto label_79b9a8;
        default: break;
    }

    ctx->pc = 0x79b0e0u;

    // 0x79b0e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79b0e4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79b0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79b0e8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79b0ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79b0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79b0f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79b0f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79b0fc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79b100: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x79b104: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x79b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79b108: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x79b10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b110: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x79b110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x79b114: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x79b114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x79b118: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x79b118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b11c: 0x104001fd  beqz        $v0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x79B11Cu;
    {
        const bool branch_taken_0x79b11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B11Cu;
        // 0x79b120: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b11c) {
            ctx->pc = 0x79B914u;
            goto label_79b914;
        }
    }
    ctx->pc = 0x79B124u;
    // 0x79b124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b128: 0x2442cc20  addiu       $v0, $v0, -0x33E0
    ctx->pc = 0x79b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954016));
    // 0x79b12c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b134: 0x400008  jr          $v0
    ctx->pc = 0x79B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x79B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B134u;
        // 0x79b138: 0x26760080  addiu       $s6, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79B13Cu: goto label_79b13c;
            case 0x79B20Cu: goto label_79b20c;
            case 0x79B5B8u: goto label_79b5b8;
            case 0x79B784u: goto label_79b784;
            case 0x79B8E8u: goto label_79b8e8;
            case 0x79B914u: goto label_79b914;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B134u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79B13Cu;
label_79b13c:
    // 0x79b13c: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x79b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b144: 0x3c15dfff  lui         $s5, 0xDFFF
    ctx->pc = 0x79b144u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57343 << 16));
    // 0x79b148: 0xc1e71d8  jal         func_79C760
    ctx->pc = 0x79B148u;
    SET_GPR_U32(ctx, 31, 0x79B150u);
    ctx->pc = 0x79B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B148u;
    // 0x79b14c: 0x26700080  addiu       $s0, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C760u, 0x79B148u, 0x79B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B150u;
label_79b150:
    // 0x79b150: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x79b150u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b158: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b15c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b160: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79B160u;
    SET_GPR_U32(ctx, 31, 0x79B168u);
    ctx->pc = 0x79B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B160u;
    // 0x79b164: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79B160u, 0x79B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B168u;
label_79b168:
    // 0x79b168: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x79b168u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x79b16c: 0x3c172000  lui         $s7, 0x2000
    ctx->pc = 0x79b16cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8192 << 16));
    // 0x79b170: 0x26710058  addiu       $s1, $s3, 0x58
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x79b174: 0x26720050  addiu       $s2, $s3, 0x50
    ctx->pc = 0x79b174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x79b178: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x79b178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x79b17c: 0x0  nop
    ctx->pc = 0x79b17cu;
    // NOP
label_79b180:
    // 0x79b180: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b184: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79b184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x79b188: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x79b188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b18c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79b18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b190: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79b190u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79b194: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B194u;
    SET_GPR_U32(ctx, 31, 0x79B19Cu);
    ctx->pc = 0x79B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B194u;
    // 0x79b198: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B194u, 0x79B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B19Cu;
label_79b19c:
    // 0x79b19c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x79b1a0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b1a4: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b1a8: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x79b1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x79b1ac: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b1b0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B1B0u;
    SET_GPR_U32(ctx, 31, 0x79B1B8u);
    ctx->pc = 0x79B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1B0u;
    // 0x79b1b4: 0x8e25fffc  lw          $a1, -0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B1B0u, 0x79B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1B8u;
label_79b1b8:
    // 0x79b1b8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b1bc: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b1c0: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x79b1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x79b1c4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b1c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x79b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b1cc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B1CCu;
    SET_GPR_U32(ctx, 31, 0x79B1D4u);
    ctx->pc = 0x79B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1CCu;
    // 0x79b1d0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B1CCu, 0x79B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1D4u;
label_79b1d4:
    // 0x79b1d4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b1d8: 0x2a840003  slti        $a0, $s4, 0x3
    ctx->pc = 0x79b1d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79b1dc: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x79b1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x79b1e0: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79B1E0u;
    {
        const bool branch_taken_0x79b1e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E0u;
        // 0x79b1e4: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1e0) {
            ctx->pc = 0x79B180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b180;
        }
    }
    ctx->pc = 0x79B1E8u;
    // 0x79b1e8: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x79b1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x79b1ec: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x79b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b1f0: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x79b1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x79b1f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b1f8: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x79b1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b1fc: 0xa2640001  sb          $a0, 0x1($s3)
    ctx->pc = 0x79b1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b200: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x79b200u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b204: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x79b204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x79b208: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x79b208u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
label_79b20c:
    // 0x79b20c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x79b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b210: 0x26670030  addiu       $a3, $s3, 0x30
    ctx->pc = 0x79b210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x79b214: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b21c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b220: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x79b220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x79b224: 0x24487a24  addiu       $t0, $v0, 0x7A24
    ctx->pc = 0x79b224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x79b228: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x79b228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x79b22c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79b22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79b230: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79b230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b234: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x79b234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x79b238: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79b23c: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x79b23cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
    // 0x79b240: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79b240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79b244: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b248: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x79b248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x79b24c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b250: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x79b250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b254: 0x0  nop
    ctx->pc = 0x79b254u;
    // NOP
label_79b258:
    // 0x79b258: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x79b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x79b25c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x79b25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x79b260: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B260u;
    {
        const bool branch_taken_0x79b260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B260u;
        // 0x79b264: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b260) {
            ctx->pc = 0x79B270u;
            goto label_79b270;
        }
    }
    ctx->pc = 0x79B268u;
    // 0x79b268: 0x5085000a  beql        $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x79B268u;
    {
        const bool branch_taken_0x79b268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79b268) {
            ctx->pc = 0x79B26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B268u;
            // 0x79b26c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B294u;
            goto label_79b294;
        }
    }
    ctx->pc = 0x79B270u;
label_79b270:
    // 0x79b270: 0x14940008  bne         $a0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B270u;
    {
        const bool branch_taken_0x79b270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x79B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B270u;
        // 0x79b274: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b270) {
            ctx->pc = 0x79B294u;
            goto label_79b294;
        }
    }
    ctx->pc = 0x79B278u;
    // 0x79b278: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x79b278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x79b27c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x79b27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b280: 0x0  nop
    ctx->pc = 0x79b280u;
    // NOP
    // 0x79b284: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x79B284u;
    {
        const bool branch_taken_0x79b284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B284u;
        // 0x79b288: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b284) {
            ctx->pc = 0x79B2B4u;
            goto label_79b2b4;
        }
    }
    ctx->pc = 0x79B28Cu;
    // 0x79b28c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79B28Cu;
    {
        const bool branch_taken_0x79b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B28Cu;
        // 0x79b290: 0xe4630000  swc1        $f3, 0x0($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b28c) {
            ctx->pc = 0x79B2B4u;
            goto label_79b2b4;
        }
    }
    ctx->pc = 0x79B294u;
label_79b294:
    // 0x79b294: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79b298: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b29c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79b29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79b2a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79b2a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b2a4: 0x0  nop
    ctx->pc = 0x79b2a4u;
    // NOP
    // 0x79b2a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x79B2A8u;
    {
        const bool branch_taken_0x79b2a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2A8u;
        // 0x79b2ac: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2a8) {
            ctx->pc = 0x79B2B4u;
            goto label_79b2b4;
        }
    }
    ctx->pc = 0x79B2B0u;
    // 0x79b2b0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x79b2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_79b2b4:
    // 0x79b2b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79b2b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79b2b8: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x79b2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79b2bc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x79B2BCu;
    {
        const bool branch_taken_0x79b2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2BCu;
        // 0x79b2c0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2bc) {
            ctx->pc = 0x79B258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b258;
        }
    }
    ctx->pc = 0x79B2C4u;
    // 0x79b2c4: 0x252474a0  addiu       $a0, $t1, 0x74A0
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29856));
    // 0x79b2c8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x79b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x79b2cc: 0xdc8301b0  ld          $v1, 0x1B0($a0)
    ctx->pc = 0x79b2ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x79b2d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79b2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79b2d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B2D4u;
    {
        const bool branch_taken_0x79b2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D4u;
        // 0x79b2d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2d4) {
            ctx->pc = 0x79B2F4u;
            goto label_79b2f4;
        }
    }
    ctx->pc = 0x79B2DCu;
    // 0x79b2dc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x79b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b2e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79b2e4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79B2E4u;
    {
        const bool branch_taken_0x79b2e4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E4u;
        // 0x79b2e8: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2e4) {
            ctx->pc = 0x79B31Cu;
            goto label_79b31c;
        }
    }
    ctx->pc = 0x79B2ECu;
    // 0x79b2ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79B2ECu;
    {
        const bool branch_taken_0x79b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2ECu;
        // 0x79b2f0: 0xae65001c  sw          $a1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2ec) {
            ctx->pc = 0x79B31Cu;
            goto label_79b31c;
        }
    }
    ctx->pc = 0x79B2F4u;
label_79b2f4:
    // 0x79b2f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x79b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x79b2f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79b2fc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x79B2FCu;
    {
        const bool branch_taken_0x79b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b2fc) {
            ctx->pc = 0x79B300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2FCu;
            // 0x79b300: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B348u;
            goto label_79b348;
        }
    }
    ctx->pc = 0x79B304u;
    // 0x79b304: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x79b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b308: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b30c: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x79b30cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79b310: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79B310u;
    {
        const bool branch_taken_0x79b310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B310u;
        // 0x79b314: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b310) {
            ctx->pc = 0x79B31Cu;
            goto label_79b31c;
        }
    }
    ctx->pc = 0x79B318u;
    // 0x79b318: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x79b318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_79b31c:
    // 0x79b31c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b324: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b328: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79b328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79b32c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b330: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b338: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B338u;
    SET_GPR_U32(ctx, 31, 0x79B340u);
    ctx->pc = 0x79B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B338u;
    // 0x79b33c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B338u, 0x79B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B340u;
label_79b340:
    // 0x79b340: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x79B340u;
    {
        const bool branch_taken_0x79b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B340u;
        // 0x79b344: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b340) {
            ctx->pc = 0x79B434u;
            goto label_79b434;
        }
    }
    ctx->pc = 0x79B348u;
label_79b348:
    // 0x79b348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b34c: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x79b34cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79b350: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x79B350u;
    {
        const bool branch_taken_0x79b350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B350u;
        // 0x79b354: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b350) {
            ctx->pc = 0x79B3C8u;
            goto label_79b3c8;
        }
    }
    ctx->pc = 0x79B358u;
    // 0x79b358: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x79b358u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x79b35c: 0x34038010  ori         $v1, $zero, 0x8010
    ctx->pc = 0x79b35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x79b360: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x79b360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x79b364: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79b368: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x79B368u;
    {
        const bool branch_taken_0x79b368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B368u;
        // 0x79b36c: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b368) {
            ctx->pc = 0x79B3C8u;
            goto label_79b3c8;
        }
    }
    ctx->pc = 0x79B370u;
    // 0x79b370: 0x8c820588  lw          $v0, 0x588($a0)
    ctx->pc = 0x79b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1416)));
    // 0x79b374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79b378: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B378u;
    {
        const bool branch_taken_0x79b378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B378u;
        // 0x79b37c: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b378) {
            ctx->pc = 0x79B398u;
            goto label_79b398;
        }
    }
    ctx->pc = 0x79B380u;
    // 0x79b380: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B380u;
    {
        const bool branch_taken_0x79b380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B380u;
        // 0x79b384: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b380) {
            ctx->pc = 0x79B39Cu;
            goto label_79b39c;
        }
    }
    ctx->pc = 0x79B388u;
    // 0x79b388: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b38c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b390: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x79B390u;
    {
        const bool branch_taken_0x79b390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B390u;
        // 0x79b394: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b390) {
            ctx->pc = 0x79B410u;
            goto label_79b410;
        }
    }
    ctx->pc = 0x79B398u;
label_79b398:
    // 0x79b398: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x79b398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_79b39c:
    // 0x79b39c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x79b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x79b3a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b3a4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x79b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x79b3a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b3ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b3b0: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x79b3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b3b4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x79b3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b3b8: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x79b3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x79b3bc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x79b3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b3c0: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x79B3C0u;
    {
        const bool branch_taken_0x79b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3C0u;
        // 0x79b3c4: 0xa2630001  sb          $v1, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3c0) {
            ctx->pc = 0x79B910u;
            goto label_79b910;
        }
    }
    ctx->pc = 0x79B3C8u;
label_79b3c8:
    // 0x79b3c8: 0x252274a0  addiu       $v0, $t1, 0x74A0
    ctx->pc = 0x79b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 29856));
    // 0x79b3cc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79b3d0: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x79b3d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x79b3d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b3d8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x79B3D8u;
    {
        const bool branch_taken_0x79b3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D8u;
        // 0x79b3dc: 0x26640080  addiu       $a0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3d8) {
            ctx->pc = 0x79B430u;
            goto label_79b430;
        }
    }
    ctx->pc = 0x79B3E0u;
    // 0x79b3e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b3e4: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79B3E4u;
    SET_GPR_U32(ctx, 31, 0x79B3ECu);
    ctx->pc = 0x79B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3E4u;
    // 0x79b3e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79B3E4u, 0x79B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3ECu;
label_79b3ec:
    // 0x79b3ec: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x79b3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b3f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b3f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b3f8: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x79b3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b3fc: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x79b3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b400: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b404: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x79b404u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b40c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x79b40cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_79b410:
    // 0x79b410: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79b414: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b418: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b41c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b41cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b420: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B420u;
    SET_GPR_U32(ctx, 31, 0x79B428u);
    ctx->pc = 0x79B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B420u;
    // 0x79b424: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B420u, 0x79B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B428u;
label_79b428:
    // 0x79b428: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x79B428u;
    {
        const bool branch_taken_0x79b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B428u;
        // 0x79b42c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b428) {
            ctx->pc = 0x79B918u;
            goto label_79b918;
        }
    }
    ctx->pc = 0x79B430u;
label_79b430:
    // 0x79b430: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x79b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_79b434:
    // 0x79b434: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x79b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b438: 0x10620136  beq         $v1, $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x79B438u;
    {
        const bool branch_taken_0x79b438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B438u;
        // 0x79b43c: 0x26770050  addiu       $s7, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b438) {
            ctx->pc = 0x79B914u;
            goto label_79b914;
        }
    }
    ctx->pc = 0x79B440u;
    // 0x79b440: 0x3c1edfff  lui         $fp, 0xDFFF
    ctx->pc = 0x79b440u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57343 << 16));
    // 0x79b444: 0x26710058  addiu       $s1, $s3, 0x58
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x79b448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b44c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b450: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79b450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b454: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x79b454u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x79b458: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x79b458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b45c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x79b45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b460: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x79b460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b464: 0x0  nop
    ctx->pc = 0x79b464u;
    // NOP
label_79b468:
    // 0x79b468: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x79b468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x79b46c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B46Cu;
    SET_GPR_U32(ctx, 31, 0x79B474u);
    ctx->pc = 0x79B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B46Cu;
    // 0x79b470: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B46Cu, 0x79B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B474u;
label_79b474:
    // 0x79b474: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b478: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x79b478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x79b47c: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b480: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x79b480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x79b484: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b488: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B488u;
    SET_GPR_U32(ctx, 31, 0x79B490u);
    ctx->pc = 0x79B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B488u;
    // 0x79b48c: 0x8e25fffc  lw          $a1, -0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B488u, 0x79B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B490u;
label_79b490:
    // 0x79b490: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b494: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x79b494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x79b498: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b49c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x79b49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x79b4a0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b4a4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B4A4u;
    SET_GPR_U32(ctx, 31, 0x79B4ACu);
    ctx->pc = 0x79B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4A4u;
    // 0x79b4a8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B4A4u, 0x79B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4ACu;
label_79b4ac:
    // 0x79b4ac: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b4b0: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x79b4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x79b4b4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b4b8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x79b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x79b4bc: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B4BCu;
    {
        const bool branch_taken_0x79b4bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4BCu;
        // 0x79b4c0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4bc) {
            ctx->pc = 0x79B4E8u;
            goto label_79b4e8;
        }
    }
    ctx->pc = 0x79B4C4u;
    // 0x79b4c4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B4C4u;
    SET_GPR_U32(ctx, 31, 0x79B4CCu);
    ctx->pc = 0x79B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4C4u;
    // 0x79b4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B4C4u, 0x79B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4CCu;
label_79b4cc:
    // 0x79b4cc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x79b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x79b4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4d4: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x79b4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b4d8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B4D8u;
    SET_GPR_U32(ctx, 31, 0x79B4E0u);
    ctx->pc = 0x79B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4D8u;
    // 0x79b4dc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B4D8u, 0x79B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4E0u;
label_79b4e0:
    // 0x79b4e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x79B4E0u;
    {
        const bool branch_taken_0x79b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4E0u;
        // 0x79b4e4: 0xe4540040  swc1        $f20, 0x40($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4e0) {
            ctx->pc = 0x79B518u;
            goto label_79b518;
        }
    }
    ctx->pc = 0x79B4E8u;
label_79b4e8:
    // 0x79b4e8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B4E8u;
    SET_GPR_U32(ctx, 31, 0x79B4F0u);
    ctx->pc = 0x79B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4E8u;
    // 0x79b4ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B4E8u, 0x79B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4F0u;
label_79b4f0:
    // 0x79b4f0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79b4f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79b4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4f8: 0xa045004f  sb          $a1, 0x4F($v0)
    ctx->pc = 0x79b4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x79b4fc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B4FCu;
    SET_GPR_U32(ctx, 31, 0x79B504u);
    ctx->pc = 0x79B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4FCu;
    // 0x79b500: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B4FCu, 0x79B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B504u;
label_79b504:
    // 0x79b504: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x79b504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x79b508: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79b508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x79b50c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b510: 0x0  nop
    ctx->pc = 0x79b510u;
    // NOP
    // 0x79b514: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x79b514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_79b518:
    // 0x79b518: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79b518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79b51c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x79b51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x79b520: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x79b520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x79b524: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x79b524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79b528: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x79B528u;
    {
        const bool branch_taken_0x79b528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B528u;
        // 0x79b52c: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b528) {
            ctx->pc = 0x79B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b468;
        }
    }
    ctx->pc = 0x79B530u;
    // 0x79b530: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x79b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b534: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x79b534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79b538: 0x26700080  addiu       $s0, $s3, 0x80
    ctx->pc = 0x79b538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b53c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x79b53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79b540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b544: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x79b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x79b548: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B548u;
    SET_GPR_U32(ctx, 31, 0x79B550u);
    ctx->pc = 0x79B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B548u;
    // 0x79b54c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B548u, 0x79B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B550u;
label_79b550:
    // 0x79b550: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x79b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x79b554: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79b554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b55c: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x79b55cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79b560: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x79b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x79b564: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B564u;
    SET_GPR_U32(ctx, 31, 0x79B56Cu);
    ctx->pc = 0x79B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B564u;
    // 0x79b568: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B564u, 0x79B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B56Cu;
label_79b56c:
    // 0x79b56c: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x79b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b570: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79b574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b578: 0x3c01c220  lui         $at, 0xC220
    ctx->pc = 0x79b578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49696 << 16));
    // 0x79b57c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b580: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x79B580u;
    {
        const bool branch_taken_0x79b580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79b580) {
            ctx->pc = 0x79B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B580u;
            // 0x79b584: 0xe660003c  swc1        $f0, 0x3C($s3) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B598u;
            goto label_79b598;
        }
    }
    ctx->pc = 0x79B588u;
    // 0x79b588: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x79b588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x79b58c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b590: 0x0  nop
    ctx->pc = 0x79b590u;
    // NOP
    // 0x79b594: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x79b594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
label_79b598:
    // 0x79b598: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x79b598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x79b59c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x79b59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b5a0: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x79b5a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x79b5a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b5a8: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x79b5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b5ac: 0xa2640001  sb          $a0, 0x1($s3)
    ctx->pc = 0x79b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b5b0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x79B5B0u;
    {
        const bool branch_taken_0x79b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5B0u;
        // 0x79b5b4: 0xa2620002  sb          $v0, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5b0) {
            ctx->pc = 0x79B910u;
            goto label_79b910;
        }
    }
    ctx->pc = 0x79B5B8u;
label_79b5b8:
    // 0x79b5b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79b5b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5bc: 0x26760080  addiu       $s6, $s3, 0x80
    ctx->pc = 0x79b5bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b5c0: 0x26770050  addiu       $s7, $s3, 0x50
    ctx->pc = 0x79b5c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x79b5c4: 0x26700058  addiu       $s0, $s3, 0x58
    ctx->pc = 0x79b5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_79b5c8:
    // 0x79b5c8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x79b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x79b5cc: 0x52820009  beql        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B5CCu;
    {
        const bool branch_taken_0x79b5cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x79b5cc) {
            ctx->pc = 0x79B5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B5CCu;
            // 0x79b5d0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B5F4u;
            goto label_79b5f4;
        }
    }
    ctx->pc = 0x79B5D4u;
    // 0x79b5d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b5d8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B5D8u;
    SET_GPR_U32(ctx, 31, 0x79B5E0u);
    ctx->pc = 0x79B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5D8u;
    // 0x79b5dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B5D8u, 0x79B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5E0u;
label_79b5e0:
    // 0x79b5e0: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x79b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b5e4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79b5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b5e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79b5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79b5ec: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79b5f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79b5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_79b5f4:
    // 0x79b5f4: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x79b5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79b5f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79B5F8u;
    {
        const bool branch_taken_0x79b5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5F8u;
        // 0x79b5fc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5f8) {
            ctx->pc = 0x79B5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b5c8;
        }
    }
    ctx->pc = 0x79B600u;
    // 0x79b600: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x79b600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x79b604: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79b604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b608: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x79b608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x79b60c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79b60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79b610: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b614: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x79b614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x79b618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79b61c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x79b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x79b620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b624: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x79b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x79b628: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B628u;
    SET_GPR_U32(ctx, 31, 0x79B630u);
    ctx->pc = 0x79B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B628u;
    // 0x79b62c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B628u, 0x79B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B630u;
label_79b630:
    // 0x79b630: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b634: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79b634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b638: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79b638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79b63c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79b63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79b640: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b644: 0x0  nop
    ctx->pc = 0x79b644u;
    // NOP
    // 0x79b648: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79b648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79b64c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x79b64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x79b650: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x79b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x79b654: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x79b654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x79b658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79b65c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x79b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x79b660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b664: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x79b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x79b668: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B668u;
    SET_GPR_U32(ctx, 31, 0x79B670u);
    ctx->pc = 0x79B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B668u;
    // 0x79b66c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B668u, 0x79B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B670u;
label_79b670:
    // 0x79b670: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b674: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x79b674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b678: 0x0  nop
    ctx->pc = 0x79b678u;
    // NOP
    // 0x79b67c: 0x450000a5  bc1f        . + 4 + (0xA5 << 2)
    ctx->pc = 0x79B67Cu;
    {
        const bool branch_taken_0x79b67c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B67Cu;
        // 0x79b680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b67c) {
            ctx->pc = 0x79B914u;
            goto label_79b914;
        }
    }
    ctx->pc = 0x79B684u;
    // 0x79b684: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x79b684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b688: 0x3c12dfff  lui         $s2, 0xDFFF
    ctx->pc = 0x79b688u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57343 << 16));
    // 0x79b68c: 0xc1e71d8  jal         func_79C760
    ctx->pc = 0x79B68Cu;
    SET_GPR_U32(ctx, 31, 0x79B694u);
    ctx->pc = 0x79B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B68Cu;
    // 0x79b690: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C760u, 0x79B68Cu, 0x79B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B694u;
label_79b694:
    // 0x79b694: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79b694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b698: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x79b698u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
    // 0x79b69c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x79b69cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x79b6a0: 0x26700058  addiu       $s0, $s3, 0x58
    ctx->pc = 0x79b6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x79b6a4: 0x0  nop
    ctx->pc = 0x79b6a4u;
    // NOP
label_79b6a8:
    // 0x79b6a8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x79b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b6ac: 0x16820017  bne         $s4, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x79B6ACu;
    {
        const bool branch_taken_0x79b6ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6ACu;
        // 0x79b6b0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6ac) {
            ctx->pc = 0x79B70Cu;
            goto label_79b70c;
        }
    }
    ctx->pc = 0x79B6B4u;
    // 0x79b6b4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B6B4u;
    SET_GPR_U32(ctx, 31, 0x79B6BCu);
    ctx->pc = 0x79B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6B4u;
    // 0x79b6b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B6B4u, 0x79B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6BCu;
label_79b6bc:
    // 0x79b6bc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b6c0: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b6c4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x79b6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x79b6c8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b6cc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B6CCu;
    SET_GPR_U32(ctx, 31, 0x79B6D4u);
    ctx->pc = 0x79B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6CCu;
    // 0x79b6d0: 0x8e05fffc  lw          $a1, -0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B6CCu, 0x79B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6D4u;
label_79b6d4:
    // 0x79b6d4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b6d8: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b6dc: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x79b6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x79b6e0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b6e4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B6E4u;
    SET_GPR_U32(ctx, 31, 0x79B6ECu);
    ctx->pc = 0x79B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6E4u;
    // 0x79b6e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B6E4u, 0x79B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6ECu;
label_79b6ec:
    // 0x79b6ec: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b6f0: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b6f4: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x79b6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x79b6f8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b6fc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B6FCu;
    SET_GPR_U32(ctx, 31, 0x79B704u);
    ctx->pc = 0x79B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6FCu;
    // 0x79b700: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B6FCu, 0x79B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B704u;
label_79b704:
    // 0x79b704: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79B704u;
    {
        const bool branch_taken_0x79b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B704u;
        // 0x79b708: 0xe4540040  swc1        $f20, 0x40($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b704) {
            ctx->pc = 0x79B750u;
            goto label_79b750;
        }
    }
    ctx->pc = 0x79B70Cu;
label_79b70c:
    // 0x79b70c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B70Cu;
    SET_GPR_U32(ctx, 31, 0x79B714u);
    ctx->pc = 0x79B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B70Cu;
    // 0x79b710: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B70Cu, 0x79B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B714u;
label_79b714:
    // 0x79b714: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b718: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b71c: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x79b71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x79b720: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b724: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B724u;
    SET_GPR_U32(ctx, 31, 0x79B72Cu);
    ctx->pc = 0x79B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B724u;
    // 0x79b728: 0x8e05fffc  lw          $a1, -0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B724u, 0x79B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B72Cu;
label_79b72c:
    // 0x79b72c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b730: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x79b730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b734: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x79b734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x79b738: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b73c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B73Cu;
    SET_GPR_U32(ctx, 31, 0x79B744u);
    ctx->pc = 0x79B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B73Cu;
    // 0x79b740: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B73Cu, 0x79B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B744u;
label_79b744:
    // 0x79b744: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b748: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x79b748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x79b74c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_79b750:
    // 0x79b750: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79b750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79b754: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x79b754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x79b758: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x79b758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79b75c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x79B75Cu;
    {
        const bool branch_taken_0x79b75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B75Cu;
        // 0x79b760: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b75c) {
            ctx->pc = 0x79B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b6a8;
        }
    }
    ctx->pc = 0x79B764u;
    // 0x79b764: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x79b764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x79b768: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x79b768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b76c: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x79b76cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x79b770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b774: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x79b774u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b778: 0xa2640001  sb          $a0, 0x1($s3)
    ctx->pc = 0x79b778u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b77c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x79B77Cu;
    {
        const bool branch_taken_0x79b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B77Cu;
        // 0x79b780: 0xa2620002  sb          $v0, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b77c) {
            ctx->pc = 0x79B910u;
            goto label_79b910;
        }
    }
    ctx->pc = 0x79B784u;
label_79b784:
    // 0x79b784: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x79b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b788: 0x26710050  addiu       $s1, $s3, 0x50
    ctx->pc = 0x79b788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x79b78c: 0x26700080  addiu       $s0, $s3, 0x80
    ctx->pc = 0x79b78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x79b790: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x79b790u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b794: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x79b794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x79b798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b79c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79b7a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b7a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b7a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x79b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x79b7ac: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x79b7acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b7b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x79b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x79b7b8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B7B8u;
    SET_GPR_U32(ctx, 31, 0x79B7C0u);
    ctx->pc = 0x79B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7B8u;
    // 0x79b7bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B7B8u, 0x79B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7C0u;
label_79b7c0:
    // 0x79b7c0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7c8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79b7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79b7cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79b7ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79b7d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b7d4: 0x0  nop
    ctx->pc = 0x79b7d4u;
    // NOP
    // 0x79b7d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79b7d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79b7dc: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x79b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x79b7e0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x79b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b7e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x79b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x79b7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79b7ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x79b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x79b7f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b7f4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x79b7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x79b7f8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B7F8u;
    SET_GPR_U32(ctx, 31, 0x79B800u);
    ctx->pc = 0x79B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7F8u;
    // 0x79b7fc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B7F8u, 0x79B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B800u;
label_79b800:
    // 0x79b800: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b804: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x79b804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b808: 0x0  nop
    ctx->pc = 0x79b808u;
    // NOP
    // 0x79b80c: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x79B80Cu;
    {
        const bool branch_taken_0x79b80c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B80Cu;
        // 0x79b810: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b80c) {
            ctx->pc = 0x79B914u;
            goto label_79b914;
        }
    }
    ctx->pc = 0x79B814u;
    // 0x79b814: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x79b814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b818: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b81c: 0x3c10dfff  lui         $s0, 0xDFFF
    ctx->pc = 0x79b81cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57343 << 16));
    // 0x79b820: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x79b820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x79b824: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x79b824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x79b828: 0x26710058  addiu       $s1, $s3, 0x58
    ctx->pc = 0x79b828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x79b82c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x79b82cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b830: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x79b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x79b834: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B834u;
    SET_GPR_U32(ctx, 31, 0x79B83Cu);
    ctx->pc = 0x79B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B834u;
    // 0x79b838: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B834u, 0x79B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B83Cu;
label_79b83c:
    // 0x79b83c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b840: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79b840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b844: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x79b844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x79b848: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b84c: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x79b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b850: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x79b854: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79b858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b85c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b860: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x79b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x79b864: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B864u;
    SET_GPR_U32(ctx, 31, 0x79B86Cu);
    ctx->pc = 0x79B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B864u;
    // 0x79b868: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B864u, 0x79B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B86Cu;
label_79b86c:
    // 0x79b86c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b870: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79b870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b874: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x79b874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x79b878: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b87c: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x79b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x79b880: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x79b880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x79b884: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79b888: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x79b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x79b88c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b890: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x79b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x79b894: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B894u;
    SET_GPR_U32(ctx, 31, 0x79B89Cu);
    ctx->pc = 0x79B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B894u;
    // 0x79b898: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B894u, 0x79B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B89Cu;
label_79b89c:
    // 0x79b89c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b8a0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79b8a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79b8a8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b8ac: 0x0  nop
    ctx->pc = 0x79b8acu;
    // NOP
label_79b8b0:
    // 0x79b8b0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x79b8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b8b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79b8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8b8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x79b8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x79b8bc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B8BCu;
    SET_GPR_U32(ctx, 31, 0x79B8C4u);
    ctx->pc = 0x79B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8BCu;
    // 0x79b8c0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B8BCu, 0x79B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8C4u;
label_79b8c4:
    // 0x79b8c4: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B8C4u;
    {
        const bool branch_taken_0x79b8c4 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x79B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8C4u;
        // 0x79b8c8: 0xe4540040  swc1        $f20, 0x40($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8c4) {
            ctx->pc = 0x79B8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b8b0;
        }
    }
    ctx->pc = 0x79B8CCu;
    // 0x79b8cc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x79b8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b8d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b8d4: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x79b8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x79b8d8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x79b8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b8dc: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x79b8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b8e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79B8E0u;
    {
        const bool branch_taken_0x79b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8E0u;
        // 0x79b8e4: 0xa2640002  sb          $a0, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8e0) {
            ctx->pc = 0x79B910u;
            goto label_79b910;
        }
    }
    ctx->pc = 0x79B8E8u;
label_79b8e8:
    // 0x79b8e8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x79b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x79b8ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b8f0: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x79b8f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b8f4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B8F4u;
    {
        const bool branch_taken_0x79b8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8F4u;
        // 0x79b8f8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8f4) {
            ctx->pc = 0x79B914u;
            goto label_79b914;
        }
    }
    ctx->pc = 0x79B8FCu;
    // 0x79b8fc: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x79b8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b900: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b904: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x79b904u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b908: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x79b908u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b90c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x79b90cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_79b910:
    // 0x79b910: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x79b910u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
label_79b914:
    // 0x79b914: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79b914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_79b918:
    // 0x79b918: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x79b918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x79b91c: 0x24627a24  addiu       $v0, $v1, 0x7A24
    ctx->pc = 0x79b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
    // 0x79b920: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79b924: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b928: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x79B928u;
    {
        const bool branch_taken_0x79b928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B928u;
        // 0x79b92c: 0x26700080  addiu       $s0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b928) {
            ctx->pc = 0x79B968u;
            goto label_79b968;
        }
    }
    ctx->pc = 0x79B930u;
    // 0x79b930: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79b930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79b934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b938: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B938u;
    SET_GPR_U32(ctx, 31, 0x79B940u);
    ctx->pc = 0x79B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B938u;
    // 0x79b93c: 0x3c112000  lui         $s1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B938u, 0x79B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B940u;
label_79b940:
    // 0x79b940: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b948: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79b94c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79b94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79b950: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B950u;
    SET_GPR_U32(ctx, 31, 0x79B958u);
    ctx->pc = 0x79B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B950u;
    // 0x79b954: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B950u, 0x79B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B958u;
label_79b958:
    // 0x79b958: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b960: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79B960u;
    {
        const bool branch_taken_0x79b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B960u;
        // 0x79b964: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b960) {
            ctx->pc = 0x79B99Cu;
            goto label_79b99c;
        }
    }
    ctx->pc = 0x79B968u;
label_79b968:
    // 0x79b968: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x79b968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x79b96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b970: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B970u;
    SET_GPR_U32(ctx, 31, 0x79B978u);
    ctx->pc = 0x79B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B970u;
    // 0x79b974: 0x3c112000  lui         $s1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B970u, 0x79B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B978u;
label_79b978:
    // 0x79b978: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b980: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x79b980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x79b984: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79b984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79b988: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B988u;
    SET_GPR_U32(ctx, 31, 0x79B990u);
    ctx->pc = 0x79B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B988u;
    // 0x79b98c: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B988u, 0x79B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B990u;
label_79b990:
    // 0x79b990: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b998: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x79b998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_79b99c:
    // 0x79b99c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79b9a0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79B9A0u;
    SET_GPR_U32(ctx, 31, 0x79B9A8u);
    ctx->pc = 0x79B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9A0u;
    // 0x79b9a4: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79B9A0u, 0x79B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9A8u;
label_79b9a8:
    // 0x79b9a8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79b9ac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79b9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79b9b0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79b9b4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79b9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b9b8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79b9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b9bc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79b9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b9c0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79b9c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b9c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79b9c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b9c8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79b9c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b9cc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79b9ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b9d0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x79b9d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b9d4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x79b9d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b9dc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x79b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E0u;
        // 0x79b9e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B9E8u;
}
} // namespace gh_r020
