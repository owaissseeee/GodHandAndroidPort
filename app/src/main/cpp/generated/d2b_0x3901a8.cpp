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

// Function: d2b
// Address: 0x3901a8 - 0x390318
void d2b_0x3901a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("d2b_0x3901a8");
#endif

    switch (ctx->pc) {
        case 0x3901f0u: goto label_3901f0;
        case 0x390230u: goto label_390230;
        case 0x390294u: goto label_390294;
        case 0x3902dcu: goto label_3902dc;
        default: break;
    }

    ctx->pc = 0x3901a8u;

    // 0x3901a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3901a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3901ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3901acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3901b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3901b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3901b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3901b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3901b8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3901b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x3901bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x3901bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x3901c0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3901c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3901c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3901c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x3901c8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3901c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3901cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3901ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3901d0: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x3901d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3901d4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3901d4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3901d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3901d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3901dc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3901dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3901e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3901e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3901e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3901e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3901e8: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x3901E8u;
    SET_GPR_U32(ctx, 31, 0x3901F0u);
    ctx->pc = 0x3901ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3901E8u;
    // 0x3901ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x3901E8u, 0x3901F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3901F0u;
label_3901f0:
    // 0x3901f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3901f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3901f4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3901f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3901f8: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x3901f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3901fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3901fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390200: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x390200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x390204: 0x108502  srl         $s0, $s0, 20
    ctx->pc = 0x390204u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x390208: 0x321207ff  andi        $s2, $s0, 0x7FF
    ctx->pc = 0x390208u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2047);
    // 0x39020c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39020Cu;
    {
        const bool branch_taken_0x39020c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x390210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39020Cu;
        // 0x390210: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39020c) {
            ctx->pc = 0x390220u;
            goto label_390220;
        }
    }
    ctx->pc = 0x390214u;
    // 0x390214: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x390214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x390218: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x390218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39021c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x39021cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_390220:
    // 0x390220: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x390220u;
    {
        const bool branch_taken_0x390220 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x390224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390220u;
        // 0x390224: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390220) {
            ctx->pc = 0x390288u;
            goto label_390288;
        }
    }
    ctx->pc = 0x390228u;
    // 0x390228: 0xc0e3e30  jal         func_38F8C0
    ctx->pc = 0x390228u;
    SET_GPR_U32(ctx, 31, 0x390230u);
    ctx->pc = 0x39022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390228u;
    // 0x39022c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8C0u, 0x390228u, 0x390230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390230u;
label_390230:
    // 0x390230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390234: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x390234u;
    {
        const bool branch_taken_0x390234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x390238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390234u;
        // 0x390238: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390234) {
            ctx->pc = 0x390260u;
            goto label_390260;
        }
    }
    ctx->pc = 0x39023Cu;
    // 0x39023c: 0x52023  negu        $a0, $a1
    ctx->pc = 0x39023cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x390240: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x390240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390244: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x390244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x390248: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x390248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39024c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x39024cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x390250: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x390250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x390254: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x390254u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x390258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x390258u;
    {
        const bool branch_taken_0x390258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390258u;
        // 0x39025c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390258) {
            ctx->pc = 0x390268u;
            goto label_390268;
        }
    }
    ctx->pc = 0x390260u;
label_390260:
    // 0x390260: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x390260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390264: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x390264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_390268:
    // 0x390268: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x390268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39026c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390270: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x390270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390274: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x390274u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x390278: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x390278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x39027c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x39027cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390280: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x390280u;
    {
        const bool branch_taken_0x390280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390280u;
        // 0x390284: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390280) {
            ctx->pc = 0x3902A8u;
            goto label_3902a8;
        }
    }
    ctx->pc = 0x390288u;
label_390288:
    // 0x390288: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x390288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x39028c: 0xc0e3e30  jal         func_38F8C0
    ctx->pc = 0x39028Cu;
    SET_GPR_U32(ctx, 31, 0x390294u);
    ctx->pc = 0x390290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39028Cu;
    // 0x390290: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8C0u, 0x39028Cu, 0x390294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390294u;
label_390294:
    // 0x390294: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x390294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x390298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39029c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x39029cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3902a0: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3902a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3902a4: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x3902a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_3902a8:
    // 0x3902a8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3902A8u;
    {
        const bool branch_taken_0x3902a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3902ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902A8u;
        // 0x3902ac: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902a8) {
            ctx->pc = 0x3902C4u;
            goto label_3902c4;
        }
    }
    ctx->pc = 0x3902B0u;
    // 0x3902b0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x3902b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3902b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3902b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3902b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3902b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3902bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3902BCu;
    {
        const bool branch_taken_0x3902bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3902C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902BCu;
        // 0x3902c0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902bc) {
            ctx->pc = 0x3902E4u;
            goto label_3902e4;
        }
    }
    ctx->pc = 0x3902C4u;
label_3902c4:
    // 0x3902c4: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x3902c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x3902c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3902c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3902cc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3902ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x3902d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3902d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3902d4: 0xc0e3e0e  jal         func_38F838
    ctx->pc = 0x3902D4u;
    SET_GPR_U32(ctx, 31, 0x3902DCu);
    ctx->pc = 0x3902D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3902D4u;
    // 0x3902d8: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F838u, 0x3902D4u, 0x3902DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3902DCu;
label_3902dc:
    // 0x3902dc: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x3902dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x3902e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3902e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3902e4:
    // 0x3902e4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x3902e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x3902e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3902e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3902ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3902ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3902f0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3902f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3902f4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3902f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3902f8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3902f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3902fc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3902fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390300: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x390300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390304: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x390304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390308: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x390308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39030c: 0x3e00008  jr          $ra
    ctx->pc = 0x39030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39030Cu;
        // 0x390310: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390314u;
    // 0x390314: 0x0  nop
    ctx->pc = 0x390314u;
    // NOP
    ctx->pc = 0x390318u;
}
