#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: func_007992D8
// Address: 0x7992d8 - 0x7994c8
void func_007992D8_0x7992d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007992D8_0x7992d8");
#endif

    switch (ctx->pc) {
        case 0x799338u: goto label_799338;
        case 0x799364u: goto label_799364;
        case 0x799370u: goto label_799370;
        case 0x79937cu: goto label_79937c;
        case 0x799388u: goto label_799388;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993dcu: goto label_7993dc;
        case 0x799400u: goto label_799400;
        case 0x79940cu: goto label_79940c;
        case 0x799418u: goto label_799418;
        case 0x799424u: goto label_799424;
        case 0x799444u: goto label_799444;
        case 0x799450u: goto label_799450;
        case 0x79945cu: goto label_79945c;
        case 0x799468u: goto label_799468;
        case 0x79947cu: goto label_79947c;
        case 0x799494u: goto label_799494;
        default: break;
    }

    ctx->pc = 0x7992d8u;

    // 0x7992d8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x7992dc: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x7992dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x7992e0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x7992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x7992e4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x7992e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x7992e8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7992ec: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x7992ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x7992f0: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x7992f4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x7992f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x7992f8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7992fc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x7992fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x799300: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799304: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x799304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x799308: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79930c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x79930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x799310: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x799314: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x799314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x799318: 0x3c162000  lui         $s6, 0x2000
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
    // 0x79931c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x79931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x799320: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799324: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x799328: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79932c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x799330: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799334: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
label_799338:
    // 0x799338: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79933c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799340: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x799340u;
    {
        const bool branch_taken_0x799340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799340u;
        // 0x799344: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799340) {
            ctx->pc = 0x79938Cu;
            goto label_79938c;
        }
    }
    ctx->pc = 0x799348u;
    // 0x799348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79934c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799354: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799354u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799358: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79935c: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799368: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799374: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799374u;
    SET_GPR_U32(ctx, 31, 0x79937Cu);
    ctx->pc = 0x799378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799374u;
    // 0x799378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799374u, 0x79937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799380: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
label_79938c:
    // 0x79938c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799390: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799394: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x799394u;
    {
        const bool branch_taken_0x799394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799394) {
            ctx->pc = 0x7993E0u;
            goto label_7993e0;
        }
    }
    ctx->pc = 0x79939Cu;
    // 0x79939c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7993a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7993a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7993a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7993ac: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x7993acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x7993b0: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993bc: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x7993BCu;
    SET_GPR_U32(ctx, 31, 0x7993C4u);
    ctx->pc = 0x7993C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993BCu;
    // 0x7993c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x7993BCu, 0x7993C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C4u;
label_7993c4:
    // 0x7993c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c8: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x7993C8u;
    SET_GPR_U32(ctx, 31, 0x7993D0u);
    ctx->pc = 0x7993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C8u;
    // 0x7993cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x7993C8u, 0x7993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d4: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
label_7993e0:
    // 0x7993e0: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x7993e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7993E4u;
    {
        const bool branch_taken_0x7993e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E4u;
        // 0x7993e8: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e4) {
            ctx->pc = 0x799428u;
            goto label_799428;
        }
    }
    ctx->pc = 0x7993ECu;
    // 0x7993ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f0: 0xa3be0000  sb          $fp, 0x0($sp)
    ctx->pc = 0x7993f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 30));
    // 0x7993f4: 0xa3b70030  sb          $s7, 0x30($sp)
    ctx->pc = 0x7993f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 23));
    // 0x7993f8: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x7993F8u;
    SET_GPR_U32(ctx, 31, 0x799400u);
    ctx->pc = 0x7993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F8u;
    // 0x7993fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x7993F8u, 0x799400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799404: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799410: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799410u;
    SET_GPR_U32(ctx, 31, 0x799418u);
    ctx->pc = 0x799414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799410u;
    // 0x799414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799410u, 0x799418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79941c: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x79941Cu;
    SET_GPR_U32(ctx, 31, 0x799424u);
    ctx->pc = 0x799420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79941Cu;
    // 0x799420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
label_799428:
    // 0x799428: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x79942c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79942Cu;
    {
        const bool branch_taken_0x79942c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79942c) {
            ctx->pc = 0x799484u;
            goto label_799484;
        }
    }
    ctx->pc = 0x799434u;
    // 0x799434: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799438: 0xa3b40010  sb          $s4, 0x10($sp)
    ctx->pc = 0x799438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 20));
    // 0x79943c: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799448: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799454: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799460: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79946c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799470: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799474: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x79947Cu;
    {
        const bool branch_taken_0x79947c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79947c) {
            ctx->pc = 0x799338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799338;
        }
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799488: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79948c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79948Cu;
    SET_GPR_U32(ctx, 31, 0x799494u);
    ctx->pc = 0x799490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79948Cu;
    // 0x799490: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79948Cu, 0x799494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799494u;
label_799494:
    // 0x799494: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x799494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799498: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x799498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79949c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79949cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7994a0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x7994a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7994a4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x7994a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7994a8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x7994a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7994ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x7994acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7994b0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x7994b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7994b4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x7994b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7994b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7994bc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x7994bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7994c0: 0x3e00008  jr          $ra
    ctx->pc = 0x7994C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C0u;
        // 0x7994c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994C8u;
}
} // namespace gh_r103
