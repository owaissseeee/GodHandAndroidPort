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

// Function: func_002E83D8
// Address: 0x2e83d8 - 0x2e8b38
void func_002E83D8_0x2e83d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E83D8_0x2e83d8");
#endif

    switch (ctx->pc) {
        case 0x2e8424u: goto label_2e8424;
        case 0x2e8530u: goto label_2e8530;
        case 0x2e87d8u: goto label_2e87d8;
        case 0x2e8b04u: goto label_2e8b04;
        default: break;
    }

    ctx->pc = 0x2e83d8u;

    // 0x2e83d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e83d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e83dc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e83dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2e83e0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e83e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2e83e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e83e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e83e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2e83ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e83ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2e83f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2e83f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e83f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e83fc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e83fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8400: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2e8400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e8404: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2e8404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2e8408: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e8408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e840c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2e840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2e8410: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2e8410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2e8414: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2e8414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2e8418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e841c: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2E841Cu;
    SET_GPR_U32(ctx, 31, 0x2E8424u);
    ctx->pc = 0x2E8420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E841Cu;
    // 0x2e8420: 0x24041050  addiu       $a0, $zero, 0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2E841Cu, 0x2E8424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8424u;
label_2e8424:
    // 0x2e8424: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2e8424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2e8428: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e8428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e842c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x2e842cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8430: 0x11e001b4  beqz        $t7, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2E8430u;
    {
        const bool branch_taken_0x2e8430 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8430u;
        // 0x2e8434: 0x101942  srl         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8430) {
            ctx->pc = 0x2E8B04u;
            goto label_2e8b04;
        }
    }
    ctx->pc = 0x2E8438u;
    // 0x2e8438: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e8438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e843c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e843cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e8440: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x2e8440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8444: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e8444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e8448: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2e8448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2e844c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e8450: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x2e8450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e8454: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x2e8454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
    // 0x2e8458: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x2e8458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x2e845c: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x2e845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x2e8460: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2e8460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8464: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2e8464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2e8468: 0x34a58004  ori         $a1, $a1, 0x8004
    ctx->pc = 0x2e8468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32772);
    // 0x2e846c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2e846cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e8470: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x2e8470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e8474: 0x34089d00  ori         $t0, $zero, 0x9D00
    ctx->pc = 0x2e8474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40192);
    // 0x2e8478: 0x84478  dsll        $t0, $t0, 17
    ctx->pc = 0x2e8478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 17);
    // 0x2e847c: 0x350800f8  ori         $t0, $t0, 0xF8
    ctx->pc = 0x2e847cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)248);
    // 0x2e8480: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x2e8480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e8484: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x2e8484u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x2e8488: 0x240b0047  addiu       $t3, $zero, 0x47
    ctx->pc = 0x2e8488u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2e848c: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x2e848cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8490: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x2e8490u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
    // 0x2e8494: 0x358c0068  ori         $t4, $t4, 0x68
    ctx->pc = 0x2e8494u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)104);
    // 0x2e8498: 0x240d0042  addiu       $t5, $zero, 0x42
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2e849c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2e849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2e84a0: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x2e84a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2e84a4: 0x260f0070  addiu       $t7, $s0, 0x70
    ctx->pc = 0x2e84a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2e84a8: 0xfe050020  sd          $a1, 0x20($s0)
    ctx->pc = 0x2e84a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
    // 0x2e84ac: 0xfe060028  sd          $a2, 0x28($s0)
    ctx->pc = 0x2e84acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 6));
    // 0x2e84b0: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x2e84b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x2e84b4: 0xfe070038  sd          $a3, 0x38($s0)
    ctx->pc = 0x2e84b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 7));
    // 0x2e84b8: 0xfe080040  sd          $t0, 0x40($s0)
    ctx->pc = 0x2e84b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 8));
    // 0x2e84bc: 0xfe090048  sd          $t1, 0x48($s0)
    ctx->pc = 0x2e84bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 9));
    // 0x2e84c0: 0xfe0a0050  sd          $t2, 0x50($s0)
    ctx->pc = 0x2e84c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 10));
    // 0x2e84c4: 0xfe0b0058  sd          $t3, 0x58($s0)
    ctx->pc = 0x2e84c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 11));
    // 0x2e84c8: 0xfe0c0060  sd          $t4, 0x60($s0)
    ctx->pc = 0x2e84c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 12));
    // 0x2e84cc: 0xfe0d0068  sd          $t5, 0x68($s0)
    ctx->pc = 0x2e84ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 13));
    // 0x2e84d0: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x2e84d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x2e84d4: 0x124000a8  beqz        $s2, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2E84D4u;
    {
        const bool branch_taken_0x2e84d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84D4u;
        // 0x2e84d8: 0xfe000010  sd          $zero, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84d4) {
            ctx->pc = 0x2E8778u;
            goto label_2e8778;
        }
    }
    ctx->pc = 0x2E84DCu;
    // 0x2e84dc: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x2e84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x2e84e0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2e84e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2e84e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e84e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e84e8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2e84e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e84ec: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x2e84ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x2e84f0: 0x3484b800  ori         $a0, $a0, 0xB800
    ctx->pc = 0x2e84f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47104);
    // 0x2e84f4: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x2e84f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x2e84f8: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2e84f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2e84fc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2e8500: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e8500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e8504: 0x3c19003c  lui         $t9, 0x3C
    ctx->pc = 0x2e8504u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)60 << 16));
    // 0x2e8508: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e8508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e850c: 0x2473b5c0  addiu       $s3, $v1, -0x4A40
    ctx->pc = 0x2e850cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948288));
    // 0x2e8510: 0x44f025  or          $fp, $v0, $a0
    ctx->pc = 0x2e8510u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e8514: 0x24b1b540  addiu       $s1, $a1, -0x4AC0
    ctx->pc = 0x2e8514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948160));
    // 0x2e8518: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x2e8518u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e851c: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x2e851cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x2e8520: 0x24160870  addiu       $s6, $zero, 0x870
    ctx->pc = 0x2e8520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x2e8524: 0x3c150008  lui         $s5, 0x8
    ctx->pc = 0x2e8524u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8 << 16));
    // 0x2e8528: 0x3c140708  lui         $s4, 0x708
    ctx->pc = 0x2e8528u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1800 << 16));
    // 0x2e852c: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x2e852cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2e8530:
    // 0x2e8530: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2e8530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e8534: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8534u;
    {
        const bool branch_taken_0x2e8534 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2E8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8534u;
        // 0x2e8538: 0x24c9007f  addiu       $t1, $a2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8534) {
            ctx->pc = 0x2E854Cu;
            goto label_2e854c;
        }
    }
    ctx->pc = 0x2E853Cu;
    // 0x2e853c: 0x63823  negu        $a3, $a2
    ctx->pc = 0x2e853cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2e8540: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x2e8540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2e8544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8544u;
    {
        const bool branch_taken_0x2e8544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8544u;
        // 0x2e8548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8544) {
            ctx->pc = 0x2E855Cu;
            goto label_2e855c;
        }
    }
    ctx->pc = 0x2E854Cu;
label_2e854c:
    // 0x2e854c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2e854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2e8550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8554: 0x464023  subu        $t0, $v0, $a2
    ctx->pc = 0x2e8554u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e8558: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x2e8558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2e855c:
    // 0x2e855c: 0xfde00000  sd          $zero, 0x0($t7)
    ctx->pc = 0x2e855cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 0));
    // 0x2e8560: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x2e8560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e8564: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x2e8564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x2e8568: 0x34849110  ori         $a0, $a0, 0x9110
    ctx->pc = 0x2e8568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37136);
    // 0x2e856c: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x2e856cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x2e8570: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8570u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8574: 0x3402e400  ori         $v0, $zero, 0xE400
    ctx->pc = 0x2e8574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x2e8578: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e8578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e857c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e8580: 0xfde40000  sd          $a0, 0x0($t7)
    ctx->pc = 0x2e8580u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 4));
    // 0x2e8584: 0x3403a26a  ori         $v1, $zero, 0xA26A
    ctx->pc = 0x2e8584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41578);
    // 0x2e8588: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2e8588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x2e858c: 0x34639e89  ori         $v1, $v1, 0x9E89
    ctx->pc = 0x2e858cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40585);
    // 0x2e8590: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e8590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e8594: 0x3463e89b  ori         $v1, $v1, 0xE89B
    ctx->pc = 0x2e8594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59547);
    // 0x2e8598: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x2e8598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x2e859c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e859cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e85a0: 0x2404015c  addiu       $a0, $zero, 0x15C
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2e85a4: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x2e85a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85a8: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x2e85a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2e85ac: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2e85acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2e85b0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2e85b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2e85b4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2e85b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2e85b8: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x2e85b8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x2e85bc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2e85bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2e85c0: 0xfdc30008  sd          $v1, 0x8($t6)
    ctx->pc = 0x2e85c0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 3));
    // 0x2e85c4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2e85c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2e85c8: 0xfdc40010  sd          $a0, 0x10($t6)
    ctx->pc = 0x2e85c8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 4));
    // 0x2e85cc: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x2e85ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x2e85d0: 0xfdde0018  sd          $fp, 0x18($t6)
    ctx->pc = 0x2e85d0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 30));
    // 0x2e85d4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2e85d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2e85d8: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x2e85d8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2e85dc: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x2e85dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2e85e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2e85e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e85e4: 0x25290800  addiu       $t1, $t1, 0x800
    ctx->pc = 0x2e85e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2048));
    // 0x2e85e8: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x2e85e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e85ec: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2e85ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2e85f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e85f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e85f4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2e85f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2e85f8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2e85f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2e85fc: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2e85fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2e8600: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8600u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e8604: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2e8604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e8608: 0xf46025  or          $t4, $a3, $s4
    ctx->pc = 0x2e8608u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x2e860c: 0x1145025  or          $t2, $t0, $s4
    ctx->pc = 0x2e860cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 20));
    // 0x2e8610: 0x25ef0080  addiu       $t7, $t7, 0x80
    ctx->pc = 0x2e8610u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 128));
    // 0x2e8614: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x2e8614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x2e8618: 0x1154025  or          $t0, $t0, $s5
    ctx->pc = 0x2e8618u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 21));
    // 0x2e861c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e8620: 0x1e0c02d  daddu       $t8, $t7, $zero
    ctx->pc = 0x2e8620u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8624: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2e8624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2e8628: 0x31238  dsll        $v0, $v1, 8
    ctx->pc = 0x2e8628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 8);
    // 0x2e862c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e8630: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x2e8630u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8634: 0xb5afc  dsll32      $t3, $t3, 11
    ctx->pc = 0x2e8634u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 11));
    // 0x2e8638: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x2e8638u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x2e863c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e863cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e8640: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x2e8640u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x2e8644: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e8644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e8648: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e8648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e864c: 0xfdc30070  sd          $v1, 0x70($t6)
    ctx->pc = 0x2e864cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 112), GPR_U64(ctx, 3));
    // 0x2e8650: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e8654: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x2e8654u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x2e8658: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e8658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2e865c: 0xfdc30040  sd          $v1, 0x40($t6)
    ctx->pc = 0x2e865cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 3));
    // 0x2e8660: 0xfdc30058  sd          $v1, 0x58($t6)
    ctx->pc = 0x2e8660u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 88), GPR_U64(ctx, 3));
    // 0x2e8664: 0x8da2118c  lw          $v0, 0x118C($t5)
    ctx->pc = 0x2e8664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4492)));
    // 0x2e8668: 0x8f241180  lw          $a0, 0x1180($t9)
    ctx->pc = 0x2e8668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e866c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e866cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e8670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8674: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x2e8674u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e8678: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e8678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e867c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8680: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2e8680u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2e8684: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e8684u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e8688: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e868c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2e868cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e8690: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e8690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e8694: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8698: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2e8698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e869c: 0xfdc20030  sd          $v0, 0x30($t6)
    ctx->pc = 0x2e869cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 2));
    // 0x2e86a0: 0x8da3118c  lw          $v1, 0x118C($t5)
    ctx->pc = 0x2e86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4492)));
    // 0x2e86a4: 0x8f241180  lw          $a0, 0x1180($t9)
    ctx->pc = 0x2e86a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e86a8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2e86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e86ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e86acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e86b0: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x2e86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e86b4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e86b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e86b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e86b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e86bc: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x2e86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2e86c0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e86c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e86c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e86c8: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x2e86c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2e86cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e86d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e86d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e86d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e86d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e86d8: 0xfdc30048  sd          $v1, 0x48($t6)
    ctx->pc = 0x2e86d8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 3));
    // 0x2e86dc: 0x8da2118c  lw          $v0, 0x118C($t5)
    ctx->pc = 0x2e86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4492)));
    // 0x2e86e0: 0x8f241180  lw          $a0, 0x1180($t9)
    ctx->pc = 0x2e86e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e86e4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e86e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e86ec: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x2e86ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e86f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e86f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e86f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e86f8: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x2e86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e86fc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e86fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e8700: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8704: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x2e8704u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e8708: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2e8708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e870c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8710: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2e8710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2e8714: 0xfdc20060  sd          $v0, 0x60($t6)
    ctx->pc = 0x2e8714u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 96), GPR_U64(ctx, 2));
    // 0x2e8718: 0x8da3118c  lw          $v1, 0x118C($t5)
    ctx->pc = 0x2e8718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4492)));
    // 0x2e871c: 0x8f221180  lw          $v0, 0x1180($t9)
    ctx->pc = 0x2e871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e8720: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2e8720u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e8724: 0xfdca0068  sd          $t2, 0x68($t6)
    ctx->pc = 0x2e8724u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 104), GPR_U64(ctx, 10));
    // 0x2e8728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e8728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e872c: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2e872cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e8730: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e8730u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e8734: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e8738: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x2e8738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2e873c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e873cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e8740: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e8744: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x2e8744u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2e8748: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2e8748u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2e874c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e874cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e8750: 0xfdc70020  sd          $a3, 0x20($t6)
    ctx->pc = 0x2e8750u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 7));
    // 0x2e8754: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x2e8754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2e8758: 0xfdc80038  sd          $t0, 0x38($t6)
    ctx->pc = 0x2e8758u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 8));
    // 0x2e875c: 0xfdc30078  sd          $v1, 0x78($t6)
    ctx->pc = 0x2e875cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 120), GPR_U64(ctx, 3));
    // 0x2e8760: 0xfdcc0050  sd          $t4, 0x50($t6)
    ctx->pc = 0x2e8760u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 12));
    // 0x2e8764: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x2e8764u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
    // 0x2e8768: 0x641ff71  bgez        $s2, . + 4 + (-0x8F << 2)
    ctx->pc = 0x2E8768u;
    {
        const bool branch_taken_0x2e8768 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2E876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8768u;
        // 0x2e876c: 0xff000008  sd          $zero, 0x8($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8768) {
            ctx->pc = 0x2E8530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8530;
        }
    }
    ctx->pc = 0x2E8770u;
    // 0x2e8770: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2E8770u;
    {
        const bool branch_taken_0x2e8770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8770u;
        // 0x2e8774: 0xfde00000  sd          $zero, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8770) {
            ctx->pc = 0x2E8A2Cu;
            goto label_2e8a2c;
        }
    }
    ctx->pc = 0x2E8778u;
label_2e8778:
    // 0x2e8778: 0x126000ab  beqz        $s3, . + 4 + (0xAB << 2)
    ctx->pc = 0x2E8778u;
    {
        const bool branch_taken_0x2e8778 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8778u;
        // 0x2e877c: 0x3c021c00  lui         $v0, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8778) {
            ctx->pc = 0x2E8A28u;
            goto label_2e8a28;
        }
    }
    ctx->pc = 0x2E8780u;
    // 0x2e8780: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2e8780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8784: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x2e8784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x2e8788: 0x3484b800  ori         $a0, $a0, 0xB800
    ctx->pc = 0x2e8788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47104);
    // 0x2e878c: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x2e878cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x2e8790: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e8790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e8794: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2e8794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2e8798: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2e8798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2e879c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2e879cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2e87a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e87a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e87a4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2e87a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2e87a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e87a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e87ac: 0x2474b5c0  addiu       $s4, $v1, -0x4A40
    ctx->pc = 0x2e87acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948288));
    // 0x2e87b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e87b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e87b4: 0x24b3b540  addiu       $s3, $a1, -0x4AC0
    ctx->pc = 0x2e87b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948160));
    // 0x2e87b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2e87b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2e87bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e87bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87c0: 0x241e0800  addiu       $fp, $zero, 0x800
    ctx->pc = 0x2e87c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e87c4: 0x3c19003c  lui         $t9, 0x3C
    ctx->pc = 0x2e87c4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)60 << 16));
    // 0x2e87c8: 0x2417087f  addiu       $s7, $zero, 0x87F
    ctx->pc = 0x2e87c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2175));
    // 0x2e87cc: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x2e87ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e87d0: 0x241507f8  addiu       $s5, $zero, 0x7F8
    ctx->pc = 0x2e87d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x2e87d4: 0x0  nop
    ctx->pc = 0x2e87d4u;
    // NOP
label_2e87d8:
    // 0x2e87d8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2e87d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e87dc: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E87DCu;
    {
        const bool branch_taken_0x2e87dc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2E87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87DCu;
        // 0x2e87e0: 0x24c70070  addiu       $a3, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87dc) {
            ctx->pc = 0x2E87F4u;
            goto label_2e87f4;
        }
    }
    ctx->pc = 0x2E87E4u;
    // 0x2e87e4: 0x64023  negu        $t0, $a2
    ctx->pc = 0x2e87e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2e87e8: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x2e87e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e87ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E87ECu;
    {
        const bool branch_taken_0x2e87ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87ECu;
        // 0x2e87f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87ec) {
            ctx->pc = 0x2E8804u;
            goto label_2e8804;
        }
    }
    ctx->pc = 0x2E87F4u;
label_2e87f4:
    // 0x2e87f4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2e87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e87f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e87f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87fc: 0x464823  subu        $t1, $v0, $a2
    ctx->pc = 0x2e87fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e8800: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2e8800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2e8804:
    // 0x2e8804: 0xfde00000  sd          $zero, 0x0($t7)
    ctx->pc = 0x2e8804u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 0));
    // 0x2e8808: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x2e8808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e880c: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x2e880cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x2e8810: 0x34849110  ori         $a0, $a0, 0x9110
    ctx->pc = 0x2e8810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37136);
    // 0x2e8814: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x2e8814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x2e8818: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e881c: 0x3403a26a  ori         $v1, $zero, 0xA26A
    ctx->pc = 0x2e881cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41578);
    // 0x2e8820: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2e8820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x2e8824: 0x34639e89  ori         $v1, $v1, 0x9E89
    ctx->pc = 0x2e8824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40585);
    // 0x2e8828: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e8828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e882c: 0x3463e89b  ori         $v1, $v1, 0xE89B
    ctx->pc = 0x2e882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59547);
    // 0x2e8830: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x2e8830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x2e8834: 0xfde40000  sd          $a0, 0x0($t7)
    ctx->pc = 0x2e8834u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 4));
    // 0x2e8838: 0x3402e400  ori         $v0, $zero, 0xE400
    ctx->pc = 0x2e8838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x2e883c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e8840: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e8840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e8844: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8848: 0x2404015c  addiu       $a0, $zero, 0x15C
    ctx->pc = 0x2e8848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2e884c: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x2e884cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8850: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x2e8850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2e8854: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2e8854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2e8858: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2e8858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2e885c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2e885cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2e8860: 0xfdc40010  sd          $a0, 0x10($t6)
    ctx->pc = 0x2e8860u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 4));
    // 0x2e8864: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2e8864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2e8868: 0xfdc30008  sd          $v1, 0x8($t6)
    ctx->pc = 0x2e8868u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 3));
    // 0x2e886c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2e886cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2e8870: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x2e8870u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x2e8874: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x2e8874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x2e8878: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2e8878u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e887c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2e887cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2e8880: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2e8880u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2e8884: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x2e8884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e8888: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x2e8888u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
    // 0x2e888c: 0x24e70800  addiu       $a3, $a3, 0x800
    ctx->pc = 0x2e888cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2048));
    // 0x2e8890: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x2e8890u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2e8894: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2e8894u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2e8898: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2e8898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e889c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2e889cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2e88a0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2e88a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2e88a4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2e88a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2e88a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e88a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e88ac: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2e88acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2e88b0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2e88b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2e88b4: 0x2a86825  or          $t5, $s5, $t0
    ctx->pc = 0x2e88b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 21) | GPR_U64(ctx, 8));
    // 0x2e88b8: 0x2a95025  or          $t2, $s5, $t1
    ctx->pc = 0x2e88b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) | GPR_U64(ctx, 9));
    // 0x2e88bc: 0x25ef0080  addiu       $t7, $t7, 0x80
    ctx->pc = 0x2e88bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 128));
    // 0x2e88c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e88c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e88c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2e88c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e88c8: 0x2c84025  or          $t0, $s6, $t0
    ctx->pc = 0x2e88c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) | GPR_U64(ctx, 8));
    // 0x2e88cc: 0x2c94825  or          $t1, $s6, $t1
    ctx->pc = 0x2e88ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) | GPR_U64(ctx, 9));
    // 0x2e88d0: 0x1e0c02d  daddu       $t8, $t7, $zero
    ctx->pc = 0x2e88d0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88d4: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x2e88d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e88d8: 0xc62fc  dsll32      $t4, $t4, 11
    ctx->pc = 0x2e88d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 11));
    // 0x2e88dc: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x2e88dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x2e88e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e88e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e88e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e88e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e88e8: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x2e88e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x2e88ec: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2e88ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2e88f0: 0x31238  dsll        $v0, $v1, 8
    ctx->pc = 0x2e88f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 8);
    // 0x2e88f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e88f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e88f8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2e88f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2e88fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e8900: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e8900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e8904: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e8904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e8908: 0x2a4b0019  slti        $t3, $s2, 0x19
    ctx->pc = 0x2e8908u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x2e890c: 0xfdc30070  sd          $v1, 0x70($t6)
    ctx->pc = 0x2e890cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 112), GPR_U64(ctx, 3));
    // 0x2e8910: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x2e8910u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x2e8914: 0xfdc30040  sd          $v1, 0x40($t6)
    ctx->pc = 0x2e8914u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 3));
    // 0x2e8918: 0xfdc30058  sd          $v1, 0x58($t6)
    ctx->pc = 0x2e8918u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 88), GPR_U64(ctx, 3));
    // 0x2e891c: 0x8f22118c  lw          $v0, 0x118C($t9)
    ctx->pc = 0x2e891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4492)));
    // 0x2e8920: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2e8920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2e8924: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e8924u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e8928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e892c: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x2e892cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e8930: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e8930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e8934: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e8934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8938: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2e8938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e893c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e893cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e8940: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8944: 0x3c42023  subu        $a0, $fp, $a0
    ctx->pc = 0x2e8944u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2e8948: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e894c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8950: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2e8950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e8954: 0xfdc20030  sd          $v0, 0x30($t6)
    ctx->pc = 0x2e8954u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 2));
    // 0x2e8958: 0x8f24118c  lw          $a0, 0x118C($t9)
    ctx->pc = 0x2e8958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4492)));
    // 0x2e895c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2e895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2e8960: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x2e8960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e8964: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e8964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e8968: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e8968u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e896c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e896cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e8970: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e8970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e8974: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x2e8974u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e8978: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e8978u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e897c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2e897cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e8980: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x2e8980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2e8984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e8988: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2e8988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2e898c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2e898cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e8990: 0xfdc60048  sd          $a2, 0x48($t6)
    ctx->pc = 0x2e8990u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 6));
    // 0x2e8994: 0x8f22118c  lw          $v0, 0x118C($t9)
    ctx->pc = 0x2e8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4492)));
    // 0x2e8998: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2e8998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2e899c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e899cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e89a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e89a4: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x2e89a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e89a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e89a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e89ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e89acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e89b0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2e89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e89b4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2e89b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2e89b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e89bc: 0x3c42023  subu        $a0, $fp, $a0
    ctx->pc = 0x2e89bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2e89c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e89c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e89c8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2e89c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e89cc: 0xfdc20060  sd          $v0, 0x60($t6)
    ctx->pc = 0x2e89ccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 96), GPR_U64(ctx, 2));
    // 0x2e89d0: 0x8f23118c  lw          $v1, 0x118C($t9)
    ctx->pc = 0x2e89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4492)));
    // 0x2e89d4: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2e89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2e89d8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2e89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e89dc: 0xfdca0068  sd          $t2, 0x68($t6)
    ctx->pc = 0x2e89dcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 104), GPR_U64(ctx, 10));
    // 0x2e89e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e89e4: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2e89e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e89e8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e89e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e89ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e89f0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x2e89f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e89f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e89f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e89f8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2e89fc: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2e89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2e8a00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8a04: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2e8a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2e8a08: 0xfdc80020  sd          $t0, 0x20($t6)
    ctx->pc = 0x2e8a08u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 8));
    // 0x2e8a0c: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x2e8a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2e8a10: 0xfdcd0038  sd          $t5, 0x38($t6)
    ctx->pc = 0x2e8a10u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 13));
    // 0x2e8a14: 0xfdc70078  sd          $a3, 0x78($t6)
    ctx->pc = 0x2e8a14u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 120), GPR_U64(ctx, 7));
    // 0x2e8a18: 0xfdc90050  sd          $t1, 0x50($t6)
    ctx->pc = 0x2e8a18u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 9));
    // 0x2e8a1c: 0xff0c0000  sd          $t4, 0x0($t8)
    ctx->pc = 0x2e8a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 12));
    // 0x2e8a20: 0x1560ff6d  bnez        $t3, . + 4 + (-0x93 << 2)
    ctx->pc = 0x2E8A20u;
    {
        const bool branch_taken_0x2e8a20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A20u;
        // 0x2e8a24: 0xff000008  sd          $zero, 0x8($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a20) {
            ctx->pc = 0x2E87D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e87d8;
        }
    }
    ctx->pc = 0x2E8A28u;
label_2e8a28:
    // 0x2e8a28: 0xfde00000  sd          $zero, 0x0($t7)
    ctx->pc = 0x2e8a28u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 0));
label_2e8a2c:
    // 0x2e8a2c: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x2e8a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e8a30: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x2e8a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
    // 0x2e8a34: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e8a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e8a38: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x2e8a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x2e8a3c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8a40: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2e8a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8a44: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2e8a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2e8a48: 0x34638003  ori         $v1, $v1, 0x8003
    ctx->pc = 0x2e8a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32771);
    // 0x2e8a4c: 0xfde20000  sd          $v0, 0x0($t7)
    ctx->pc = 0x2e8a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
    // 0x2e8a50: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e8a54: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8a54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8a58: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e8a5c: 0xfde30000  sd          $v1, 0x0($t7)
    ctx->pc = 0x2e8a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 3));
    // 0x2e8a60: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8a64: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8a64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8a68: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x2e8a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e8a6c: 0xfde50000  sd          $a1, 0x0($t7)
    ctx->pc = 0x2e8a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 5));
    // 0x2e8a70: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x2e8a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e8a74: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8a74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8a78: 0x3c0b3a00  lui         $t3, 0x3A00
    ctx->pc = 0x2e8a78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)14848 << 16));
    // 0x2e8a7c: 0x356b00f8  ori         $t3, $t3, 0xF8
    ctx->pc = 0x2e8a7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)248);
    // 0x2e8a80: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2e8a80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e8a84: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x2e8a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a88: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2e8a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8a8c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8a90: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2e8a90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8a94: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e8a98: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2e8a98u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e8a9c: 0x240c004e  addiu       $t4, $zero, 0x4E
    ctx->pc = 0x2e8a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e8aa0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e8aa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e8aa4: 0x240d003f  addiu       $t5, $zero, 0x3F
    ctx->pc = 0x2e8aa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e8aa8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8aac: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2e8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2e8ab0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2e8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2e8ab4: 0x24644c80  addiu       $a0, $v1, 0x4C80
    ctx->pc = 0x2e8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
    // 0x2e8ab8: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x2e8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x2e8abc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e8abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ac0: 0xfdea0000  sd          $t2, 0x0($t7)
    ctx->pc = 0x2e8ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 10));
    // 0x2e8ac4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e8ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8ac8: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ad0: 0xfdeb0000  sd          $t3, 0x0($t7)
    ctx->pc = 0x2e8ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 11));
    // 0x2e8ad4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8ad4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8ad8: 0xfdec0000  sd          $t4, 0x0($t7)
    ctx->pc = 0x2e8ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 12));
    // 0x2e8adc: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8adcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8ae0: 0xfde00000  sd          $zero, 0x0($t7)
    ctx->pc = 0x2e8ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 0));
    // 0x2e8ae4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8ae4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8ae8: 0xfded0000  sd          $t5, 0x0($t7)
    ctx->pc = 0x2e8ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 13));
    // 0x2e8aec: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x2e8aecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x2e8af0: 0x1f01023  subu        $v0, $t7, $s0
    ctx->pc = 0x2e8af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x2e8af4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2e8af4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2e8af8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e8afc: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2E8AFCu;
    SET_GPR_U32(ctx, 31, 0x2E8B04u);
    ctx->pc = 0x2E8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AFCu;
    // 0x2e8b00: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2E8AFCu, 0x2E8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B04u;
label_2e8b04:
    // 0x2e8b04: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e8b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e8b08: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e8b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e8b0c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e8b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8b10: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e8b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8b14: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e8b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8b18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e8b18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8b1c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2e8b1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8b20: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2e8b20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8b24: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2e8b24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8b2c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2e8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e8b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B30u;
        // 0x2e8b34: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8B38u;
}
