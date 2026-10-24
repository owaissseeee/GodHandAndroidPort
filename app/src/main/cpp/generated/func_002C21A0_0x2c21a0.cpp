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

// Function: func_002C21A0
// Address: 0x2c21a0 - 0x2c2330
void func_002C21A0_0x2c21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C21A0_0x2c21a0");
#endif

    switch (ctx->pc) {
        case 0x2c2278u: goto label_2c2278;
        default: break;
    }

    ctx->pc = 0x2c21a0u;

    // 0x2c21a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c21a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c21a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c21a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c21a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c21ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c21acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c21b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c21b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c21b4: 0x9083005c  lbu         $v1, 0x5C($a0)
    ctx->pc = 0x2c21b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2c21b8: 0x10710056  beq         $v1, $s1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2C21B8u;
    {
        const bool branch_taken_0x2c21b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21B8u;
        // 0x2c21bc: 0x2490005c  addiu       $s0, $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21b8) {
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C21C0u;
    // 0x2c21c0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c21c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c21c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C21C4u;
    {
        const bool branch_taken_0x2c21c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21C4u;
        // 0x2c21c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21c4) {
            ctx->pc = 0x2C21DCu;
            goto label_2c21dc;
        }
    }
    ctx->pc = 0x2C21CCu;
    // 0x2c21cc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C21CCu;
    {
        const bool branch_taken_0x2c21cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c21cc) {
            ctx->pc = 0x2C21D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C21CCu;
            // 0x2c21d0: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C21ECu;
            goto label_2c21ec;
        }
    }
    ctx->pc = 0x2C21D4u;
    // 0x2c21d4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2C21D4u;
    {
        const bool branch_taken_0x2c21d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21D4u;
        // 0x2c21d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21d4) {
            ctx->pc = 0x2C2318u;
            goto label_2c2318;
        }
    }
    ctx->pc = 0x2C21DCu;
label_2c21dc:
    // 0x2c21dc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C21DCu;
    {
        const bool branch_taken_0x2c21dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21DCu;
        // 0x2c21e0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21dc) {
            ctx->pc = 0x2C2268u;
            goto label_2c2268;
        }
    }
    ctx->pc = 0x2C21E4u;
    // 0x2c21e4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2C21E4u;
    {
        const bool branch_taken_0x2c21e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21E4u;
        // 0x2c21e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21e4) {
            ctx->pc = 0x2C2318u;
            goto label_2c2318;
        }
    }
    ctx->pc = 0x2C21ECu;
label_2c21ec:
    // 0x2c21ec: 0x1451000f  bne         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C21ECu;
    {
        const bool branch_taken_0x2c21ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2C21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21ECu;
        // 0x2c21f0: 0x96050002  lhu         $a1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21ec) {
            ctx->pc = 0x2C222Cu;
            goto label_2c222c;
        }
    }
    ctx->pc = 0x2C21F4u;
    // 0x2c21f4: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x2c21f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2c21f8: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C21F8u;
    {
        const bool branch_taken_0x2c21f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21F8u;
        // 0x2c21fc: 0x52142  srl         $a0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21f8) {
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C2200u;
    // 0x2c2200: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c2200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c2204: 0x24427a8c  addiu       $v0, $v0, 0x7A8C
    ctx->pc = 0x2c2204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31372));
    // 0x2c2208: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c2208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c220c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c2210: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x2c2210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2c2214: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2218: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c2218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c221c: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2c221cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c2220: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c2220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c2224: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2C2224u;
    {
        const bool branch_taken_0x2c2224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2224u;
        // 0x2c2228: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2224) {
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C222Cu;
label_2c222c:
    // 0x2c222c: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x2c222cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2c2230: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C2230u;
    {
        const bool branch_taken_0x2c2230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2230u;
        // 0x2c2234: 0x52142  srl         $a0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2230) {
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C2238u;
    // 0x2c2238: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c2238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c223c: 0x24427a8c  addiu       $v0, $v0, 0x7A8C
    ctx->pc = 0x2c223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31372));
    // 0x2c2240: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c2240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c2244: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c2244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c2248: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x2c2248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2c224c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c2250: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2254: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2c2254u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c2258: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c2258u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c225c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c225cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c2260: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C2260u;
    {
        const bool branch_taken_0x2c2260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2260u;
        // 0x2c2264: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2260) {
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C2268u;
label_2c2268:
    // 0x2c2268: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2c2268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2c226c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2c226cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x2c2270: 0xc0b140a  jal         func_2C5028
    ctx->pc = 0x2C2270u;
    SET_GPR_U32(ctx, 31, 0x2C2278u);
    ctx->pc = 0x2C2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2270u;
    // 0x2c2274: 0x94657a50  lhu         $a1, 0x7A50($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5028u, 0x2C2270u, 0x2C2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2278u;
label_2c2278:
    // 0x2c2278: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C2278u;
    {
        const bool branch_taken_0x2c2278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2278) {
            ctx->pc = 0x2C227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2278u;
            // 0x2c227c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2318u;
            goto label_2c2318;
        }
    }
    ctx->pc = 0x2C2280u;
    // 0x2c2280: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x2c2280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c2284: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c2288: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C2288u;
    {
        const bool branch_taken_0x2c2288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2288) {
            ctx->pc = 0x2C228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2288u;
            // 0x2c228c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2318u;
            goto label_2c2318;
        }
    }
    ctx->pc = 0x2C2290u;
    // 0x2c2290: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2c2290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2c2294: 0x54510010  bnel        $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C2294u;
    {
        const bool branch_taken_0x2c2294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2c2294) {
            ctx->pc = 0x2C2298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2294u;
            // 0x2c2298: 0x96050002  lhu         $a1, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C22D8u;
            goto label_2c22d8;
        }
    }
    ctx->pc = 0x2C229Cu;
    // 0x2c229c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x2c229cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c22a0: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x2c22a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2c22a4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C22A4u;
    {
        const bool branch_taken_0x2c22a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22A4u;
        // 0x2c22a8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22a4) {
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C22ACu;
    // 0x2c22ac: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2c22acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2c22b0: 0x8c459b70  lw          $a1, -0x6490($v0)
    ctx->pc = 0x2c22b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x2c22b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c22b8: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x2c22b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2c22bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c22c0: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x2c22c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2c22c4: 0x431806  srlv        $v1, $v1, $v0
    ctx->pc = 0x2c22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c22c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c22c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c22cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c22d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C22D0u;
    {
        const bool branch_taken_0x2c22d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22D0u;
        // 0x2c22d4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22d0) {
            ctx->pc = 0x2C2310u;
            goto label_2c2310;
        }
    }
    ctx->pc = 0x2C22D8u;
label_2c22d8:
    // 0x2c22d8: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x2c22d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2c22dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C22DCu;
    {
        const bool branch_taken_0x2c22dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22DCu;
        // 0x2c22e0: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22dc) {
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C22E4u;
    // 0x2c22e4: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x2c22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x2c22e8: 0x8c629b70  lw          $v0, -0x6490($v1)
    ctx->pc = 0x2c22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941552)));
    // 0x2c22ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c22f0: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x2c22f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2c22f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c22f8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2c22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2c22fc: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x2c22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c2300: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c2300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c2304: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c2304u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c2308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c230c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c230cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c2310:
    // 0x2c2310: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c2310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c2314:
    // 0x2c2314: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c2314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c2318:
    // 0x2c2318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c231c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c231cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2324: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2324u;
        // 0x2c2328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C232Cu;
    // 0x2c232c: 0x0  nop
    ctx->pc = 0x2c232cu;
    // NOP
    ctx->pc = 0x2c2330u;
}
