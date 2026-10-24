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

// Function: _decMB0
// Address: 0x39e0f0 - 0x39e648
void _decMB0_0x39e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decMB0_0x39e0f0");
#endif

    switch (ctx->pc) {
        case 0x39e168u: goto label_39e168;
        case 0x39e18cu: goto label_39e18c;
        case 0x39e204u: goto label_39e204;
        case 0x39e24cu: goto label_39e24c;
        case 0x39e308u: goto label_39e308;
        case 0x39e334u: goto label_39e334;
        case 0x39e3a4u: goto label_39e3a4;
        case 0x39e3d0u: goto label_39e3d0;
        case 0x39e430u: goto label_39e430;
        case 0x39e45cu: goto label_39e45c;
        case 0x39e48cu: goto label_39e48c;
        case 0x39e4b4u: goto label_39e4b4;
        case 0x39e4bcu: goto label_39e4bc;
        default: break;
    }

    ctx->pc = 0x39e0f0u;

    // 0x39e0f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x39e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x39e0f4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x39e0f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x39e0f8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x39e0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x39e0fc: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x39e0fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x39e100: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x39e100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x39e104: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x39e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x39e108: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x39e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x39e10c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39e110: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x39e110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x39e114: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39e114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e118: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x39e118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x39e11c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x39e11cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e120: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x39e120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x39e124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e128: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x39e128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x39e12c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x39e12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e130: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x39e130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x39e134: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x39e134u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e138: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x39e138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x39e13c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x39e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x39e140: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x39e140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x39e144: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x39e144u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39e148: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x39e148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x39e14c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39e14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x39e150: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39e150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39e154: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x39e154u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x39e158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e15c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x39e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x39e160: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39E160u;
    SET_GPR_U32(ctx, 31, 0x39E168u);
    ctx->pc = 0x39E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E160u;
    // 0x39e164: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39E160u, 0x39E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E168u;
label_39e168:
    // 0x39e168: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39e168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39e16c: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x39e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x39e170: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39e170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39e174: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x39e174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x39e178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39e178u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39e17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e180: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x39e180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x39e184: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39E184u;
    SET_GPR_U32(ctx, 31, 0x39E18Cu);
    ctx->pc = 0x39E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E184u;
    // 0x39e188: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39E184u, 0x39E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E18Cu;
label_39e18c:
    // 0x39e18c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39e18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e190: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39e190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39e194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39e198: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39e198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39e19c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39e1a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x39e1a4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39e1a4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39e1a8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39e1ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39e1acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39e1b0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E1B0u;
    {
        const bool branch_taken_0x39e1b0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1B0u;
        // 0x39e1b4: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e1b0) {
            ctx->pc = 0x39E1C8u;
            goto label_39e1c8;
        }
    }
    ctx->pc = 0x39E1B8u;
    // 0x39e1b8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x39e1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39e1bc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x39e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x39e1c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39E1C0u;
    {
        const bool branch_taken_0x39e1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1C0u;
        // 0x39e1c4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e1c0) {
            ctx->pc = 0x39E1CCu;
            goto label_39e1cc;
        }
    }
    ctx->pc = 0x39E1C8u;
label_39e1c8:
    // 0x39e1c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_39e1cc:
    // 0x39e1cc: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x39e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x39e1d0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x39e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x39e1d4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x39e1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x39e1d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x39e1d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x39e1dc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x39e1dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39e1e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x39e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x39e1e4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x39e1e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x39e1e8: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x39e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x39e1ec: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39E1ECu;
    {
        const bool branch_taken_0x39e1ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1ECu;
        // 0x39e1f0: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e1ec) {
            ctx->pc = 0x39E214u;
            goto label_39e214;
        }
    }
    ctx->pc = 0x39E1F4u;
    // 0x39e1f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39e1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39e1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e1fc: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39E1FCu;
    SET_GPR_U32(ctx, 31, 0x39E204u);
    ctx->pc = 0x39E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1FCu;
    // 0x39e200: 0x24a5e750  addiu       $a1, $a1, -0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39E1FCu, 0x39E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E204u;
label_39e204:
    // 0x39e204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39e208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e20c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x39E20Cu;
    {
        const bool branch_taken_0x39e20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E20Cu;
        // 0x39e210: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e20c) {
            ctx->pc = 0x39E618u;
            goto label_39e618;
        }
    }
    ctx->pc = 0x39E214u;
label_39e214:
    // 0x39e214: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x39e214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x39e218: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x39E218u;
    {
        const bool branch_taken_0x39e218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E218u;
        // 0x39e21c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e218) {
            ctx->pc = 0x39E254u;
            goto label_39e254;
        }
    }
    ctx->pc = 0x39E220u;
    // 0x39e220: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x39e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39e224: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39E224u;
    {
        const bool branch_taken_0x39e224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e224) {
            ctx->pc = 0x39E228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E224u;
            // 0x39e228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E244u;
            goto label_39e244;
        }
    }
    ctx->pc = 0x39E22Cu;
    // 0x39e22c: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x39e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x39e230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E230u;
    {
        const bool branch_taken_0x39e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E230u;
        // 0x39e234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e230) {
            ctx->pc = 0x39E240u;
            goto label_39e240;
        }
    }
    ctx->pc = 0x39E238u;
    // 0x39e238: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x39E238u;
    {
        const bool branch_taken_0x39e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E238u;
        // 0x39e23c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e238) {
            ctx->pc = 0x39E280u;
            goto label_39e280;
        }
    }
    ctx->pc = 0x39E240u;
label_39e240:
    // 0x39e240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39e244:
    // 0x39e244: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39E244u;
    SET_GPR_U32(ctx, 31, 0x39E24Cu);
    ctx->pc = 0x39E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E244u;
    // 0x39e248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39E244u, 0x39E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E24Cu;
label_39e24c:
    // 0x39e24c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39E24Cu;
    {
        const bool branch_taken_0x39e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E24Cu;
        // 0x39e250: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e24c) {
            ctx->pc = 0x39E280u;
            goto label_39e280;
        }
    }
    ctx->pc = 0x39E254u;
label_39e254:
    // 0x39e254: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39e254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39e258: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x39E258u;
    {
        const bool branch_taken_0x39e258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e258) {
            ctx->pc = 0x39E25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E258u;
            // 0x39e25c: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E284u;
            goto label_39e284;
        }
    }
    ctx->pc = 0x39E260u;
    // 0x39e260: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x39e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x39e264: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E264u;
    {
        const bool branch_taken_0x39e264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E264u;
        // 0x39e268: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e264) {
            ctx->pc = 0x39E280u;
            goto label_39e280;
        }
    }
    ctx->pc = 0x39E26Cu;
    // 0x39e26c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x39e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39e270: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x39e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e274: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x39e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x39e278: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x39e278u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x39e27c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x39e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_39e280:
    // 0x39e280: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x39e280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_39e284:
    // 0x39e284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39e288: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E288u;
    {
        const bool branch_taken_0x39e288 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E288u;
        // 0x39e28c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e288) {
            ctx->pc = 0x39E2ACu;
            goto label_39e2ac;
        }
    }
    ctx->pc = 0x39E290u;
    // 0x39e290: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39e290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e298: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x39e298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x39e29c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x39e29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x39e2a0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x39e2a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x39e2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39E2A4u;
    {
        const bool branch_taken_0x39e2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2A4u;
        // 0x39e2a8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2a4) {
            ctx->pc = 0x39E2C0u;
            goto label_39e2c0;
        }
    }
    ctx->pc = 0x39E2ACu;
label_39e2ac:
    // 0x39e2ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e2b0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39e2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e2b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39e2b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e2b8: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x39e2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x39e2bc: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x39e2bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_39e2c0:
    // 0x39e2c0: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x39e2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x39e2c4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x39e2c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e2c8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E2C8u;
    {
        const bool branch_taken_0x39e2c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2C8u;
        // 0x39e2cc: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2c8) {
            ctx->pc = 0x39E2D8u;
            goto label_39e2d8;
        }
    }
    ctx->pc = 0x39E2D0u;
    // 0x39e2d0: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x39e2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x39e2d4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x39e2d4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_39e2d8:
    // 0x39e2d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39e2dc: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x39E2DCu;
    {
        const bool branch_taken_0x39e2dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2DCu;
        // 0x39e2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2dc) {
            ctx->pc = 0x39E314u;
            goto label_39e314;
        }
    }
    ctx->pc = 0x39E2E4u;
    // 0x39e2e4: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x39e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x39e2e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39E2E8u;
    {
        const bool branch_taken_0x39e2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2E8u;
        // 0x39e2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2e8) {
            ctx->pc = 0x39E314u;
            goto label_39e314;
        }
    }
    ctx->pc = 0x39E2F0u;
    // 0x39e2f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e2f4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x39e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x39e2f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E2F8u;
    {
        const bool branch_taken_0x39e2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2F8u;
        // 0x39e2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2f8) {
            ctx->pc = 0x39E310u;
            goto label_39e310;
        }
    }
    ctx->pc = 0x39E300u;
    // 0x39e300: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39E300u;
    SET_GPR_U32(ctx, 31, 0x39E308u);
    ctx->pc = 0x39E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E300u;
    // 0x39e304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39E300u, 0x39E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E308u;
label_39e308:
    // 0x39e308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39E308u;
    {
        const bool branch_taken_0x39e308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E308u;
        // 0x39e30c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e308) {
            ctx->pc = 0x39E318u;
            goto label_39e318;
        }
    }
    ctx->pc = 0x39E310u;
label_39e310:
    // 0x39e310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39e310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e314:
    // 0x39e314: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x39e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39e318:
    // 0x39e318: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39e318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x39e31c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e320: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39e320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39e324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E324u;
    {
        const bool branch_taken_0x39e324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E324u;
        // 0x39e328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e324) {
            ctx->pc = 0x39E33Cu;
            goto label_39e33c;
        }
    }
    ctx->pc = 0x39E32Cu;
    // 0x39e32c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39E32Cu;
    SET_GPR_U32(ctx, 31, 0x39E334u);
    ctx->pc = 0x39E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E32Cu;
    // 0x39e330: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39E32Cu, 0x39E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E334u;
label_39e334:
    // 0x39e334: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x39e334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x39e338: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39e33c:
    // 0x39e33c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x39e33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x39e340: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E340u;
    {
        const bool branch_taken_0x39e340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e340) {
            ctx->pc = 0x39E344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E340u;
            // 0x39e344: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E364u;
            goto label_39e364;
        }
    }
    ctx->pc = 0x39E348u;
    // 0x39e348: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e34c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x39E34Cu;
    {
        const bool branch_taken_0x39e34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e34c) {
            ctx->pc = 0x39E350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E34Cu;
            // 0x39e350: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E3D4u;
            goto label_39e3d4;
        }
    }
    ctx->pc = 0x39E354u;
    // 0x39e354: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x39e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x39e358: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x39E358u;
    {
        const bool branch_taken_0x39e358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e358) {
            ctx->pc = 0x39E35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E358u;
            // 0x39e35c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E3D4u;
            goto label_39e3d4;
        }
    }
    ctx->pc = 0x39E360u;
    // 0x39e360: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x39e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_39e364:
    // 0x39e364: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x39E364u;
    {
        const bool branch_taken_0x39e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E364u;
        // 0x39e368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e364) {
            ctx->pc = 0x39E3ACu;
            goto label_39e3ac;
        }
    }
    ctx->pc = 0x39E36Cu;
    // 0x39e36c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x39e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x39e370: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x39e370u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x39e374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39e374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e378: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39e37c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x39e37cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x39e380: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x39e380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x39e384: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x39e384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x39e388: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39e38c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x39e38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e390: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x39e390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x39e394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39e394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e398: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x39e398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e39c: 0xc0e77d4  jal         func_39DF50
    ctx->pc = 0x39E39Cu;
    SET_GPR_U32(ctx, 31, 0x39E3A4u);
    ctx->pc = 0x39E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E39Cu;
    // 0x39e3a0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DF50u, 0x39E39Cu, 0x39E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3A4u;
label_39e3a4:
    // 0x39e3a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39E3A4u;
    {
        const bool branch_taken_0x39e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3A4u;
        // 0x39e3a8: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e3a4) {
            ctx->pc = 0x39E3D4u;
            goto label_39e3d4;
        }
    }
    ctx->pc = 0x39E3ACu;
label_39e3ac:
    // 0x39e3ac: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x39e3acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x39e3b0: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x39e3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x39e3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39e3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e3b8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x39e3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x39e3bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x39e3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e3c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39e3c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e3c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x39e3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e3c8: 0xc0e76ca  jal         func_39DB28
    ctx->pc = 0x39E3C8u;
    SET_GPR_U32(ctx, 31, 0x39E3D0u);
    ctx->pc = 0x39E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3C8u;
    // 0x39e3cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DB28u, 0x39E3C8u, 0x39E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3D0u;
label_39e3d0:
    // 0x39e3d0: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x39e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_39e3d4:
    // 0x39e3d4: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x39E3D4u;
    {
        const bool branch_taken_0x39e3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3D4u;
        // 0x39e3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e3d4) {
            ctx->pc = 0x39E618u;
            goto label_39e618;
        }
    }
    ctx->pc = 0x39E3DCu;
    // 0x39e3dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e3e0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x39e3e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x39E3E4u;
    {
        const bool branch_taken_0x39e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e3e4) {
            ctx->pc = 0x39E460u;
            goto label_39e460;
        }
    }
    ctx->pc = 0x39E3ECu;
    // 0x39e3ec: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x39e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x39e3f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x39E3F0u;
    {
        const bool branch_taken_0x39e3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3F0u;
        // 0x39e3f4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e3f0) {
            ctx->pc = 0x39E438u;
            goto label_39e438;
        }
    }
    ctx->pc = 0x39E3F8u;
    // 0x39e3f8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x39e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x39e3fc: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x39e3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x39e400: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x39e400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39e408: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x39e408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x39e40c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x39e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x39e410: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x39e410u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e414: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39e414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39e418: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x39e418u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x39e41c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x39e420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39e424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e428: 0xc0e77d4  jal         func_39DF50
    ctx->pc = 0x39E428u;
    SET_GPR_U32(ctx, 31, 0x39E430u);
    ctx->pc = 0x39E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E428u;
    // 0x39e42c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DF50u, 0x39E428u, 0x39E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E430u;
label_39e430:
    // 0x39e430: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39E430u;
    {
        const bool branch_taken_0x39e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E430u;
        // 0x39e434: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e430) {
            ctx->pc = 0x39E460u;
            goto label_39e460;
        }
    }
    ctx->pc = 0x39E438u;
label_39e438:
    // 0x39e438: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x39e438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x39e43c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x39e43cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x39e440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e444: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x39e444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x39e448: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x39e448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x39e44c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39e44cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e450: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x39e450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e454: 0xc0e76ca  jal         func_39DB28
    ctx->pc = 0x39E454u;
    SET_GPR_U32(ctx, 31, 0x39E45Cu);
    ctx->pc = 0x39E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E454u;
    // 0x39e458: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DB28u, 0x39E454u, 0x39E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E45Cu;
label_39e45c:
    // 0x39e45c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x39e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_39e460:
    // 0x39e460: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x39E460u;
    {
        const bool branch_taken_0x39e460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E460u;
        // 0x39e464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e460) {
            ctx->pc = 0x39E618u;
            goto label_39e618;
        }
    }
    ctx->pc = 0x39E468u;
    // 0x39e468: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e46c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e470: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E470u;
    {
        const bool branch_taken_0x39e470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E470u;
        // 0x39e474: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e470) {
            ctx->pc = 0x39E494u;
            goto label_39e494;
        }
    }
    ctx->pc = 0x39E478u;
    // 0x39e478: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x39e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x39e47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E47Cu;
    {
        const bool branch_taken_0x39e47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E47Cu;
        // 0x39e480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e47c) {
            ctx->pc = 0x39E490u;
            goto label_39e490;
        }
    }
    ctx->pc = 0x39E484u;
    // 0x39e484: 0xc0e7b3c  jal         func_39ECF0
    ctx->pc = 0x39E484u;
    SET_GPR_U32(ctx, 31, 0x39E48Cu);
    ctx->pc = 0x39E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E484u;
    // 0x39e488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECF0u, 0x39E484u, 0x39E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E48Cu;
label_39e48c:
    // 0x39e48c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39e490:
    // 0x39e490: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x39e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_39e494:
    // 0x39e494: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x39E494u;
    {
        const bool branch_taken_0x39e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E494u;
        // 0x39e498: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e494) {
            ctx->pc = 0x39E538u;
            goto label_39e538;
        }
    }
    ctx->pc = 0x39E49Cu;
    // 0x39e49c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x39e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39e4a0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x39e4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x39e4a4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x39e4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39e4a8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x39e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x39e4ac: 0xc0e7f76  jal         func_39FDD8
    ctx->pc = 0x39E4ACu;
    SET_GPR_U32(ctx, 31, 0x39E4B4u);
    ctx->pc = 0x39E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E4ACu;
    // 0x39e4b0: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FDD8u, 0x39E4ACu, 0x39E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4B4u;
label_39e4b4:
    // 0x39e4b4: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39E4B4u;
    SET_GPR_U32(ctx, 31, 0x39E4BCu);
    ctx->pc = 0x39E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E4B4u;
    // 0x39e4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39E4B4u, 0x39E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4BCu;
label_39e4bc:
    // 0x39e4bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x39e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e4c0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x39e4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x39e4c4: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x39e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x39e4c8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x39e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x39e4cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39e4d0: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x39e4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x39e4d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e4d8: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x39e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x39e4dc: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x39e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x39e4e0: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x39e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x39e4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39e4e8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x39e4e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x39e4ec: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x39e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x39e4f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x39e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x39e4f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x39e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x39e4f8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x39e4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x39e4fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x39e4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39e500: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x39e500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x39e504: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x39e504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x39e508: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x39e508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39e50c: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E50Cu;
    {
        const bool branch_taken_0x39e50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x39E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E50Cu;
        // 0x39e510: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e50c) {
            ctx->pc = 0x39E528u;
            goto label_39e528;
        }
    }
    ctx->pc = 0x39E514u;
    // 0x39e514: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x39e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x39e518: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E518u;
    {
        const bool branch_taken_0x39e518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E518u;
        // 0x39e51c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e518) {
            ctx->pc = 0x39E528u;
            goto label_39e528;
        }
    }
    ctx->pc = 0x39E520u;
    // 0x39e520: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E520u;
    {
        const bool branch_taken_0x39e520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E520u;
        // 0x39e524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e520) {
            ctx->pc = 0x39E530u;
            goto label_39e530;
        }
    }
    ctx->pc = 0x39E528u;
label_39e528:
    // 0x39e528: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39E528u;
    {
        const bool branch_taken_0x39e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E528u;
        // 0x39e52c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e528) {
            ctx->pc = 0x39E54Cu;
            goto label_39e54c;
        }
    }
    ctx->pc = 0x39E530u;
label_39e530:
    // 0x39e530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39E530u;
    {
        const bool branch_taken_0x39e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E530u;
        // 0x39e534: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e530) {
            ctx->pc = 0x39E54Cu;
            goto label_39e54c;
        }
    }
    ctx->pc = 0x39E538u;
label_39e538:
    // 0x39e538: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x39e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39e53c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e540: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x39e540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39e544: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x39e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x39e548: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x39e548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_39e54c:
    // 0x39e54c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x39e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x39e550: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E550u;
    {
        const bool branch_taken_0x39e550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E550u;
        // 0x39e554: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e550) {
            ctx->pc = 0x39E560u;
            goto label_39e560;
        }
    }
    ctx->pc = 0x39E558u;
    // 0x39e558: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x39E558u;
    {
        const bool branch_taken_0x39e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E558u;
        // 0x39e55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e558) {
            ctx->pc = 0x39E618u;
            goto label_39e618;
        }
    }
    ctx->pc = 0x39E560u;
label_39e560:
    // 0x39e560: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39e568: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E568u;
    {
        const bool branch_taken_0x39e568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e568) {
            ctx->pc = 0x39E56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E568u;
            // 0x39e56c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E58Cu;
            goto label_39e58c;
        }
    }
    ctx->pc = 0x39E570u;
    // 0x39e570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e574: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x39e574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x39e578: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e57c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39e580: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x39E580u;
    {
        const bool branch_taken_0x39e580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e580) {
            ctx->pc = 0x39E584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E580u;
            // 0x39e584: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E5B8u;
            goto label_39e5b8;
        }
    }
    ctx->pc = 0x39E588u;
    // 0x39e588: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x39e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_39e58c:
    // 0x39e58c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x39E58Cu;
    {
        const bool branch_taken_0x39e58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e58c) {
            ctx->pc = 0x39E590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E58Cu;
            // 0x39e590: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E5B8u;
            goto label_39e5b8;
        }
    }
    ctx->pc = 0x39E594u;
    // 0x39e594: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x39e594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x39e598: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x39e598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x39e59c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x39e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x39e5a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x39e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x39e5a4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x39e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x39e5a8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x39e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x39e5ac: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x39e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x39e5b0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x39e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x39e5b4: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x39e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_39e5b8:
    // 0x39e5b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e5bc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x39E5BCu;
    {
        const bool branch_taken_0x39e5bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5BCu;
        // 0x39e5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5bc) {
            ctx->pc = 0x39E618u;
            goto label_39e618;
        }
    }
    ctx->pc = 0x39E5C4u;
    // 0x39e5c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39e5c8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x39e5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x39e5cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39E5CCu;
    {
        const bool branch_taken_0x39e5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5CCu;
        // 0x39e5d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5cc) {
            ctx->pc = 0x39E618u;
            goto label_39e618;
        }
    }
    ctx->pc = 0x39E5D4u;
    // 0x39e5d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x39e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x39e5d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39e5dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x39e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x39e5e0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x39e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x39e5e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x39e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x39e5e8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x39e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39e5ec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E5ECu;
    {
        const bool branch_taken_0x39e5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5ECu;
        // 0x39e5f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5ec) {
            ctx->pc = 0x39E5FCu;
            goto label_39e5fc;
        }
    }
    ctx->pc = 0x39E5F4u;
    // 0x39e5f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39E5F4u;
    {
        const bool branch_taken_0x39e5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5F4u;
        // 0x39e5f8: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5f4) {
            ctx->pc = 0x39E614u;
            goto label_39e614;
        }
    }
    ctx->pc = 0x39E5FCu;
label_39e5fc:
    // 0x39e5fc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x39e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x39e600: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x39e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x39e604: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x39e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39e608: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x39e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x39e60c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39e60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39e610: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39e610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_39e614:
    // 0x39e614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e618:
    // 0x39e618: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x39e618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x39e61c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x39e61cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39e620: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x39e620u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39e624: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x39e624u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39e628: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x39e628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39e62c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x39e62cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39e630: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x39e630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39e634: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x39e634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39e638: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x39e638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39e63c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x39e63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e640: 0x3e00008  jr          $ra
    ctx->pc = 0x39E640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E640u;
        // 0x39e644: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E648u;
}
