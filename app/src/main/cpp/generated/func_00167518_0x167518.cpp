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

// Function: func_00167518
// Address: 0x167518 - 0x1678b8
void func_00167518_0x167518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167518_0x167518");
#endif

    switch (ctx->pc) {
        case 0x167530u: goto label_167530;
        case 0x167560u: goto label_167560;
        case 0x16757cu: goto label_16757c;
        case 0x1677d0u: goto label_1677d0;
        case 0x16789cu: goto label_16789c;
        case 0x1678a4u: goto label_1678a4;
        default: break;
    }

    ctx->pc = 0x167518u;

    // 0x167518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16751c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x167520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167528: 0xc059fba  jal         func_167EE8
    ctx->pc = 0x167528u;
    SET_GPR_U32(ctx, 31, 0x167530u);
    ctx->pc = 0x16752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167528u;
    // 0x16752c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167EE8u, 0x167528u, 0x167530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167530u;
label_167530:
    // 0x167530: 0x3c11f7ff  lui         $s1, 0xF7FF
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63487 << 16));
    // 0x167534: 0x82030110  lb          $v1, 0x110($s0)
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x167538: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x167538u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x16753c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16753cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x167540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167544: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x167544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x167548: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16754c: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x167550: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x167554: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x167554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x167558: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x167558u;
    SET_GPR_U32(ctx, 31, 0x167560u);
    ctx->pc = 0x16755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167558u;
    // 0x16755c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x167558u, 0x167560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167560u;
label_167560:
    // 0x167560: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x167560u;
    {
        const bool branch_taken_0x167560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167560) {
            ctx->pc = 0x167564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167560u;
            // 0x167564: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16756Cu;
            goto label_16756c;
        }
    }
    ctx->pc = 0x167568u;
    // 0x167568: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x167568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_16756c:
    // 0x16756c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x167570: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x167570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x167574: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x167574u;
    SET_GPR_U32(ctx, 31, 0x16757Cu);
    ctx->pc = 0x167578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167574u;
    // 0x167578: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x167574u, 0x16757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16757Cu;
label_16757c:
    // 0x16757c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16757cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167584: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x167584u;
    {
        const bool branch_taken_0x167584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167584u;
        // 0x167588: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167584) {
            ctx->pc = 0x1675BCu;
            goto label_1675bc;
        }
    }
    ctx->pc = 0x16758Cu;
    // 0x16758c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16758Cu;
    {
        const bool branch_taken_0x16758c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16758Cu;
        // 0x167590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16758c) {
            ctx->pc = 0x1675A4u;
            goto label_1675a4;
        }
    }
    ctx->pc = 0x167594u;
    // 0x167594: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x167594u;
    {
        const bool branch_taken_0x167594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167594u;
        // 0x167598: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167594) {
            ctx->pc = 0x1675B4u;
            goto label_1675b4;
        }
    }
    ctx->pc = 0x16759Cu;
    // 0x16759c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16759Cu;
    {
        const bool branch_taken_0x16759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16759Cu;
        // 0x1675a0: 0x904385f8  lbu         $v1, -0x7A08($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16759c) {
            ctx->pc = 0x1675E4u;
            goto label_1675e4;
        }
    }
    ctx->pc = 0x1675A4u;
label_1675a4:
    // 0x1675a4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1675A4u;
    {
        const bool branch_taken_0x1675a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1675A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675A4u;
        // 0x1675a8: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675a4) {
            ctx->pc = 0x1675C4u;
            goto label_1675c4;
        }
    }
    ctx->pc = 0x1675ACu;
    // 0x1675ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1675ACu;
    {
        const bool branch_taken_0x1675ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675ACu;
        // 0x1675b0: 0x904385f8  lbu         $v1, -0x7A08($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675ac) {
            ctx->pc = 0x1675E4u;
            goto label_1675e4;
        }
    }
    ctx->pc = 0x1675B4u;
label_1675b4:
    // 0x1675b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1675B4u;
    {
        const bool branch_taken_0x1675b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675B4u;
        // 0x1675b8: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675b4) {
            ctx->pc = 0x1675C8u;
            goto label_1675c8;
        }
    }
    ctx->pc = 0x1675BCu;
label_1675bc:
    // 0x1675bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1675BCu;
    {
        const bool branch_taken_0x1675bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675BCu;
        // 0x1675c0: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675bc) {
            ctx->pc = 0x1675C8u;
            goto label_1675c8;
        }
    }
    ctx->pc = 0x1675C4u;
label_1675c4:
    // 0x1675c4: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1675c8:
    // 0x1675c8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1675cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1675ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1675d0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1675d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1675d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1675d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1675d8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1675d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1675dc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1675dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1675e0: 0x904385f8  lbu         $v1, -0x7A08($v0)
    ctx->pc = 0x1675e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5E85F8u));
label_1675e4:
    // 0x1675e4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1675E4u;
    {
        const bool branch_taken_0x1675e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1675e4) {
            ctx->pc = 0x1675E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1675E4u;
            // 0x1675e8: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1675F0u;
            goto label_1675f0;
        }
    }
    ctx->pc = 0x1675ECu;
    // 0x1675ec: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1675f0:
    // 0x1675f0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1675f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1675f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1675f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1675f8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1675f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1675fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1675fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167600: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x167600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x167604: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x167608: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x167608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x16760c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x167610: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x167610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x167614: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x167614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x167618: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16761c: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x16761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x167620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167624: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x167624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167628: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x167628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x16762c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16762cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x167630: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x167630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x167634: 0x82020110  lb          $v0, 0x110($s0)
    ctx->pc = 0x167634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x167638: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x16763c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16763cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167640: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167648: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x167648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16764c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16764cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x167650: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x167650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x167654: 0x82020110  lb          $v0, 0x110($s0)
    ctx->pc = 0x167654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x167658: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x167658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x16765c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167660: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x167660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167664: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x167664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x167668: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x167668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16766c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16766cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x167670: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x167670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x167674: 0x8204005a  lb          $a0, 0x5A($s0)
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x167678: 0x1086000a  beq         $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x167678u;
    {
        const bool branch_taken_0x167678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x16767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167678u;
        // 0x16767c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167678) {
            ctx->pc = 0x1676A4u;
            goto label_1676a4;
        }
    }
    ctx->pc = 0x167680u;
    // 0x167680: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x167680u;
    {
        const bool branch_taken_0x167680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167680) {
            ctx->pc = 0x167684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167680u;
            // 0x167684: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x167688u;
    // 0x167688: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x167688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16768c: 0x10850059  beq         $a0, $a1, . + 4 + (0x59 << 2)
    ctx->pc = 0x16768Cu;
    {
        const bool branch_taken_0x16768c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x167690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16768Cu;
        // 0x167690: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16768c) {
            ctx->pc = 0x1677F4u;
            goto label_1677f4;
        }
    }
    ctx->pc = 0x167694u;
    // 0x167694: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x167694u;
    {
        const bool branch_taken_0x167694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x167698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167694u;
        // 0x167698: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167694) {
            ctx->pc = 0x167734u;
            goto label_167734;
        }
    }
    ctx->pc = 0x16769Cu;
    // 0x16769c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x16769Cu;
    {
        const bool branch_taken_0x16769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16769Cu;
        // 0x1676a0: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16769c) {
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x1676A4u;
label_1676a4:
    // 0x1676a4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x1676a8: 0x9223d9e9  lbu         $v1, -0x2617($s1)
    ctx->pc = 0x1676a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3BD9E9u));
    // 0x1676ac: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1676ACu;
    {
        const bool branch_taken_0x1676ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1676B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676ACu;
        // 0x1676b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676ac) {
            ctx->pc = 0x167700u;
            goto label_167700;
        }
    }
    ctx->pc = 0x1676B4u;
    // 0x1676b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1676B4u;
    {
        const bool branch_taken_0x1676b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676B4u;
        // 0x1676b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676b4) {
            ctx->pc = 0x1676CCu;
            goto label_1676cc;
        }
    }
    ctx->pc = 0x1676BCu;
    // 0x1676bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1676BCu;
    {
        const bool branch_taken_0x1676bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676BCu;
        // 0x1676c0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676bc) {
            ctx->pc = 0x1676E4u;
            goto label_1676e4;
        }
    }
    ctx->pc = 0x1676C4u;
    // 0x1676c4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1676C4u;
    {
        const bool branch_taken_0x1676c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676C4u;
        // 0x1676c8: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676c4) {
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x1676CCu;
label_1676cc:
    // 0x1676cc: 0x10640037  beq         $v1, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1676CCu;
    {
        const bool branch_taken_0x1676cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1676D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676CCu;
        // 0x1676d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676cc) {
            ctx->pc = 0x1677ACu;
            goto label_1677ac;
        }
    }
    ctx->pc = 0x1676D4u;
    // 0x1676d4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1676D4u;
    {
        const bool branch_taken_0x1676d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1676D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676D4u;
        // 0x1676d8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676d4) {
            ctx->pc = 0x167720u;
            goto label_167720;
        }
    }
    ctx->pc = 0x1676DCu;
    // 0x1676dc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1676DCu;
    {
        const bool branch_taken_0x1676dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676DCu;
        // 0x1676e0: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676dc) {
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x1676E4u;
label_1676e4:
    // 0x1676e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1676e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676e8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1676ec: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1676ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1676f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1676f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676f4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1676f8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1676F8u;
    {
        const bool branch_taken_0x1676f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676F8u;
        // 0x1676fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676f8) {
            ctx->pc = 0x1677C8u;
            goto label_1677c8;
        }
    }
    ctx->pc = 0x167700u;
label_167700:
    // 0x167700: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167704: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x167704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x167708: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x167708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x16770c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x167710: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x167710u;
    {
        const bool branch_taken_0x167710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167710u;
        // 0x167714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167710) {
            ctx->pc = 0x1677F4u;
            goto label_1677f4;
        }
    }
    ctx->pc = 0x167718u;
    // 0x167718: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x167718u;
    {
        const bool branch_taken_0x167718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167718u;
        // 0x16771c: 0xa222d9e9  sb          $v0, -0x2617($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294957545), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167718) {
            ctx->pc = 0x1677F4u;
            goto label_1677f4;
        }
    }
    ctx->pc = 0x167720u;
label_167720:
    // 0x167720: 0x9043748c  lbu         $v1, 0x748C($v0)
    ctx->pc = 0x167720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29836)));
    // 0x167724: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x167724u;
    {
        const bool branch_taken_0x167724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167724) {
            ctx->pc = 0x167728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167724u;
            // 0x167728: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x16772Cu;
    // 0x16772c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16772Cu;
    {
        const bool branch_taken_0x16772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16772Cu;
        // 0x167730: 0xa204005a  sb          $a0, 0x5A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16772c) {
            ctx->pc = 0x1677F0u;
            goto label_1677f0;
        }
    }
    ctx->pc = 0x167734u;
label_167734:
    // 0x167734: 0x9223d9e9  lbu         $v1, -0x2617($s1)
    ctx->pc = 0x167734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294957545)));
    // 0x167738: 0x10660014  beq         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x167738u;
    {
        const bool branch_taken_0x167738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x16773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167738u;
        // 0x16773c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167738) {
            ctx->pc = 0x16778Cu;
            goto label_16778c;
        }
    }
    ctx->pc = 0x167740u;
    // 0x167740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167740u;
    {
        const bool branch_taken_0x167740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167740) {
            ctx->pc = 0x167758u;
            goto label_167758;
        }
    }
    ctx->pc = 0x167748u;
    // 0x167748: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x167748u;
    {
        const bool branch_taken_0x167748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167748u;
        // 0x16774c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167748) {
            ctx->pc = 0x167770u;
            goto label_167770;
        }
    }
    ctx->pc = 0x167750u;
    // 0x167750: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x167750u;
    {
        const bool branch_taken_0x167750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167750u;
        // 0x167754: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167750) {
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x167758u;
label_167758:
    // 0x167758: 0x50650015  beql        $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x167758u;
    {
        const bool branch_taken_0x167758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x167758) {
            ctx->pc = 0x16775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167758u;
            // 0x16775c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x167760u;
    // 0x167760: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x167760u;
    {
        const bool branch_taken_0x167760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x167764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167760u;
        // 0x167764: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167760) {
            ctx->pc = 0x1677E0u;
            goto label_1677e0;
        }
    }
    ctx->pc = 0x167768u;
    // 0x167768: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x167768u;
    {
        const bool branch_taken_0x167768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167768u;
        // 0x16776c: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167768) {
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x167770u;
label_167770:
    // 0x167770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167774: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x167774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x167778: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x167778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16777c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16777cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167780: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x167780u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x167784: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x167784u;
    {
        const bool branch_taken_0x167784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167784u;
        // 0x167788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167784) {
            ctx->pc = 0x1677C8u;
            goto label_1677c8;
        }
    }
    ctx->pc = 0x16778Cu;
label_16778c:
    // 0x16778c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x16778cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167790: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x167790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x167794: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x167794u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x167798: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16779c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x16779Cu;
    {
        const bool branch_taken_0x16779c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16779c) {
            ctx->pc = 0x1677A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16779Cu;
            // 0x1677a0: 0xa225d9e9  sb          $a1, -0x2617($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 4294957545), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677F4u;
            goto label_1677f4;
        }
    }
    ctx->pc = 0x1677A4u;
    // 0x1677a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1677A4u;
    {
        const bool branch_taken_0x1677a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677A4u;
        // 0x1677a8: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677a4) {
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x1677ACu;
label_1677ac:
    // 0x1677ac: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1677acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1677b0:
    // 0x1677b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1677b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677b4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1677b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1677b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1677bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1677bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677c0: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1677c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1677c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1677c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1677c8:
    // 0x1677c8: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1677C8u;
    SET_GPR_U32(ctx, 31, 0x1677D0u);
    ctx->pc = 0x1677CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677C8u;
    // 0x1677cc: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1677C8u, 0x1677D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677D0u;
label_1677d0:
    // 0x1677d0: 0x9222d9e9  lbu         $v0, -0x2617($s1)
    ctx->pc = 0x1677d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294957545)));
    // 0x1677d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1677d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1677d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1677D8u;
    {
        const bool branch_taken_0x1677d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677D8u;
        // 0x1677dc: 0xa222d9e9  sb          $v0, -0x2617($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294957545), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677d8) {
            ctx->pc = 0x1677F4u;
            goto label_1677f4;
        }
    }
    ctx->pc = 0x1677E0u;
label_1677e0:
    // 0x1677e0: 0x9043748c  lbu         $v1, 0x748C($v0)
    ctx->pc = 0x1677e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29836)));
    // 0x1677e4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1677E4u;
    {
        const bool branch_taken_0x1677e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1677e4) {
            ctx->pc = 0x1677E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1677E4u;
            // 0x1677e8: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677F8u;
            goto label_1677f8;
        }
    }
    ctx->pc = 0x1677ECu;
    // 0x1677ec: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x1677ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
label_1677f0:
    // 0x1677f0: 0xa220d9e9  sb          $zero, -0x2617($s1)
    ctx->pc = 0x1677f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294957545), (uint8_t)GPR_U32(ctx, 0));
label_1677f4:
    // 0x1677f4: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1677f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1677f8:
    // 0x1677f8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1677f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1677fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1677fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x167800: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x167800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x167804: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167808: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x167808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x16780c: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x16780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x167810: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x167810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x167814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167818: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x167818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16781c: 0x82030110  lb          $v1, 0x110($s0)
    ctx->pc = 0x16781cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x167820: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x167820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x167824: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x167824u;
    {
        const bool branch_taken_0x167824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167824u;
        // 0x167828: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167824) {
            ctx->pc = 0x167894u;
            goto label_167894;
        }
    }
    ctx->pc = 0x16782Cu;
    // 0x16782c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167830: 0x2442fbb0  addiu       $v0, $v0, -0x450
    ctx->pc = 0x167830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x167834: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167838: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16783c: 0x800008  jr          $a0
    ctx->pc = 0x16783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167844u: goto label_167844;
            case 0x167850u: goto label_167850;
            case 0x16785Cu: goto label_16785c;
            case 0x167868u: goto label_167868;
            case 0x167874u: goto label_167874;
            case 0x167880u: goto label_167880;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16783Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x167844u;
label_167844:
    // 0x167844: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x167844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x167848: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x167848u;
    {
        const bool branch_taken_0x167848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167848u;
        // 0x16784c: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167848) {
            ctx->pc = 0x167888u;
            goto label_167888;
        }
    }
    ctx->pc = 0x167850u;
label_167850:
    // 0x167850: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x167850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x167854: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x167854u;
    {
        const bool branch_taken_0x167854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167854u;
        // 0x167858: 0x24042001  addiu       $a0, $zero, 0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167854) {
            ctx->pc = 0x167888u;
            goto label_167888;
        }
    }
    ctx->pc = 0x16785Cu;
label_16785c:
    // 0x16785c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x16785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x167860: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167860u;
    {
        const bool branch_taken_0x167860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167860u;
        // 0x167864: 0x24042002  addiu       $a0, $zero, 0x2002 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167860) {
            ctx->pc = 0x167888u;
            goto label_167888;
        }
    }
    ctx->pc = 0x167868u;
label_167868:
    // 0x167868: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x167868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x16786c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16786Cu;
    {
        const bool branch_taken_0x16786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16786Cu;
        // 0x167870: 0x24042003  addiu       $a0, $zero, 0x2003 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16786c) {
            ctx->pc = 0x167888u;
            goto label_167888;
        }
    }
    ctx->pc = 0x167874u;
label_167874:
    // 0x167874: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x167874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x167878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x167878u;
    {
        const bool branch_taken_0x167878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167878u;
        // 0x16787c: 0x24042006  addiu       $a0, $zero, 0x2006 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167878) {
            ctx->pc = 0x167888u;
            goto label_167888;
        }
    }
    ctx->pc = 0x167880u;
label_167880:
    // 0x167880: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x167884: 0x24042007  addiu       $a0, $zero, 0x2007
    ctx->pc = 0x167884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8199));
label_167888:
    // 0x167888: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x167888u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16788c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x16788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x167890: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x167890u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
label_167894:
    // 0x167894: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x167894u;
    SET_GPR_U32(ctx, 31, 0x16789Cu);
    ctx->pc = 0x167898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167894u;
    // 0x167898: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x167894u, 0x16789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16789Cu;
label_16789c:
    // 0x16789c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16789Cu;
    SET_GPR_U32(ctx, 31, 0x1678A4u);
    ctx->pc = 0x1678A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16789Cu;
    // 0x1678a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16789Cu, 0x1678A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678A4u;
label_1678a4:
    // 0x1678a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1678a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1678a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1678a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1678ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1678acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1678b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1678B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1678B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678B0u;
        // 0x1678b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1678B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1678B8u;
}
