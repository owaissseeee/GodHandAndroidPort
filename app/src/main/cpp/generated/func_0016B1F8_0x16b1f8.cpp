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

// Function: func_0016B1F8
// Address: 0x16b1f8 - 0x16bc78
void func_0016B1F8_0x16b1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016B1F8_0x16b1f8");
#endif

    switch (ctx->pc) {
        case 0x16b2a8u: goto label_16b2a8;
        case 0x16b32cu: goto label_16b32c;
        case 0x16b3c4u: goto label_16b3c4;
        case 0x16b47cu: goto label_16b47c;
        case 0x16b53cu: goto label_16b53c;
        case 0x16b574u: goto label_16b574;
        case 0x16b5ccu: goto label_16b5cc;
        case 0x16b618u: goto label_16b618;
        case 0x16b658u: goto label_16b658;
        case 0x16b6c0u: goto label_16b6c0;
        case 0x16b728u: goto label_16b728;
        case 0x16b734u: goto label_16b734;
        case 0x16b73cu: goto label_16b73c;
        case 0x16b758u: goto label_16b758;
        case 0x16b7a0u: goto label_16b7a0;
        case 0x16b7e0u: goto label_16b7e0;
        case 0x16b854u: goto label_16b854;
        case 0x16b88cu: goto label_16b88c;
        case 0x16b898u: goto label_16b898;
        case 0x16b8a0u: goto label_16b8a0;
        case 0x16b8a8u: goto label_16b8a8;
        case 0x16b8b4u: goto label_16b8b4;
        case 0x16b8e8u: goto label_16b8e8;
        case 0x16b91cu: goto label_16b91c;
        case 0x16b954u: goto label_16b954;
        case 0x16b968u: goto label_16b968;
        case 0x16b9acu: goto label_16b9ac;
        case 0x16b9c0u: goto label_16b9c0;
        case 0x16b9d8u: goto label_16b9d8;
        case 0x16ba14u: goto label_16ba14;
        case 0x16ba3cu: goto label_16ba3c;
        case 0x16ba48u: goto label_16ba48;
        case 0x16ba50u: goto label_16ba50;
        case 0x16badcu: goto label_16badc;
        case 0x16bb30u: goto label_16bb30;
        case 0x16bb7cu: goto label_16bb7c;
        case 0x16bbbcu: goto label_16bbbc;
        case 0x16bc28u: goto label_16bc28;
        default: break;
    }

    ctx->pc = 0x16b1f8u;

    // 0x16b1f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16b1fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x16b200: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16b200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x16b204: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16b208: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x16b208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b20c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16b20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x16b210: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16b210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b214: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16b214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16b218: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x16b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x16b21c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x16b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x16b220: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x16b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x16b224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b228: 0x8283005b  lb          $v1, 0x5B($s4)
    ctx->pc = 0x16b228u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
    // 0x16b22c: 0x107200d4  beq         $v1, $s2, . + 4 + (0xD4 << 2)
    ctx->pc = 0x16B22Cu;
    {
        const bool branch_taken_0x16b22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x16B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B22Cu;
        // 0x16b230: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b22c) {
            ctx->pc = 0x16B580u;
            goto label_16b580;
        }
    }
    ctx->pc = 0x16B234u;
    // 0x16b234: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x16b234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16b238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B238u;
    {
        const bool branch_taken_0x16b238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B238u;
        // 0x16b23c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b238) {
            ctx->pc = 0x16B250u;
            goto label_16b250;
        }
    }
    ctx->pc = 0x16B240u;
    // 0x16b240: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B240u;
    {
        const bool branch_taken_0x16b240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B240u;
        // 0x16b244: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b240) {
            ctx->pc = 0x16B264u;
            goto label_16b264;
        }
    }
    ctx->pc = 0x16B248u;
    // 0x16b248: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x16B248u;
    {
        const bool branch_taken_0x16b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B248u;
        // 0x16b24c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b248) {
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16B250u;
label_16b250:
    // 0x16b250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b254: 0x10620224  beq         $v1, $v0, . + 4 + (0x224 << 2)
    ctx->pc = 0x16B254u;
    {
        const bool branch_taken_0x16b254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B254u;
        // 0x16b258: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b254) {
            ctx->pc = 0x16BAE8u;
            goto label_16bae8;
        }
    }
    ctx->pc = 0x16B25Cu;
    // 0x16b25c: 0x1000027d  b           . + 4 + (0x27D << 2)
    ctx->pc = 0x16B25Cu;
    {
        const bool branch_taken_0x16b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B25Cu;
        // 0x16b260: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b25c) {
            ctx->pc = 0x16BC54u;
            goto label_16bc54;
        }
    }
    ctx->pc = 0x16B264u;
label_16b264:
    // 0x16b264: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16b264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b268: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x16b268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x16b26c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16b270: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x16b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x16b274: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x16b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x16b278: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x16b278u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x16b27c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16b27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16b280: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16B280u;
    {
        const bool branch_taken_0x16b280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B280u;
        // 0x16b284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b280) {
            ctx->pc = 0x16B2F4u;
            goto label_16b2f4;
        }
    }
    ctx->pc = 0x16B288u;
    // 0x16b288: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b28c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b290: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16b290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16b294: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b298: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b29c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b29cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2a0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B2A0u;
    SET_GPR_U32(ctx, 31, 0x16B2A8u);
    ctx->pc = 0x16B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2A0u;
    // 0x16b2a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B2A0u, 0x16B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2A8u;
label_16b2a8:
    // 0x16b2a8: 0x968301d2  lhu         $v1, 0x1D2($s4)
    ctx->pc = 0x16b2a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b2ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16b2b0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x16b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b2b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16b2b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16b2b8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x16b2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16b2bc: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x16B2BCu;
    {
        const bool branch_taken_0x16b2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2BCu;
        // 0x16b2c0: 0xa68301d2  sh          $v1, 0x1D2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2bc) {
            ctx->pc = 0x16B424u;
            goto label_16b424;
        }
    }
    ctx->pc = 0x16B2C4u;
    // 0x16b2c4: 0x968201d0  lhu         $v0, 0x1D0($s4)
    ctx->pc = 0x16b2c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16b2c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b2cc: 0xa68301d2  sh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b2d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b2d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x16b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16b2d8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x16b2d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x16b2dc: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x16b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x16b2e0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x16b2e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16b2e4: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x16B2E4u;
    {
        const bool branch_taken_0x16b2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2E4u;
        // 0x16b2e8: 0xa68201d0  sh          $v0, 0x1D0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2e4) {
            ctx->pc = 0x16B424u;
            goto label_16b424;
        }
    }
    ctx->pc = 0x16B2ECu;
    // 0x16b2ec: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x16B2ECu;
    {
        const bool branch_taken_0x16b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2ECu;
        // 0x16b2f0: 0xa68001d2  sh          $zero, 0x1D2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2ec) {
            ctx->pc = 0x16B420u;
            goto label_16b420;
        }
    }
    ctx->pc = 0x16B2F4u;
label_16b2f4:
    // 0x16b2f4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b2f8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x16b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x16b2fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16b2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16b300: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x16b300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x16b304: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16b308: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16B308u;
    {
        const bool branch_taken_0x16b308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B308u;
        // 0x16b30c: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b308) {
            ctx->pc = 0x16B388u;
            goto label_16b388;
        }
    }
    ctx->pc = 0x16B310u;
    // 0x16b310: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b314: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b318: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b31c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b324: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B324u;
    SET_GPR_U32(ctx, 31, 0x16B32Cu);
    ctx->pc = 0x16B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B324u;
    // 0x16b328: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B324u, 0x16B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B32Cu;
label_16b32c:
    // 0x16b32c: 0x968301d2  lhu         $v1, 0x1D2($s4)
    ctx->pc = 0x16b32cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16b334: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x16b334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b338: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16B338u;
    {
        const bool branch_taken_0x16b338 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x16B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B338u;
        // 0x16b33c: 0xa68301d2  sh          $v1, 0x1D2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b338) {
            ctx->pc = 0x16B368u;
            goto label_16b368;
        }
    }
    ctx->pc = 0x16B340u;
    // 0x16b340: 0x968201d0  lhu         $v0, 0x1D0($s4)
    ctx->pc = 0x16b340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16b344: 0xa68001d2  sh          $zero, 0x1D2($s4)
    ctx->pc = 0x16b344u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 0));
    // 0x16b348: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16b34c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x16b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16b350: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B350u;
    {
        const bool branch_taken_0x16b350 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x16B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B350u;
        // 0x16b354: 0xa68201d0  sh          $v0, 0x1D0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b350) {
            ctx->pc = 0x16B368u;
            goto label_16b368;
        }
    }
    ctx->pc = 0x16B358u;
    // 0x16b358: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b35c: 0x2603fffa  addiu       $v1, $s0, -0x6
    ctx->pc = 0x16b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x16b360: 0xa68201d2  sh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b360u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b364: 0xa68301d0  sh          $v1, 0x1D0($s4)
    ctx->pc = 0x16b364u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 3));
label_16b368:
    // 0x16b368: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b36c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x16b36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16b370: 0x54400237  bnel        $v0, $zero, . + 4 + (0x237 << 2)
    ctx->pc = 0x16B370u;
    {
        const bool branch_taken_0x16b370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b370) {
            ctx->pc = 0x16B374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B370u;
            // 0x16b374: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16B378u;
    // 0x16b378: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x16B378u;
    {
        const bool branch_taken_0x16b378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B378u;
        // 0x16b37c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b378) {
            ctx->pc = 0x16B4CCu;
            goto label_16b4cc;
        }
    }
    ctx->pc = 0x16B380u;
    // 0x16b380: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x16B380u;
    {
        const bool branch_taken_0x16b380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B380u;
        // 0x16b384: 0xa68201d2  sh          $v0, 0x1D2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b380) {
            ctx->pc = 0x16B4D8u;
            goto label_16b4d8;
        }
    }
    ctx->pc = 0x16B388u;
label_16b388:
    // 0x16b388: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b38c: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x16b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x16b390: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16b390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16b394: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x16b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x16b398: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16b39c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x16B39Cu;
    {
        const bool branch_taken_0x16b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B39Cu;
        // 0x16b3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b39c) {
            ctx->pc = 0x16B440u;
            goto label_16b440;
        }
    }
    ctx->pc = 0x16B3A4u;
    // 0x16b3a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b3a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b3ac: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16b3b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b3b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b3b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3bc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B3BCu;
    SET_GPR_U32(ctx, 31, 0x16B3C4u);
    ctx->pc = 0x16B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3BCu;
    // 0x16b3c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B3BCu, 0x16B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3C4u;
label_16b3c4:
    // 0x16b3c4: 0x968301d0  lhu         $v1, 0x1D0($s4)
    ctx->pc = 0x16b3c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16b3c8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x16b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x16b3cc: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x16b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b3d0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b3d4: 0x24820006  addiu       $v0, $a0, 0x6
    ctx->pc = 0x16b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x16b3d8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x16b3d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b3dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B3DCu;
    {
        const bool branch_taken_0x16b3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3DCu;
        // 0x16b3e0: 0xa68301d0  sh          $v1, 0x1D0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3dc) {
            ctx->pc = 0x16B424u;
            goto label_16b424;
        }
    }
    ctx->pc = 0x16B3E4u;
    // 0x16b3e4: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b3e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b3ec: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B3ECu;
    {
        const bool branch_taken_0x16b3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3ECu;
        // 0x16b3f0: 0x2602fffa  addiu       $v0, $s0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3ec) {
            ctx->pc = 0x16B408u;
            goto label_16b408;
        }
    }
    ctx->pc = 0x16B3F4u;
    // 0x16b3f4: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B3F4u;
    {
        const bool branch_taken_0x16b3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b3f4) {
            ctx->pc = 0x16B3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B3F4u;
            // 0x16b3f8: 0x868201d0  lh          $v0, 0x1D0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B40Cu;
            goto label_16b40c;
        }
    }
    ctx->pc = 0x16B3FCu;
    // 0x16b3fc: 0xa68301d2  sh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B400u;
    {
        const bool branch_taken_0x16b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B400u;
        // 0x16b404: 0xa68201d0  sh          $v0, 0x1D0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b400) {
            ctx->pc = 0x16B424u;
            goto label_16b424;
        }
    }
    ctx->pc = 0x16B408u;
label_16b408:
    // 0x16b408: 0x868201d0  lh          $v0, 0x1D0($s4)
    ctx->pc = 0x16b408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
label_16b40c:
    // 0x16b40c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x16b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x16b410: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x16b410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b414: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B414u;
    {
        const bool branch_taken_0x16b414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b414) {
            ctx->pc = 0x16B418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B414u;
            // 0x16b418: 0x868201d2  lh          $v0, 0x1D2($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B428u;
            goto label_16b428;
        }
    }
    ctx->pc = 0x16B41Cu;
    // 0x16b41c: 0xa68001d2  sh          $zero, 0x1D2($s4)
    ctx->pc = 0x16b41cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 0));
label_16b420:
    // 0x16b420: 0xa68001d0  sh          $zero, 0x1D0($s4)
    ctx->pc = 0x16b420u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 0));
label_16b424:
    // 0x16b424: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
label_16b428:
    // 0x16b428: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x16b428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16b42c: 0x14400208  bnez        $v0, . + 4 + (0x208 << 2)
    ctx->pc = 0x16B42Cu;
    {
        const bool branch_taken_0x16b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B42Cu;
        // 0x16b430: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b42c) {
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16B434u;
    // 0x16b434: 0xa68001d0  sh          $zero, 0x1D0($s4)
    ctx->pc = 0x16b434u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 0));
    // 0x16b438: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x16B438u;
    {
        const bool branch_taken_0x16b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B438u;
        // 0x16b43c: 0xa68001d2  sh          $zero, 0x1D2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b438) {
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16B440u;
label_16b440:
    // 0x16b440: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16b440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b444: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x16b444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x16b448: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16b448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16b44c: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x16b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x16b450: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16b454: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x16B454u;
    {
        const bool branch_taken_0x16b454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B454u;
        // 0x16b458: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b454) {
            ctx->pc = 0x16B4E0u;
            goto label_16b4e0;
        }
    }
    ctx->pc = 0x16B45Cu;
    // 0x16b45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b460: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b464: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16b464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16b468: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b46c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b470: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b474: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B474u;
    SET_GPR_U32(ctx, 31, 0x16B47Cu);
    ctx->pc = 0x16B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B474u;
    // 0x16b478: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B474u, 0x16B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B47Cu;
label_16b47c:
    // 0x16b47c: 0x968301d0  lhu         $v1, 0x1D0($s4)
    ctx->pc = 0x16b47cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16b480: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x16b480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x16b484: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x16b484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b488: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16B488u;
    {
        const bool branch_taken_0x16b488 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x16B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B488u;
        // 0x16b48c: 0xa68301d0  sh          $v1, 0x1D0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b488) {
            ctx->pc = 0x16B4B4u;
            goto label_16b4b4;
        }
    }
    ctx->pc = 0x16B490u;
    // 0x16b490: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B494u;
    {
        const bool branch_taken_0x16b494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B494u;
        // 0x16b498: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b494) {
            ctx->pc = 0x16B4A8u;
            goto label_16b4a8;
        }
    }
    ctx->pc = 0x16B49Cu;
    // 0x16b49c: 0xa68001d2  sh          $zero, 0x1D2($s4)
    ctx->pc = 0x16b49cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 0));
    // 0x16b4a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B4A0u;
    {
        const bool branch_taken_0x16b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4A0u;
        // 0x16b4a4: 0xa68001d0  sh          $zero, 0x1D0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4a0) {
            ctx->pc = 0x16B4B4u;
            goto label_16b4b4;
        }
    }
    ctx->pc = 0x16B4A8u;
label_16b4a8:
    // 0x16b4a8: 0x2603fffa  addiu       $v1, $s0, -0x6
    ctx->pc = 0x16b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x16b4ac: 0xa68201d2  sh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b4acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b4b0: 0xa68301d0  sh          $v1, 0x1D0($s4)
    ctx->pc = 0x16b4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 3));
label_16b4b4:
    // 0x16b4b4: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b4b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b4b8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x16b4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16b4bc: 0x544001e4  bnel        $v0, $zero, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x16B4BCu;
    {
        const bool branch_taken_0x16b4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b4bc) {
            ctx->pc = 0x16B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B4BCu;
            // 0x16b4c0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16B4C4u;
    // 0x16b4c4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4C4u;
    {
        const bool branch_taken_0x16b4c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C4u;
        // 0x16b4c8: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c4) {
            ctx->pc = 0x16B4D4u;
            goto label_16b4d4;
        }
    }
    ctx->pc = 0x16B4CCu;
label_16b4cc:
    // 0x16b4cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B4CCu;
    {
        const bool branch_taken_0x16b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4CCu;
        // 0x16b4d0: 0xa68001d2  sh          $zero, 0x1D2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4cc) {
            ctx->pc = 0x16B4D8u;
            goto label_16b4d8;
        }
    }
    ctx->pc = 0x16B4D4u;
label_16b4d4:
    // 0x16b4d4: 0xa68201d2  sh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 2));
label_16b4d8:
    // 0x16b4d8: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x16B4D8u;
    {
        const bool branch_taken_0x16b4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4D8u;
        // 0x16b4dc: 0xa68001d0  sh          $zero, 0x1D0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4d8) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16B4E0u;
label_16b4e0:
    // 0x16b4e0: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x16b4e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x16b4e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x16b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16b4e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16b4ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B4ECu;
    {
        const bool branch_taken_0x16b4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4ECu;
        // 0x16b4f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4ec) {
            ctx->pc = 0x16B544u;
            goto label_16b544;
        }
    }
    ctx->pc = 0x16B4F4u;
    // 0x16b4f4: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b4f8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x16b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x16b4fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16b500: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x16b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16b504: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x16b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x16b508: 0x9064008b  lbu         $a0, 0x8B($v1)
    ctx->pc = 0x16b508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 139)));
    // 0x16b50c: 0x148501d0  bne         $a0, $a1, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x16B50Cu;
    {
        const bool branch_taken_0x16b50c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x16B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B50Cu;
        // 0x16b510: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b50c) {
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16B514u;
    // 0x16b514: 0xa292005b  sb          $s2, 0x5B($s4)
    ctx->pc = 0x16b514u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 18));
    // 0x16b518: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b51c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b524: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16b524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16b528: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b52c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b52cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b534: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B534u;
    SET_GPR_U32(ctx, 31, 0x16B53Cu);
    ctx->pc = 0x16B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B534u;
    // 0x16b538: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B534u, 0x16B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B53Cu;
label_16b53c:
    // 0x16b53c: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x16B53Cu;
    {
        const bool branch_taken_0x16b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B53Cu;
        // 0x16b540: 0xa28001d4  sb          $zero, 0x1D4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 468), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b53c) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16B544u;
label_16b544:
    // 0x16b544: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16b544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x16b548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16b548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16b54c: 0x104001bf  beqz        $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x16B54Cu;
    {
        const bool branch_taken_0x16b54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B54Cu;
        // 0x16b550: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b54c) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16B554u;
    // 0x16b554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b558: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b55c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16b560: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b564: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b568: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b56c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B56Cu;
    SET_GPR_U32(ctx, 31, 0x16B574u);
    ctx->pc = 0x16B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B56Cu;
    // 0x16b570: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B56Cu, 0x16B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B574u;
label_16b574:
    // 0x16b574: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16b574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b578: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x16B578u;
    {
        const bool branch_taken_0x16b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B578u;
        // 0x16b57c: 0xa283005b  sb          $v1, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b578) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16B580u;
label_16b580:
    // 0x16b580: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x16b584: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16b584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b588: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x16b588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x16b58c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x16b58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16b590: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x16b590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x16b594: 0x245074a0  addiu       $s0, $v0, 0x74A0
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x16b598: 0xde0301b0  ld          $v1, 0x1B0($s0)
    ctx->pc = 0x16b598u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x16b59c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16b59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16b5a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16B5A0u;
    {
        const bool branch_taken_0x16b5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5A0u;
        // 0x16b5a4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5a0) {
            ctx->pc = 0x16B5D8u;
            goto label_16b5d8;
        }
    }
    ctx->pc = 0x16B5A8u;
    // 0x16b5a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b5ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5b0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b5b4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16b5b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b5bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b5c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b5c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5c4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B5C4u;
    SET_GPR_U32(ctx, 31, 0x16B5CCu);
    ctx->pc = 0x16B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5C4u;
    // 0x16b5c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B5C4u, 0x16B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5CCu;
label_16b5cc:
    // 0x16b5cc: 0x928301d4  lbu         $v1, 0x1D4($s4)
    ctx->pc = 0x16b5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16b5d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x16b5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16b5d4: 0xa28301d4  sb          $v1, 0x1D4($s4)
    ctx->pc = 0x16b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 468), (uint8_t)GPR_U32(ctx, 3));
label_16b5d8:
    // 0x16b5d8: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x16b5d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x16b5dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16b5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b5e0: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x16b5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x16b5e4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x16b5e8: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x16b5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x16b5ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16b5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16b5f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16B5F0u;
    {
        const bool branch_taken_0x16b5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5F0u;
        // 0x16b5f4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5f0) {
            ctx->pc = 0x16B624u;
            goto label_16b624;
        }
    }
    ctx->pc = 0x16B5F8u;
    // 0x16b5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b600: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16b604: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b608: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b60c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b60cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b610: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B610u;
    SET_GPR_U32(ctx, 31, 0x16B618u);
    ctx->pc = 0x16B614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B610u;
    // 0x16b614: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B610u, 0x16B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B618u;
label_16b618:
    // 0x16b618: 0x928301d4  lbu         $v1, 0x1D4($s4)
    ctx->pc = 0x16b618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16b61c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x16b61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16b620: 0xa28301d4  sb          $v1, 0x1D4($s4)
    ctx->pc = 0x16b620u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 468), (uint8_t)GPR_U32(ctx, 3));
label_16b624:
    // 0x16b624: 0xde0201a0  ld          $v0, 0x1A0($s0)
    ctx->pc = 0x16b624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x16b628: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x16b628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x16b62c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16b630: 0x1040011c  beqz        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x16B630u;
    {
        const bool branch_taken_0x16b630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B630u;
        // 0x16b634: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b630) {
            ctx->pc = 0x16BAA4u;
            goto label_16baa4;
        }
    }
    ctx->pc = 0x16B638u;
    // 0x16b638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b63c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16b640: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16b640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16b644: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16b644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b648: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16b648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b64c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b64cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b650: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16B650u;
    SET_GPR_U32(ctx, 31, 0x16B658u);
    ctx->pc = 0x16B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B650u;
    // 0x16b654: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16B650u, 0x16B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B658u;
label_16b658:
    // 0x16b658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b65c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x16b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x16b660: 0xa283005b  sb          $v1, 0x5B($s4)
    ctx->pc = 0x16b660u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x16b664: 0x8c82d930  lw          $v0, -0x26D0($a0)
    ctx->pc = 0x16b664u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD930u));
    // 0x16b668: 0x80430edd  lb          $v1, 0xEDD($v0)
    ctx->pc = 0x16b668u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
    // 0x16b66c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B66Cu;
    {
        const bool branch_taken_0x16b66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B66Cu;
        // 0x16b670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b66c) {
            ctx->pc = 0x16B684u;
            goto label_16b684;
        }
    }
    ctx->pc = 0x16B674u;
    // 0x16b674: 0x106200da  beq         $v1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x16B674u;
    {
        const bool branch_taken_0x16b674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B674u;
        // 0x16b678: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b674) {
            ctx->pc = 0x16B9E0u;
            goto label_16b9e0;
        }
    }
    ctx->pc = 0x16B67Cu;
    // 0x16b67c: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x16B67Cu;
    {
        const bool branch_taken_0x16b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B67Cu;
        // 0x16b680: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b67c) {
            ctx->pc = 0x16BAACu;
            goto label_16baac;
        }
    }
    ctx->pc = 0x16B684u;
label_16b684:
    // 0x16b684: 0x828201d4  lb          $v0, 0x1D4($s4)
    ctx->pc = 0x16b684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16b688: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x16B688u;
    {
        const bool branch_taken_0x16b688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B688u;
        // 0x16b68c: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b688) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16B690u;
    // 0x16b690: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b694: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x16b694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x16b698: 0x26910120  addiu       $s1, $s4, 0x120
    ctx->pc = 0x16b698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x16b69c: 0x24759b70  addiu       $s5, $v1, -0x6490
    ctx->pc = 0x16b69cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x16b6a0: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x16b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x16b6a4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x16b6a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16b6ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16b6b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b6b8: 0xc07ea1c  jal         func_1FA870
    ctx->pc = 0x16B6B8u;
    SET_GPR_U32(ctx, 31, 0x16B6C0u);
    ctx->pc = 0x16B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6B8u;
    // 0x16b6bc: 0x8c650084  lw          $a1, 0x84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA870u, 0x16B6B8u, 0x16B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6C0u;
label_16b6c0:
    // 0x16b6c0: 0x828301b4  lb          $v1, 0x1B4($s4)
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x16b6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b6c8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16B6C8u;
    {
        const bool branch_taken_0x16b6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6C8u;
        // 0x16b6cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6c8) {
            ctx->pc = 0x16B74Cu;
            goto label_16b74c;
        }
    }
    ctx->pc = 0x16B6D0u;
    // 0x16b6d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B6D0u;
    {
        const bool branch_taken_0x16b6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6d0) {
            ctx->pc = 0x16B6E8u;
            goto label_16b6e8;
        }
    }
    ctx->pc = 0x16B6D8u;
    // 0x16b6d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B6D8u;
    {
        const bool branch_taken_0x16b6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6D8u;
        // 0x16b6dc: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6d8) {
            ctx->pc = 0x16B6F8u;
            goto label_16b6f8;
        }
    }
    ctx->pc = 0x16B6E0u;
    // 0x16b6e0: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x16B6E0u;
    {
        const bool branch_taken_0x16b6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6E0u;
        // 0x16b6e4: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6e0) {
            ctx->pc = 0x16BAACu;
            goto label_16baac;
        }
    }
    ctx->pc = 0x16B6E8u;
label_16b6e8:
    // 0x16b6e8: 0x1072002f  beq         $v1, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x16B6E8u;
    {
        const bool branch_taken_0x16b6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x16B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6E8u;
        // 0x16b6ec: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6e8) {
            ctx->pc = 0x16B7A8u;
            goto label_16b7a8;
        }
    }
    ctx->pc = 0x16B6F0u;
    // 0x16b6f0: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x16B6F0u;
    {
        const bool branch_taken_0x16b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6F0u;
        // 0x16b6f4: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6f0) {
            ctx->pc = 0x16BAACu;
            goto label_16baac;
        }
    }
    ctx->pc = 0x16B6F8u;
label_16b6f8:
    // 0x16b6f8: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b6f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b6fc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x16b6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x16b700: 0x2610ec58  addiu       $s0, $s0, -0x13A8
    ctx->pc = 0x16b700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962264));
    // 0x16b704: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16b704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b708: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x16b70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16b714: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16b718: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b71c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x16b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x16b720: 0xc0b26ec  jal         func_2C9BB0
    ctx->pc = 0x16B720u;
    SET_GPR_U32(ctx, 31, 0x16B728u);
    ctx->pc = 0x16B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B720u;
    // 0x16b724: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9BB0u, 0x16B720u, 0x16B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B728u;
label_16b728:
    // 0x16b728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b72c: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16B72Cu;
    SET_GPR_U32(ctx, 31, 0x16B734u);
    ctx->pc = 0x16B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B72Cu;
    // 0x16b730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16B72Cu, 0x16B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B734u;
label_16b734:
    // 0x16b734: 0xc0b2654  jal         func_2C9950
    ctx->pc = 0x16B734u;
    SET_GPR_U32(ctx, 31, 0x16B73Cu);
    ctx->pc = 0x16B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B734u;
    // 0x16b738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9950u, 0x16B734u, 0x16B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B73Cu;
label_16b73c:
    // 0x16b73c: 0x92820286  lbu         $v0, 0x286($s4)
    ctx->pc = 0x16b73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 646)));
    // 0x16b740: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x16b744: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x16B744u;
    {
        const bool branch_taken_0x16b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B744u;
        // 0x16b748: 0xa2820286  sb          $v0, 0x286($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 646), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b744) {
            ctx->pc = 0x16BAA4u;
            goto label_16baa4;
        }
    }
    ctx->pc = 0x16B74Cu;
label_16b74c:
    // 0x16b74c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b750: 0xc07f066  jal         func_1FC198
    ctx->pc = 0x16B750u;
    SET_GPR_U32(ctx, 31, 0x16B758u);
    ctx->pc = 0x16B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B750u;
    // 0x16b754: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC198u, 0x16B750u, 0x16B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B758u;
label_16b758:
    // 0x16b758: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x16b758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x16b75c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B75Cu;
    {
        const bool branch_taken_0x16b75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b75c) {
            ctx->pc = 0x16B760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B75Cu;
            // 0x16b760: 0x868301d2  lh          $v1, 0x1D2($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B774u;
            goto label_16b774;
        }
    }
    ctx->pc = 0x16B764u;
    // 0x16b764: 0x92820286  lbu         $v0, 0x286($s4)
    ctx->pc = 0x16b764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 646)));
    // 0x16b768: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x16b76c: 0xa2820286  sb          $v0, 0x286($s4)
    ctx->pc = 0x16b76cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 646), (uint8_t)GPR_U32(ctx, 2));
    // 0x16b770: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
label_16b774:
    // 0x16b774: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x16b774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16b778: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x16b778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x16b77c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b780: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b784: 0x24a5ad58  addiu       $a1, $a1, -0x52A8
    ctx->pc = 0x16b784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946136));
    // 0x16b788: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x16b788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x16b78c: 0x8c6201b8  lw          $v0, 0x1B8($v1)
    ctx->pc = 0x16b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x16b790: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16b790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b794: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b798: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x16B798u;
    SET_GPR_U32(ctx, 31, 0x16B7A0u);
    ctx->pc = 0x16B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B798u;
    // 0x16b79c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x16B798u, 0x16B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7A0u;
label_16b7a0:
    // 0x16b7a0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x16B7A0u;
    {
        const bool branch_taken_0x16b7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7A0u;
        // 0x16b7a4: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7a0) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16B7A8u;
label_16b7a8:
    // 0x16b7a8: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b7ac: 0x269001b8  addiu       $s0, $s4, 0x1B8
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 440));
    // 0x16b7b0: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x16b7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16b7b4: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x16b7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x16b7b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b7bc: 0x2632ab60  addiu       $s2, $s1, -0x54A0
    ctx->pc = 0x16b7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945632));
    // 0x16b7c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x16b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16b7c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b7cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b7d0: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x16b7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b7d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16b7d8: 0xc07eb3e  jal         func_1FACF8
    ctx->pc = 0x16B7D8u;
    SET_GPR_U32(ctx, 31, 0x16B7E0u);
    ctx->pc = 0x16B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7D8u;
    // 0x16b7dc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACF8u, 0x16B7D8u, 0x16B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7E0u;
label_16b7e0:
    // 0x16b7e0: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b7e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b7e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16b7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16b7ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x16b7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16b7f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b7f4: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x16b7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b7f8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x16b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16b7fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b800: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x16b800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x16b804: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x16B804u;
    {
        const bool branch_taken_0x16b804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B804u;
        // 0x16b808: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b804) {
            ctx->pc = 0x16BAA4u;
            goto label_16baa4;
        }
    }
    ctx->pc = 0x16B80Cu;
    // 0x16b80c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b810: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x16b814: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b818: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b81c: 0x800008  jr          $a0
    ctx->pc = 0x16B81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B824u: goto label_16b824;
            case 0x16B85Cu: goto label_16b85c;
            case 0x16B8BCu: goto label_16b8bc;
            case 0x16B8F0u: goto label_16b8f0;
            case 0x16B924u: goto label_16b924;
            case 0x16B97Cu: goto label_16b97c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B81Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16B824u;
label_16b824:
    // 0x16b824: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b828: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16b82c: 0x2626ab60  addiu       $a2, $s1, -0x54A0
    ctx->pc = 0x16b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945632));
    // 0x16b830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b834: 0x26d19b70  addiu       $s1, $s6, -0x6490
    ctx->pc = 0x16b834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x16b838: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b840: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b844: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16b844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b848: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b84c: 0xc07eb62  jal         func_1FAD88
    ctx->pc = 0x16B84Cu;
    SET_GPR_U32(ctx, 31, 0x16B854u);
    ctx->pc = 0x16B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B84Cu;
    // 0x16b850: 0x90450018  lbu         $a1, 0x18($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD88u, 0x16B84Cu, 0x16B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B854u;
label_16b854:
    // 0x16b854: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16B854u;
    {
        const bool branch_taken_0x16b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b854) {
            ctx->pc = 0x16B898u;
            goto label_16b898;
        }
    }
    ctx->pc = 0x16B85Cu;
label_16b85c:
    // 0x16b85c: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b85cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b860: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16b860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16b864: 0x2626ab60  addiu       $a2, $s1, -0x54A0
    ctx->pc = 0x16b864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945632));
    // 0x16b868: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b86c: 0x26d19b70  addiu       $s1, $s6, -0x6490
    ctx->pc = 0x16b86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x16b870: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b87c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16b87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b880: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b884: 0xc07eb62  jal         func_1FAD88
    ctx->pc = 0x16B884u;
    SET_GPR_U32(ctx, 31, 0x16B88Cu);
    ctx->pc = 0x16B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B884u;
    // 0x16b888: 0x90450018  lbu         $a1, 0x18($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD88u, 0x16B884u, 0x16B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B88Cu;
label_16b88c:
    // 0x16b88c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b890: 0xc07eb7c  jal         func_1FADF0
    ctx->pc = 0x16B890u;
    SET_GPR_U32(ctx, 31, 0x16B898u);
    ctx->pc = 0x16B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B890u;
    // 0x16b894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADF0u, 0x16B890u, 0x16B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B898u;
label_16b898:
    // 0x16b898: 0xc07eb2c  jal         func_1FACB0
    ctx->pc = 0x16B898u;
    SET_GPR_U32(ctx, 31, 0x16B8A0u);
    ctx->pc = 0x16B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B898u;
    // 0x16b89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB0u, 0x16B898u, 0x16B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8A0u;
label_16b8a0:
    // 0x16b8a0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x16B8A0u;
    SET_GPR_U32(ctx, 31, 0x16B8A8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x16B8A0u, 0x16B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8A8u;
label_16b8a8:
    // 0x16b8a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8ac: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x16B8ACu;
    SET_GPR_U32(ctx, 31, 0x16B8B4u);
    ctx->pc = 0x16B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8ACu;
    // 0x16b8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x16B8ACu, 0x16B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8B4u;
label_16b8b4:
    // 0x16b8b4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x16B8B4u;
    {
        const bool branch_taken_0x16b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8B4u;
        // 0x16b8b8: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8b4) {
            ctx->pc = 0x16BAA4u;
            goto label_16baa4;
        }
    }
    ctx->pc = 0x16B8BCu;
label_16b8bc:
    // 0x16b8bc: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b8c0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16b8c4: 0x2626ab60  addiu       $a2, $s1, -0x54A0
    ctx->pc = 0x16b8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945632));
    // 0x16b8c8: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x16b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x16b8cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b8d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b8d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b8d8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16b8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b8dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b8e0: 0xc07eb7c  jal         func_1FADF0
    ctx->pc = 0x16B8E0u;
    SET_GPR_U32(ctx, 31, 0x16B8E8u);
    ctx->pc = 0x16B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8E0u;
    // 0x16b8e4: 0x90450018  lbu         $a1, 0x18($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADF0u, 0x16B8E0u, 0x16B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8E8u;
label_16b8e8:
    // 0x16b8e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x16B8E8u;
    {
        const bool branch_taken_0x16b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8E8u;
        // 0x16b8ec: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8e8) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16B8F0u;
label_16b8f0:
    // 0x16b8f0: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b8f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b8f4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16b8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16b8f8: 0x2626ab60  addiu       $a2, $s1, -0x54A0
    ctx->pc = 0x16b8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945632));
    // 0x16b8fc: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x16b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x16b900: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b904: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b908: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b90c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16b90cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b910: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b914: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x16B914u;
    SET_GPR_U32(ctx, 31, 0x16B91Cu);
    ctx->pc = 0x16B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B914u;
    // 0x16b918: 0x90450018  lbu         $a1, 0x18($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x16B914u, 0x16B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B91Cu;
label_16b91c:
    // 0x16b91c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x16B91Cu;
    {
        const bool branch_taken_0x16b91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B91Cu;
        // 0x16b920: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b91c) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16B924u;
label_16b924:
    // 0x16b924: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b928: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16b928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16b92c: 0x2626ab60  addiu       $a2, $s1, -0x54A0
    ctx->pc = 0x16b92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945632));
    // 0x16b930: 0x26d09b70  addiu       $s0, $s6, -0x6490
    ctx->pc = 0x16b930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x16b934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b93c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b940: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b944: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16b944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b948: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b94c: 0xc07ef4a  jal         func_1FBD28
    ctx->pc = 0x16B94Cu;
    SET_GPR_U32(ctx, 31, 0x16B954u);
    ctx->pc = 0x16B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B94Cu;
    // 0x16b950: 0x90450018  lbu         $a1, 0x18($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD28u, 0x16B94Cu, 0x16B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B954u;
label_16b954:
    // 0x16b954: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b958: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x16b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x16b95c: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x16b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x16b960: 0xc0b26de  jal         func_2C9B78
    ctx->pc = 0x16B960u;
    SET_GPR_U32(ctx, 31, 0x16B968u);
    ctx->pc = 0x16B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B960u;
    // 0x16b964: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B78u, 0x16B960u, 0x16B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B968u;
label_16b968:
    // 0x16b968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b96c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b970: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16b970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b974: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16B974u;
    {
        const bool branch_taken_0x16b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B974u;
        // 0x16b978: 0x2407001a  addiu       $a3, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b974) {
            ctx->pc = 0x16B9D0u;
            goto label_16b9d0;
        }
    }
    ctx->pc = 0x16B97Cu;
label_16b97c:
    // 0x16b97c: 0x868301d2  lh          $v1, 0x1D2($s4)
    ctx->pc = 0x16b97cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b980: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16b980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16b984: 0x2626ab60  addiu       $a2, $s1, -0x54A0
    ctx->pc = 0x16b984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945632));
    // 0x16b988: 0x26d09b70  addiu       $s0, $s6, -0x6490
    ctx->pc = 0x16b988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x16b98c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b994: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b998: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b99c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16b99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b9a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16b9a4: 0xc07ef4a  jal         func_1FBD28
    ctx->pc = 0x16B9A4u;
    SET_GPR_U32(ctx, 31, 0x16B9ACu);
    ctx->pc = 0x16B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9A4u;
    // 0x16b9a8: 0x90450018  lbu         $a1, 0x18($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD28u, 0x16B9A4u, 0x16B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9ACu;
label_16b9ac:
    // 0x16b9ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16b9b0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16b9b4: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x16b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x16b9b8: 0xc0b26de  jal         func_2C9B78
    ctx->pc = 0x16B9B8u;
    SET_GPR_U32(ctx, 31, 0x16B9C0u);
    ctx->pc = 0x16B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9B8u;
    // 0x16b9bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B78u, 0x16B9B8u, 0x16B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9C0u;
label_16b9c0:
    // 0x16b9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9c8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16b9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b9cc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x16b9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_16b9d0:
    // 0x16b9d0: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x16B9D0u;
    SET_GPR_U32(ctx, 31, 0x16B9D8u);
    ctx->pc = 0x16B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9D0u;
    // 0x16b9d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x16B9D0u, 0x16B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9D8u;
label_16b9d8:
    // 0x16b9d8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16B9D8u;
    {
        const bool branch_taken_0x16b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9D8u;
        // 0x16b9dc: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9d8) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16B9E0u;
label_16b9e0:
    // 0x16b9e0: 0x828201d4  lb          $v0, 0x1D4($s4)
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16b9e4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x16B9E4u;
    {
        const bool branch_taken_0x16b9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9E4u;
        // 0x16b9e8: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9e4) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16B9ECu;
    // 0x16b9ec: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16b9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16b9f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16b9f4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16b9f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16b9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b9fc: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x16b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x16ba00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ba04: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16ba08: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x16ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x16ba0c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x16BA0Cu;
    SET_GPR_U32(ctx, 31, 0x16BA14u);
    ctx->pc = 0x16BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA0Cu;
    // 0x16ba10: 0x8c650084  lw          $a1, 0x84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x16BA0Cu, 0x16BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA14u;
label_16ba14:
    // 0x16ba14: 0x828201b4  lb          $v0, 0x1B4($s4)
    ctx->pc = 0x16ba14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x16ba18: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16BA18u;
    {
        const bool branch_taken_0x16ba18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA18u;
        // 0x16ba1c: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba18) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16BA20u;
    // 0x16ba20: 0x868201d0  lh          $v0, 0x1D0($s4)
    ctx->pc = 0x16ba20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16ba24: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x16ba28: 0x868501d2  lh          $a1, 0x1D2($s4)
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16ba2c: 0x2630ec58  addiu       $s0, $s1, -0x13A8
    ctx->pc = 0x16ba2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x16ba30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ba30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba34: 0xc0b26fe  jal         func_2C9BF8
    ctx->pc = 0x16BA34u;
    SET_GPR_U32(ctx, 31, 0x16BA3Cu);
    ctx->pc = 0x16BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA34u;
    // 0x16ba38: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9BF8u, 0x16BA34u, 0x16BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA3Cu;
label_16ba3c:
    // 0x16ba3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ba40: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16BA40u;
    SET_GPR_U32(ctx, 31, 0x16BA48u);
    ctx->pc = 0x16BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA40u;
    // 0x16ba44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16BA40u, 0x16BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA48u;
label_16ba48:
    // 0x16ba48: 0xc0b2654  jal         func_2C9950
    ctx->pc = 0x16BA48u;
    SET_GPR_U32(ctx, 31, 0x16BA50u);
    ctx->pc = 0x16BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA48u;
    // 0x16ba4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9950u, 0x16BA48u, 0x16BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA50u;
label_16ba50:
    // 0x16ba50: 0x868401d0  lh          $a0, 0x1D0($s4)
    ctx->pc = 0x16ba50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16ba54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16ba58: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x16ba5c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x16ba5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16ba60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA60u;
    {
        const bool branch_taken_0x16ba60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA60u;
        // 0x16ba64: 0x968501d0  lhu         $a1, 0x1D0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba60) {
            ctx->pc = 0x16BA74u;
            goto label_16ba74;
        }
    }
    ctx->pc = 0x16BA68u;
    // 0x16ba68: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA68u;
    {
        const bool branch_taken_0x16ba68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA68u;
        // 0x16ba6c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba68) {
            ctx->pc = 0x16BA74u;
            goto label_16ba74;
        }
    }
    ctx->pc = 0x16BA70u;
    // 0x16ba70: 0xa68201d0  sh          $v0, 0x1D0($s4)
    ctx->pc = 0x16ba70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 2));
label_16ba74:
    // 0x16ba74: 0x2623ec58  addiu       $v1, $s1, -0x13A8
    ctx->pc = 0x16ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x16ba78: 0x868201d2  lh          $v0, 0x1D2($s4)
    ctx->pc = 0x16ba78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16ba7c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16ba80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x16ba80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16ba84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA84u;
        // 0x16ba88: 0x26e274a0  addiu       $v0, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16BA8Cu;
    // 0x16ba8c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16ba90: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x16ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ba94: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA94u;
    {
        const bool branch_taken_0x16ba94 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x16BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA94u;
        // 0x16ba98: 0xa68201d2  sh          $v0, 0x1D2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba94) {
            ctx->pc = 0x16BAA0u;
            goto label_16baa0;
        }
    }
    ctx->pc = 0x16BA9Cu;
    // 0x16ba9c: 0xa68001d2  sh          $zero, 0x1D2($s4)
    ctx->pc = 0x16ba9cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 466), (uint16_t)GPR_U32(ctx, 0));
label_16baa0:
    // 0x16baa0: 0xa68001d0  sh          $zero, 0x1D0($s4)
    ctx->pc = 0x16baa0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 464), (uint16_t)GPR_U32(ctx, 0));
label_16baa4:
    // 0x16baa4: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_16baa8:
    // 0x16baa8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x16baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_16baac:
    // 0x16baac: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16baacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16bab0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16bab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16bab4: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x16BAB4u;
    {
        const bool branch_taken_0x16bab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAB4u;
        // 0x16bab8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bab4) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16BABCu;
    // 0x16babc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16babcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bac0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16bac4: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16bac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16bac8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16bac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bacc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16baccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16bad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bad4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16BAD4u;
    SET_GPR_U32(ctx, 31, 0x16BADCu);
    ctx->pc = 0x16BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAD4u;
    // 0x16bad8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16BAD4u, 0x16BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BADCu;
label_16badc:
    // 0x16badc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bae0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x16BAE0u;
    {
        const bool branch_taken_0x16bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAE0u;
        // 0x16bae4: 0xa283005b  sb          $v1, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bae0) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16BAE8u;
label_16bae8:
    // 0x16bae8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x16baec: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16baecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16baf0: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x16baf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x16baf4: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x16baf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16baf8: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x16baf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x16bafc: 0x245074a0  addiu       $s0, $v0, 0x74A0
    ctx->pc = 0x16bafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x16bb00: 0xde0301a0  ld          $v1, 0x1A0($s0)
    ctx->pc = 0x16bb00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x16bb04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16bb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16bb08: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16BB08u;
    {
        const bool branch_taken_0x16bb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB08u;
        // 0x16bb0c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb08) {
            ctx->pc = 0x16BB3Cu;
            goto label_16bb3c;
        }
    }
    ctx->pc = 0x16BB10u;
    // 0x16bb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb14: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16bb18: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16bb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16bb1c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bb20: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bb24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16bb24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb28: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16BB28u;
    SET_GPR_U32(ctx, 31, 0x16BB30u);
    ctx->pc = 0x16BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB28u;
    // 0x16bb2c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16BB28u, 0x16BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB30u;
label_16bb30:
    // 0x16bb30: 0x928301d4  lbu         $v1, 0x1D4($s4)
    ctx->pc = 0x16bb30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16bb34: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x16bb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16bb38: 0xa28301d4  sb          $v1, 0x1D4($s4)
    ctx->pc = 0x16bb38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 468), (uint8_t)GPR_U32(ctx, 3));
label_16bb3c:
    // 0x16bb3c: 0xde0201a0  ld          $v0, 0x1A0($s0)
    ctx->pc = 0x16bb3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x16bb40: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16bb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16bb44: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x16bb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x16bb48: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x16bb4c: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x16bb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x16bb50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16bb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16bb54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16BB54u;
    {
        const bool branch_taken_0x16bb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB54u;
        // 0x16bb58: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb54) {
            ctx->pc = 0x16BB88u;
            goto label_16bb88;
        }
    }
    ctx->pc = 0x16BB5Cu;
    // 0x16bb5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb60: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16bb64: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16bb68: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bb6c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16bb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bb70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16bb70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb74: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16BB74u;
    SET_GPR_U32(ctx, 31, 0x16BB7Cu);
    ctx->pc = 0x16BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB74u;
    // 0x16bb78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16BB74u, 0x16BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB7Cu;
label_16bb7c:
    // 0x16bb7c: 0x928301d4  lbu         $v1, 0x1D4($s4)
    ctx->pc = 0x16bb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16bb80: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x16bb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16bb84: 0xa28301d4  sb          $v1, 0x1D4($s4)
    ctx->pc = 0x16bb84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 468), (uint8_t)GPR_U32(ctx, 3));
label_16bb88:
    // 0x16bb88: 0xde0301a0  ld          $v1, 0x1A0($s0)
    ctx->pc = 0x16bb88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x16bb8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x16bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16bb90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16bb94: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16BB94u;
    {
        const bool branch_taken_0x16bb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB94u;
        // 0x16bb98: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb94) {
            ctx->pc = 0x16BBFCu;
            goto label_16bbfc;
        }
    }
    ctx->pc = 0x16BB9Cu;
    // 0x16bb9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bba0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16bba4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16bba8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16bba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bbac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16bbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bbb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16bbb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bbb4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16BBB4u;
    SET_GPR_U32(ctx, 31, 0x16BBBCu);
    ctx->pc = 0x16BBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBB4u;
    // 0x16bbb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16BBB4u, 0x16BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBBCu;
label_16bbbc:
    // 0x16bbbc: 0x828301d4  lb          $v1, 0x1D4($s4)
    ctx->pc = 0x16bbbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16bbc0: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16BBC0u;
    {
        const bool branch_taken_0x16bbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBC0u;
        // 0x16bbc4: 0xa2800286  sb          $zero, 0x286($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbc0) {
            ctx->pc = 0x16BC44u;
            goto label_16bc44;
        }
    }
    ctx->pc = 0x16BBC8u;
    // 0x16bbc8: 0x828301b4  lb          $v1, 0x1B4($s4)
    ctx->pc = 0x16bbc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x16bbcc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BBCCu;
    {
        const bool branch_taken_0x16bbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBCCu;
        // 0x16bbd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbcc) {
            ctx->pc = 0x16BBE4u;
            goto label_16bbe4;
        }
    }
    ctx->pc = 0x16BBD4u;
    // 0x16bbd4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BBD4u;
    {
        const bool branch_taken_0x16bbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBD4u;
        // 0x16bbd8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbd4) {
            ctx->pc = 0x16BBF0u;
            goto label_16bbf0;
        }
    }
    ctx->pc = 0x16BBDCu;
    // 0x16bbdc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16BBDCu;
    {
        const bool branch_taken_0x16bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBDCu;
        // 0x16bbe0: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbdc) {
            ctx->pc = 0x16BC54u;
            goto label_16bc54;
        }
    }
    ctx->pc = 0x16BBE4u;
label_16bbe4:
    // 0x16bbe4: 0xa280005a  sb          $zero, 0x5A($s4)
    ctx->pc = 0x16bbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x16bbe8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16BBE8u;
    {
        const bool branch_taken_0x16bbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBE8u;
        // 0x16bbec: 0xae820060  sw          $v0, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbe8) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16BBF0u;
label_16bbf0:
    // 0x16bbf0: 0xae920060  sw          $s2, 0x60($s4)
    ctx->pc = 0x16bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 18));
    // 0x16bbf4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16BBF4u;
    {
        const bool branch_taken_0x16bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBF4u;
        // 0x16bbf8: 0xa280005a  sb          $zero, 0x5A($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbf4) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16BBFCu;
label_16bbfc:
    // 0x16bbfc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x16bc00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16bc04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16BC04u;
    {
        const bool branch_taken_0x16bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC04u;
        // 0x16bc08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc04) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16BC0Cu;
    // 0x16bc0c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16bc10: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16bc14: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16bc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bc18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bc1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16bc1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc20: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16BC20u;
    SET_GPR_U32(ctx, 31, 0x16BC28u);
    ctx->pc = 0x16BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC20u;
    // 0x16bc24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16BC20u, 0x16BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC28u;
label_16bc28:
    // 0x16bc28: 0x828201d4  lb          $v0, 0x1D4($s4)
    ctx->pc = 0x16bc28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16bc2c: 0x928301d4  lbu         $v1, 0x1D4($s4)
    ctx->pc = 0x16bc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x16bc30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BC30u;
    {
        const bool branch_taken_0x16bc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC30u;
        // 0x16bc34: 0xa2800286  sb          $zero, 0x286($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc30) {
            ctx->pc = 0x16BC44u;
            goto label_16bc44;
        }
    }
    ctx->pc = 0x16BC38u;
    // 0x16bc38: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x16bc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16bc3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16BC3Cu;
    {
        const bool branch_taken_0x16bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC3Cu;
        // 0x16bc40: 0xa28201d4  sb          $v0, 0x1D4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 468), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc3c) {
            ctx->pc = 0x16BC4Cu;
            goto label_16bc4c;
        }
    }
    ctx->pc = 0x16BC44u;
label_16bc44:
    // 0x16bc44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bc48: 0xa282005b  sb          $v0, 0x5B($s4)
    ctx->pc = 0x16bc48u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
label_16bc4c:
    // 0x16bc4c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16bc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16bc50:
    // 0x16bc50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16bc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16bc54:
    // 0x16bc54: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16bc54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16bc58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16bc58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bc5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16bc5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bc60: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x16bc60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bc64: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x16bc64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bc68: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x16bc68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bc6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc70: 0x3e00008  jr          $ra
    ctx->pc = 0x16BC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC70u;
        // 0x16bc74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC78u;
}
