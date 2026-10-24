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

// Function: func_001F6208
// Address: 0x1f6208 - 0x1f6520
void func_001F6208_0x1f6208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6208_0x1f6208");
#endif

    switch (ctx->pc) {
        case 0x1f6284u: goto label_1f6284;
        case 0x1f62a4u: goto label_1f62a4;
        case 0x1f6324u: goto label_1f6324;
        case 0x1f6334u: goto label_1f6334;
        case 0x1f6440u: goto label_1f6440;
        case 0x1f6490u: goto label_1f6490;
        case 0x1f64b4u: goto label_1f64b4;
        case 0x1f6504u: goto label_1f6504;
        default: break;
    }

    ctx->pc = 0x1f6208u;

    // 0x1f6208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f620c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1f620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1f6210: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f6210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f6214: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x1f6214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1f6218: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f6218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f621c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f621cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6220: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f6220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f6224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6228: 0xdca201a0  ld          $v0, 0x1A0($a1)
    ctx->pc = 0x1f6228u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x1f622c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f6230: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F6230u;
    {
        const bool branch_taken_0x1f6230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6230u;
        // 0x1f6234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6230) {
            ctx->pc = 0x1F62DCu;
            goto label_1f62dc;
        }
    }
    ctx->pc = 0x1F6238u;
    // 0x1f6238: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f6238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f623c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f6240: 0x2452f0c0  addiu       $s2, $v0, -0xF40
    ctx->pc = 0x1f6240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x1f6244: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1f6244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f6248: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f624c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1f624cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f6250: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f6254: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f6254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f6258: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f625c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f6260: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f6260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6264: 0x10a300a7  beq         $a1, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1F6264u;
    {
        const bool branch_taken_0x1f6264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6264u;
        // 0x1f6268: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6264) {
            ctx->pc = 0x1F6504u;
            goto label_1f6504;
        }
    }
    ctx->pc = 0x1F626Cu;
    // 0x1f626c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F626Cu;
    {
        const bool branch_taken_0x1f626c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F626Cu;
        // 0x1f6270: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f626c) {
            ctx->pc = 0x1F6288u;
            goto label_1f6288;
        }
    }
    ctx->pc = 0x1F6274u;
    // 0x1f6274: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1f6274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1f6278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f6278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f627c: 0xc0b4526  jal         func_2D1498
    ctx->pc = 0x1F627Cu;
    SET_GPR_U32(ctx, 31, 0x1F6284u);
    ctx->pc = 0x1F6280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F627Cu;
    // 0x1f6280: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1498u, 0x1F627Cu, 0x1F6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6284u;
label_1f6284:
    // 0x1f6284: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1f6284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1f6288:
    // 0x1f6288: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1f6288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1f628c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f628cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6290: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f6290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f6294: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f6294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f6298: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f6298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f629c: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x1F629Cu;
    SET_GPR_U32(ctx, 31, 0x1F62A4u);
    ctx->pc = 0x1F62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F629Cu;
    // 0x1f62a0: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x1F629Cu, 0x1F62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62A4u;
label_1f62a4:
    // 0x1f62a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f62a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f62ac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1f62acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f62b0: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x1f62b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f62b4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1f62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1f62b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f62bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f62bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f62c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1f62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f62c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f62c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f62cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f62d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f62d4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1F62D4u;
    {
        const bool branch_taken_0x1f62d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62D4u;
        // 0x1f62d8: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62d4) {
            ctx->pc = 0x1F6504u;
            goto label_1f6504;
        }
    }
    ctx->pc = 0x1F62DCu;
label_1f62dc:
    // 0x1f62dc: 0xdca301b0  ld          $v1, 0x1B0($a1)
    ctx->pc = 0x1f62dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x1f62e0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1f62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1f62e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f62e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f62e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F62E8u;
    {
        const bool branch_taken_0x1f62e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62E8u;
        // 0x1f62ec: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62e8) {
            ctx->pc = 0x1F6350u;
            goto label_1f6350;
        }
    }
    ctx->pc = 0x1F62F0u;
    // 0x1f62f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f62f4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f62f8: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x1f62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1f62fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f6300: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6304: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6308: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x1f6308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f630c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1F630Cu;
    {
        const bool branch_taken_0x1f630c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F630Cu;
        // 0x1f6310: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f630c) {
            ctx->pc = 0x1F6470u;
            goto label_1f6470;
        }
    }
    ctx->pc = 0x1F6314u;
    // 0x1f6314: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1f6314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f6318: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1f6318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f631c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F631Cu;
    {
        const bool branch_taken_0x1f631c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F631Cu;
        // 0x1f6320: 0x24a20006  addiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f631c) {
            ctx->pc = 0x1F6330u;
            goto label_1f6330;
        }
    }
    ctx->pc = 0x1F6324u;
label_1f6324:
    // 0x1f6324: 0x24a2fffa  addiu       $v0, $a1, -0x6
    ctx->pc = 0x1f6324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x1f6328: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1F6328u;
    {
        const bool branch_taken_0x1f6328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6328u;
        // 0x1f632c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6328) {
            ctx->pc = 0x1F646Cu;
            goto label_1f646c;
        }
    }
    ctx->pc = 0x1F6330u;
label_1f6330:
    // 0x1f6330: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1f6330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1f6334:
    // 0x1f6334: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6338: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f6338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f633c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1f633cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f6340: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F6340u;
    {
        const bool branch_taken_0x1f6340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6340) {
            ctx->pc = 0x1F6344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6340u;
            // 0x1f6344: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F646Cu;
            goto label_1f646c;
        }
    }
    ctx->pc = 0x1F6348u;
    // 0x1f6348: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1F6348u;
    {
        const bool branch_taken_0x1f6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6348u;
        // 0x1f634c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6348) {
            ctx->pc = 0x1F6470u;
            goto label_1f6470;
        }
    }
    ctx->pc = 0x1F6350u;
label_1f6350:
    // 0x1f6350: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6354: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6354u;
    {
        const bool branch_taken_0x1f6354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6354u;
        // 0x1f6358: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6354) {
            ctx->pc = 0x1F6398u;
            goto label_1f6398;
        }
    }
    ctx->pc = 0x1F635Cu;
    // 0x1f635c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1f635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f6360: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f6360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f6364: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x1f6364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1f6368: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f6368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f636c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6370: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6374: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x1f6374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f6378: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F6378u;
    {
        const bool branch_taken_0x1f6378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6378) {
            ctx->pc = 0x1F637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6378u;
            // 0x1f637c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6470u;
            goto label_1f6470;
        }
    }
    ctx->pc = 0x1F6380u;
    // 0x1f6380: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1f6380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f6384: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1f6384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f6388: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F6388u;
    {
        const bool branch_taken_0x1f6388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6388u;
        // 0x1f638c: 0x24a20006  addiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6388) {
            ctx->pc = 0x1F6324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6324;
        }
    }
    ctx->pc = 0x1F6390u;
    // 0x1f6390: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F6390u;
    {
        const bool branch_taken_0x1f6390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6390u;
        // 0x1f6394: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6390) {
            ctx->pc = 0x1F6334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6334;
        }
    }
    ctx->pc = 0x1F6398u;
label_1f6398:
    // 0x1f6398: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f639c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F639Cu;
    {
        const bool branch_taken_0x1f639c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F639Cu;
        // 0x1f63a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f639c) {
            ctx->pc = 0x1F63E0u;
            goto label_1f63e0;
        }
    }
    ctx->pc = 0x1F63A4u;
    // 0x1f63a4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1f63a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f63a8: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1f63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f63ac: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F63ACu;
    {
        const bool branch_taken_0x1f63ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63ACu;
        // 0x1f63b0: 0xae050020  sw          $a1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63ac) {
            ctx->pc = 0x1F63D4u;
            goto label_1f63d4;
        }
    }
    ctx->pc = 0x1F63B4u;
    // 0x1f63b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f63b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f63bc: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x1f63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1f63c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f63c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f63c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f63cc: 0x14a40028  bne         $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F63CCu;
    {
        const bool branch_taken_0x1f63cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63CCu;
        // 0x1f63d0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63cc) {
            ctx->pc = 0x1F6470u;
            goto label_1f6470;
        }
    }
    ctx->pc = 0x1F63D4u;
label_1f63d4:
    // 0x1f63d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f63d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F63D8u;
    {
        const bool branch_taken_0x1f63d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63D8u;
        // 0x1f63dc: 0xae060020  sw          $a2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63d8) {
            ctx->pc = 0x1F6414u;
            goto label_1f6414;
        }
    }
    ctx->pc = 0x1F63E0u;
label_1f63e0:
    // 0x1f63e0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1f63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1f63e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f63e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f63e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F63E8u;
    {
        const bool branch_taken_0x1f63e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63E8u;
        // 0x1f63ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63e8) {
            ctx->pc = 0x1F6424u;
            goto label_1f6424;
        }
    }
    ctx->pc = 0x1F63F0u;
    // 0x1f63f0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1f63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f63f4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f63f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F63F8u;
    {
        const bool branch_taken_0x1f63f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63F8u;
        // 0x1f63fc: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63f8) {
            ctx->pc = 0x1F640Cu;
            goto label_1f640c;
        }
    }
    ctx->pc = 0x1F6400u;
    // 0x1f6400: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f6400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f6404: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F6404u;
    {
        const bool branch_taken_0x1f6404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6404) {
            ctx->pc = 0x1F6408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6404u;
            // 0x1f6408: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6470u;
            goto label_1f6470;
        }
    }
    ctx->pc = 0x1F640Cu;
label_1f640c:
    // 0x1f640c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6410: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1f6410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_1f6414:
    // 0x1f6414: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1f6414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6418: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1f6418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f641c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F641Cu;
    {
        const bool branch_taken_0x1f641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F641Cu;
        // 0x1f6420: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f641c) {
            ctx->pc = 0x1F646Cu;
            goto label_1f646c;
        }
    }
    ctx->pc = 0x1F6424u;
label_1f6424:
    // 0x1f6424: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6428: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1f6428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1f642c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6430: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F6430u;
    {
        const bool branch_taken_0x1f6430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6430) {
            ctx->pc = 0x1F6498u;
            goto label_1f6498;
        }
    }
    ctx->pc = 0x1F6438u;
    // 0x1f6438: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1F6438u;
    SET_GPR_U32(ctx, 31, 0x1F6440u);
    ctx->pc = 0x1F643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6438u;
    // 0x1f643c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1F6438u, 0x1F6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6440u;
label_1f6440:
    // 0x1f6440: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f6444: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f6444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f6448: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x1f6448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1f644c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f6450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f6450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f6454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f6458: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f6458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f645c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f6460: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x1f6460u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f6464: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6464u;
    {
        const bool branch_taken_0x1f6464 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6464) {
            ctx->pc = 0x1F6468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6464u;
            // 0x1f6468: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F646Cu;
            goto label_1f646c;
        }
    }
    ctx->pc = 0x1F646Cu;
label_1f646c:
    // 0x1f646c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f646cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1f6470:
    // 0x1f6470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6474: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f6474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f6478: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f647c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6480: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f6480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6488: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F6488u;
    SET_GPR_U32(ctx, 31, 0x1F6490u);
    ctx->pc = 0x1F648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6488u;
    // 0x1f648c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F6488u, 0x1F6490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6490u;
label_1f6490:
    // 0x1f6490: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6490u;
    {
        const bool branch_taken_0x1f6490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6490u;
        // 0x1f6494: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6490) {
            ctx->pc = 0x1F6508u;
            goto label_1f6508;
        }
    }
    ctx->pc = 0x1F6498u;
label_1f6498:
    // 0x1f6498: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f649c: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1f649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1f64a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f64a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f64a4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F64A4u;
    {
        const bool branch_taken_0x1f64a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f64a4) {
            ctx->pc = 0x1F64A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F64A4u;
            // 0x1f64a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6508u;
            goto label_1f6508;
        }
    }
    ctx->pc = 0x1F64ACu;
    // 0x1f64ac: 0xc07dabe  jal         func_1F6AF8
    ctx->pc = 0x1F64ACu;
    SET_GPR_U32(ctx, 31, 0x1F64B4u);
    ctx->pc = 0x1F64B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64ACu;
    // 0x1f64b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AF8u, 0x1F64ACu, 0x1F64B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64B4u;
label_1f64b4:
    // 0x1f64b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f64b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f64bc: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1f64c0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f64c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f64c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f64cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f64d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f64d4: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x1f64d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f64d8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F64D8u;
    {
        const bool branch_taken_0x1f64d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f64d8) {
            ctx->pc = 0x1F64DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F64D8u;
            // 0x1f64dc: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F64E0u;
            goto label_1f64e0;
        }
    }
    ctx->pc = 0x1F64E0u;
label_1f64e0:
    // 0x1f64e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f64e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f64e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f64e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f64e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f64ec: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f64ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f64f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f64f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f64f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f64f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f64f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f64f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64fc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F64FCu;
    SET_GPR_U32(ctx, 31, 0x1F6504u);
    ctx->pc = 0x1F6500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64FCu;
    // 0x1f6500: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F64FCu, 0x1F6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6504u;
label_1f6504:
    // 0x1f6504: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f6504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f6508:
    // 0x1f6508: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f6508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f650c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f650cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6514: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6514u;
        // 0x1f6518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F651Cu;
    // 0x1f651c: 0x0  nop
    ctx->pc = 0x1f651cu;
    // NOP
    ctx->pc = 0x1f6520u;
}
