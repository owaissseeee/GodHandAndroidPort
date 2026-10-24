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

// Function: sceSifCallRpc
// Address: 0x3b3128 - 0x3b3328
void sceSifCallRpc_0x3b3128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifCallRpc_0x3b3128");
#endif

    switch (ctx->pc) {
        case 0x3b3180u: goto label_3b3180;
        case 0x3b31ecu: goto label_3b31ec;
        case 0x3b3204u: goto label_3b3204;
        case 0x3b3214u: goto label_3b3214;
        case 0x3b325cu: goto label_3b325c;
        case 0x3b3288u: goto label_3b3288;
        case 0x3b3298u: goto label_3b3298;
        case 0x3b32c4u: goto label_3b32c4;
        case 0x3b32d4u: goto label_3b32d4;
        case 0x3b32dcu: goto label_3b32dc;
        case 0x3b32ecu: goto label_3b32ec;
        case 0x3b32f4u: goto label_3b32f4;
        default: break;
    }

    ctx->pc = 0x3b3128u;

    // 0x3b3128: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b3128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b312c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3b3130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b3130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3134: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x3b3134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x3b3138: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x3b3138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x3b313c: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b313cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b3140: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3b3140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3b3144: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3b3144u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3148: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x3b3148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x3b314c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3b314cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3150: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3b3150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3b3154: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3b3154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3158: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3b3158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3b315c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3b315cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3160: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b3160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3b3164: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x3b3164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3168: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b3168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b316c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3b316cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3170: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3b3170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3b3174: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x3b3174u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3178: 0xc0ecab2  jal         func_3B2AC8
    ctx->pc = 0x3B3178u;
    SET_GPR_U32(ctx, 31, 0x3B3180u);
    ctx->pc = 0x3B317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3178u;
    // 0x3b317c: 0x2484ff40  addiu       $a0, $a0, -0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2AC8u, 0x3B3178u, 0x3B3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3180u;
label_3b3180:
    // 0x3b3180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b3180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3184: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3B3184u;
    {
        const bool branch_taken_0x3b3184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3184u;
        // 0x3b3188: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3184) {
            ctx->pc = 0x3B32F8u;
            goto label_3b32f8;
        }
    }
    ctx->pc = 0x3B318Cu;
    // 0x3b318c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3b318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3b3190: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b3194: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3b3194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x3b3198: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3b3198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3b319c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3b319cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3b31a0: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x3b31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
    // 0x3b31a4: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x3b31a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b31a8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3b31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x3b31ac: 0x33c30002  andi        $v1, $fp, 0x2
    ctx->pc = 0x3b31acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x3b31b0: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x3b31b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x3b31b4: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x3b31b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x3b31b8: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x3b31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x3b31bc: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x3b31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x3b31c0: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x3b31c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x3b31c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3b31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3b31c8: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x3b31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x3b31cc: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B31CCu;
    {
        const bool branch_taken_0x3b31cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31CCu;
        // 0x3b31d0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31cc) {
            ctx->pc = 0x3B3214u;
            goto label_3b3214;
        }
    }
    ctx->pc = 0x3B31D4u;
    // 0x3b31d4: 0x16b40007  bne         $s5, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B31D4u;
    {
        const bool branch_taken_0x3b31d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31D4u;
        // 0x3b31d8: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31d4) {
            ctx->pc = 0x3B31F4u;
            goto label_3b31f4;
        }
    }
    ctx->pc = 0x3B31DCu;
    // 0x3b31dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b31dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b31e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b31e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b31e4: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B31E4u;
    SET_GPR_U32(ctx, 31, 0x3B31ECu);
    ctx->pc = 0x3B31E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31E4u;
    // 0x3b31e8: 0x242280a  movz        $a1, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B31E4u, 0x3B31ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B31ECu;
label_3b31ec:
    // 0x3b31ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B31ECu;
    {
        const bool branch_taken_0x3b31ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31ECu;
        // 0x3b31f0: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31ec) {
            ctx->pc = 0x3B3218u;
            goto label_3b3218;
        }
    }
    ctx->pc = 0x3B31F4u;
label_3b31f4:
    // 0x3b31f4: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B31F4u;
    {
        const bool branch_taken_0x3b31f4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3B31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31F4u;
        // 0x3b31f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31f4) {
            ctx->pc = 0x3B3204u;
            goto label_3b3204;
        }
    }
    ctx->pc = 0x3B31FCu;
    // 0x3b31fc: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B31FCu;
    SET_GPR_U32(ctx, 31, 0x3B3204u);
    ctx->pc = 0x3B3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31FCu;
    // 0x3b3200: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B31FCu, 0x3B3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3204u;
label_3b3204:
    // 0x3b3204: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3204u;
    {
        const bool branch_taken_0x3b3204 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x3B3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3204u;
        // 0x3b3208: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3204) {
            ctx->pc = 0x3B3214u;
            goto label_3b3214;
        }
    }
    ctx->pc = 0x3B320Cu;
    // 0x3b320c: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B320Cu;
    SET_GPR_U32(ctx, 31, 0x3B3214u);
    ctx->pc = 0x3B3210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B320Cu;
    // 0x3b3210: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B320Cu, 0x3B3214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3214u;
label_3b3214:
    // 0x3b3214: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x3b3214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_3b3218:
    // 0x3b3218: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B3218u;
    {
        const bool branch_taken_0x3b3218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3218u;
        // 0x3b321c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3218) {
            ctx->pc = 0x3B326Cu;
            goto label_3b326c;
        }
    }
    ctx->pc = 0x3B3220u;
    // 0x3b3220: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3220u;
    {
        const bool branch_taken_0x3b3220 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3220u;
        // 0x3b3224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3220) {
            ctx->pc = 0x3B3230u;
            goto label_3b3230;
        }
    }
    ctx->pc = 0x3B3228u;
    // 0x3b3228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B3228u;
    {
        const bool branch_taken_0x3b3228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3228u;
        // 0x3b322c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3228) {
            ctx->pc = 0x3B3234u;
            goto label_3b3234;
        }
    }
    ctx->pc = 0x3B3230u;
label_3b3230:
    // 0x3b3230: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3b3230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_3b3234:
    // 0x3b3234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b3238: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b3238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b323c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x3b323cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b3240: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3b3240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3244: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3b3244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3b3248: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3b3248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b324c: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x3b324cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x3b3250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b3250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3254: 0xc0ec9a2  jal         func_3B2688
    ctx->pc = 0x3B3254u;
    SET_GPR_U32(ctx, 31, 0x3B325Cu);
    ctx->pc = 0x3B3258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3254u;
    // 0x3b3258: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B3254u, 0x3B325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B325Cu;
label_3b325c:
    // 0x3b325c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3B325Cu;
    {
        const bool branch_taken_0x3b325c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B325Cu;
        // 0x3b3260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b325c) {
            ctx->pc = 0x3B32F8u;
            goto label_3b32f8;
        }
    }
    ctx->pc = 0x3B3264u;
    // 0x3b3264: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3B3264u;
    {
        const bool branch_taken_0x3b3264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3264) {
            ctx->pc = 0x3B32D4u;
            goto label_3b32d4;
        }
    }
    ctx->pc = 0x3B326Cu;
label_3b326c:
    // 0x3b326c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3b326cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3270: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3b3270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x3b3274: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b3274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b3278: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b3278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b327c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3280: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B3280u;
    SET_GPR_U32(ctx, 31, 0x3B3288u);
    ctx->pc = 0x3B3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3280u;
    // 0x3b3284: 0xafb30004  sw          $s3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B3280u, 0x3B3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3288u;
label_3b3288:
    // 0x3b3288: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3288u;
    {
        const bool branch_taken_0x3b3288 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3288u;
        // 0x3b328c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3288) {
            ctx->pc = 0x3B32A0u;
            goto label_3b32a0;
        }
    }
    ctx->pc = 0x3B3290u;
    // 0x3b3290: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3B3290u;
    SET_GPR_U32(ctx, 31, 0x3B3298u);
    ctx->pc = 0x3B3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3290u;
    // 0x3b3294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B70u, 0x3B3290u, 0x3B3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3298u;
label_3b3298:
    // 0x3b3298: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B3298u;
    {
        const bool branch_taken_0x3b3298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3298u;
        // 0x3b329c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3298) {
            ctx->pc = 0x3B32F8u;
            goto label_3b32f8;
        }
    }
    ctx->pc = 0x3B32A0u;
label_3b32a0:
    // 0x3b32a0: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x3b32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x3b32a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b32a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b32a8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3b32a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b32ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3b32acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b32b0: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x3b32b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b32b4: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x3b32b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x3b32b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b32b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b32bc: 0xc0ec9a2  jal         func_3B2688
    ctx->pc = 0x3B32BCu;
    SET_GPR_U32(ctx, 31, 0x3B32C4u);
    ctx->pc = 0x3B32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32BCu;
    // 0x3b32c0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B32BCu, 0x3B32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32C4u;
label_3b32c4:
    // 0x3b32c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B32C4u;
    {
        const bool branch_taken_0x3b32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b32c4) {
            ctx->pc = 0x3B32E4u;
            goto label_3b32e4;
        }
    }
    ctx->pc = 0x3B32CCu;
    // 0x3b32cc: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B32CCu;
    SET_GPR_U32(ctx, 31, 0x3B32D4u);
    ctx->pc = 0x3B32D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32CCu;
    // 0x3b32d0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B32CCu, 0x3B32D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32D4u;
label_3b32d4:
    // 0x3b32d4: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3B32D4u;
    SET_GPR_U32(ctx, 31, 0x3B32DCu);
    ctx->pc = 0x3B32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32D4u;
    // 0x3b32d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B70u, 0x3B32D4u, 0x3B32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32DCu;
label_3b32dc:
    // 0x3b32dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B32DCu;
    {
        const bool branch_taken_0x3b32dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32DCu;
        // 0x3b32e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b32dc) {
            ctx->pc = 0x3B32F8u;
            goto label_3b32f8;
        }
    }
    ctx->pc = 0x3B32E4u;
label_3b32e4:
    // 0x3b32e4: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B32E4u;
    SET_GPR_U32(ctx, 31, 0x3B32ECu);
    ctx->pc = 0x3B32E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32E4u;
    // 0x3b32e8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B32E4u, 0x3B32ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32ECu;
label_3b32ec:
    // 0x3b32ec: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B32ECu;
    SET_GPR_U32(ctx, 31, 0x3B32F4u);
    ctx->pc = 0x3B32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32ECu;
    // 0x3b32f0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B32ECu, 0x3B32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32F4u;
label_3b32f4:
    // 0x3b32f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b32f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b32f8:
    // 0x3b32f8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3b32f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b32fc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x3b32fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b3300: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x3b3300u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b3304: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x3b3304u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b3308: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x3b3308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b330c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3b330cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b3310: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3b3310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b3314: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b3314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b3318: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b3318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b331c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b331cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3320: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3320u;
        // 0x3b3324: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3328u;
}
