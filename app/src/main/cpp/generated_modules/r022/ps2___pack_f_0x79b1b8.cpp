#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __pack_f
// Address: 0x79b1b8 - 0x79b2c8
void ps2___pack_f_0x79b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x79b1b8");
#endif

    ctx->pc = 0x79b1b8u;

    // 0x79b1b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b1bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b1c0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79b1c4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79b1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b1c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B1C8u;
    {
        const bool branch_taken_0x79b1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1C8u;
        // 0x79b1cc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1c8) {
            ctx->pc = 0x79B1E0u;
            goto label_79b1e0;
        }
    }
    ctx->pc = 0x79B1D0u;
    // 0x79b1d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x79b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x79b1d4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x79b1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79b1d8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x79B1D8u;
    {
        const bool branch_taken_0x79b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1D8u;
        // 0x79b1dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1d8) {
            ctx->pc = 0x79B274u;
            goto label_79b274;
        }
    }
    ctx->pc = 0x79B1E0u;
label_79b1e0:
    // 0x79b1e0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79b1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79b1e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B1E4u;
    {
        const bool branch_taken_0x79b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E4u;
        // 0x79b1e8: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1e4) {
            ctx->pc = 0x79B238u;
            goto label_79b238;
        }
    }
    ctx->pc = 0x79B1ECu;
    // 0x79b1ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B1ECu;
    {
        const bool branch_taken_0x79b1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b1ec) {
            ctx->pc = 0x79B1FCu;
            goto label_79b1fc;
        }
    }
    ctx->pc = 0x79B1F4u;
    // 0x79b1f4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x79B1F4u;
    {
        const bool branch_taken_0x79b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1F4u;
        // 0x79b1f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1f4) {
            ctx->pc = 0x79B274u;
            goto label_79b274;
        }
    }
    ctx->pc = 0x79B1FCu;
label_79b1fc:
    // 0x79b1fc: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x79B1FCu;
    {
        const bool branch_taken_0x79b1fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1FCu;
        // 0x79b200: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1fc) {
            ctx->pc = 0x79B278u;
            goto label_79b278;
        }
    }
    ctx->pc = 0x79B204u;
    // 0x79b204: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x79b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79b208: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x79b208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x79b20c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B20Cu;
    {
        const bool branch_taken_0x79b20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B20Cu;
        // 0x79b210: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b20c) {
            ctx->pc = 0x79B22Cu;
            goto label_79b22c;
        }
    }
    ctx->pc = 0x79B214u;
    // 0x79b214: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x79b214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79b218: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x79b218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x79b21c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B21Cu;
    {
        const bool branch_taken_0x79b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B21Cu;
        // 0x79b220: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b21c) {
            ctx->pc = 0x79B270u;
            goto label_79b270;
        }
    }
    ctx->pc = 0x79B224u;
    // 0x79b224: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79B224u;
    {
        const bool branch_taken_0x79b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b224) {
            ctx->pc = 0x79B270u;
            goto label_79b270;
        }
    }
    ctx->pc = 0x79B22Cu;
label_79b22c:
    // 0x79b22c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x79b22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x79b230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B230u;
    {
        const bool branch_taken_0x79b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B230u;
        // 0x79b234: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b230) {
            ctx->pc = 0x79B244u;
            goto label_79b244;
        }
    }
    ctx->pc = 0x79B238u;
label_79b238:
    // 0x79b238: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x79b238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79b23c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x79B23Cu;
    {
        const bool branch_taken_0x79b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B23Cu;
        // 0x79b240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b23c) {
            ctx->pc = 0x79B274u;
            goto label_79b274;
        }
    }
    ctx->pc = 0x79B244u;
label_79b244:
    // 0x79b244: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79b248: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x79b248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x79b24c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B24Cu;
    {
        const bool branch_taken_0x79b24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b24c) {
            ctx->pc = 0x79B250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B24Cu;
            // 0x79b250: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B260u;
            goto label_79b260;
        }
    }
    ctx->pc = 0x79B254u;
    // 0x79b254: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x79b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x79b258: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x79b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x79b25c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x79b25cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79b260:
    // 0x79b260: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B260u;
    {
        const bool branch_taken_0x79b260 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x79b260) {
            ctx->pc = 0x79B264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B260u;
            // 0x79b264: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B274u;
            goto label_79b274;
        }
    }
    ctx->pc = 0x79B268u;
    // 0x79b268: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x79b268u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79b26c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79b270:
    // 0x79b270: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x79b270u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_79b274:
    // 0x79b274: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x79b274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_79b278:
    // 0x79b278: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x79b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x79b27c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79b27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79b280: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b284: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x79b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79b288: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x79b288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x79b28c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79b28cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79b290: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79b294: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x79b294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x79b298: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79b298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79b29c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x79b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x79b2a0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79b2a4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x79b2a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x79b2a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b2ac: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x79b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x79b2b0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79b2b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79b2b4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79b2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79b2b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x79b2b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2C4u;
    // 0x79b2c4: 0x0  nop
    ctx->pc = 0x79b2c4u;
    // NOP
    ctx->pc = 0x79b2c8u;
}
} // namespace gh_r022
