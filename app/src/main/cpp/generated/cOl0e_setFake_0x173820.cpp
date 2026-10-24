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

// Function: cOl0e_setFake
// Address: 0x173820 - 0x173900
void cOl0e_setFake_0x173820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl0e_setFake_0x173820");
#endif

    switch (ctx->pc) {
        case 0x173868u: goto label_173868;
        case 0x1738a8u: goto label_1738a8;
        default: break;
    }

    ctx->pc = 0x173820u;

    // 0x173820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173828: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x173828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17382c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173838: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x173838u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x17383c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x17383cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x173840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173844: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x173844u;
    {
        const bool branch_taken_0x173844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x173848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173844u;
        // 0x173848: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173844) {
            ctx->pc = 0x1738ECu;
            goto label_1738ec;
        }
    }
    ctx->pc = 0x17384Cu;
    // 0x17384c: 0x16230011  bne         $s1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17384Cu;
    {
        const bool branch_taken_0x17384c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x173850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17384Cu;
        // 0x173850: 0xa2110d9b  sb          $s1, 0xD9B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3483), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17384c) {
            ctx->pc = 0x173894u;
            goto label_173894;
        }
    }
    ctx->pc = 0x173854u;
    // 0x173854: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x173854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x173858: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173858u;
    {
        const bool branch_taken_0x173858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173858) {
            ctx->pc = 0x17385Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173858u;
            // 0x17385c: 0x8e040da8  lw          $a0, 0xDA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17386Cu;
            goto label_17386c;
        }
    }
    ctx->pc = 0x173860u;
    // 0x173860: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x173860u;
    SET_GPR_U32(ctx, 31, 0x173868u);
    ctx->pc = 0x173864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173860u;
    // 0x173864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x173860u, 0x173868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173868u;
label_173868:
    // 0x173868: 0x8e040da8  lw          $a0, 0xDA8($s0)
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3496)));
label_17386c:
    // 0x17386c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17386Cu;
    {
        const bool branch_taken_0x17386c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17386Cu;
        // 0x173870: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17386c) {
            ctx->pc = 0x173880u;
            goto label_173880;
        }
    }
    ctx->pc = 0x173874u;
    // 0x173874: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x173874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x173878: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x173878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17387c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x17387cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_173880:
    // 0x173880: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x173880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x173884: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x173884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x173888: 0xa21102f4  sb          $s1, 0x2F4($s0)
    ctx->pc = 0x173888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 17));
    // 0x17388c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17388Cu;
    {
        const bool branch_taken_0x17388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17388Cu;
        // 0x173890: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17388c) {
            ctx->pc = 0x1738CCu;
            goto label_1738cc;
        }
    }
    ctx->pc = 0x173894u;
label_173894:
    // 0x173894: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x173894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x173898: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173898u;
    {
        const bool branch_taken_0x173898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173898) {
            ctx->pc = 0x17389Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173898u;
            // 0x17389c: 0x8e030da8  lw          $v1, 0xDA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1738ACu;
            goto label_1738ac;
        }
    }
    ctx->pc = 0x1738A0u;
    // 0x1738a0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1738A0u;
    SET_GPR_U32(ctx, 31, 0x1738A8u);
    ctx->pc = 0x1738A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738A0u;
    // 0x1738a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1738A0u, 0x1738A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738A8u;
label_1738a8:
    // 0x1738a8: 0x8e030da8  lw          $v1, 0xDA8($s0)
    ctx->pc = 0x1738a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3496)));
label_1738ac:
    // 0x1738ac: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1738ACu;
    {
        const bool branch_taken_0x1738ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1738ac) {
            ctx->pc = 0x1738B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1738ACu;
            // 0x1738b0: 0x8e0205b8  lw          $v0, 0x5B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1738C4u;
            goto label_1738c4;
        }
    }
    ctx->pc = 0x1738B4u;
    // 0x1738b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1738b8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1738b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1738bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1738bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1738c0: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1738c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1738c4:
    // 0x1738c4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1738c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1738c8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1738c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1738cc:
    // 0x1738cc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1738ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1738d0: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1738d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x1738d4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1738d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1738d8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1738d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1738dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1738dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1738e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1738e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1738e4: 0x0  nop
    ctx->pc = 0x1738e4u;
    // NOP
    // 0x1738e8: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1738e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
label_1738ec:
    // 0x1738ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1738ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1738f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1738f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1738f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1738f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1738f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1738F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1738FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738F8u;
        // 0x1738fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1738F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173900u;
}
