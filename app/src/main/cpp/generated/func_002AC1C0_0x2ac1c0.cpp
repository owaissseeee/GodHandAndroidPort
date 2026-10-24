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

// Function: func_002AC1C0
// Address: 0x2ac1c0 - 0x2ac298
void func_002AC1C0_0x2ac1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC1C0_0x2ac1c0");
#endif

    switch (ctx->pc) {
        case 0x2ac260u: goto label_2ac260;
        default: break;
    }

    ctx->pc = 0x2ac1c0u;

    // 0x2ac1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac1c4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2ac1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2ac1c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ac1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ac1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac1d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ac1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1d4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2ac1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ac1d8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x2ac1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ac1dc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2ac1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2ac1e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2AC1E0u;
    {
        const bool branch_taken_0x2ac1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1E0u;
        // 0x2ac1e4: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1e0) {
            ctx->pc = 0x2AC284u;
            goto label_2ac284;
        }
    }
    ctx->pc = 0x2AC1E8u;
    // 0x2ac1e8: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x2ac1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac1ec: 0x31021000  andi        $v0, $t0, 0x1000
    ctx->pc = 0x2ac1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4096);
    // 0x2ac1f0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AC1F0u;
    {
        const bool branch_taken_0x2ac1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1f0) {
            ctx->pc = 0x2AC1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC1F0u;
            // 0x2ac1f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC288u;
            goto label_2ac288;
        }
    }
    ctx->pc = 0x2AC1F8u;
    // 0x2ac1f8: 0x80a2005e  lb          $v0, 0x5E($a1)
    ctx->pc = 0x2ac1f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 94)));
    // 0x2ac1fc: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AC1FCu;
    {
        const bool branch_taken_0x2ac1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1fc) {
            ctx->pc = 0x2AC200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC1FCu;
            // 0x2ac200: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC288u;
            goto label_2ac288;
        }
    }
    ctx->pc = 0x2AC204u;
    // 0x2ac204: 0x84a601b0  lh          $a2, 0x1B0($a1)
    ctx->pc = 0x2ac204u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x2ac208: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ac208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ac20c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ac20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac210: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2ac210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2ac214: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2ac214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ac218: 0x443818  mult        $a3, $v0, $a0
    ctx->pc = 0x2ac218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2ac21c: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x2ac21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ac220: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC220u;
    {
        const bool branch_taken_0x2ac220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC220u;
        // 0x2ac224: 0x844401bc  lh          $a0, 0x1BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac220) {
            ctx->pc = 0x2AC240u;
            goto label_2ac240;
        }
    }
    ctx->pc = 0x2AC228u;
    // 0x2ac228: 0x960200a4  lhu         $v0, 0xA4($s0)
    ctx->pc = 0x2ac228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2ac22c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac230: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC230u;
    {
        const bool branch_taken_0x2ac230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC230u;
        // 0x2ac234: 0x35021000  ori         $v0, $t0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac230) {
            ctx->pc = 0x2AC250u;
            goto label_2ac250;
        }
    }
    ctx->pc = 0x2AC238u;
    // 0x2ac238: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AC238u;
    {
        const bool branch_taken_0x2ac238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC238u;
        // 0x2ac23c: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac238) {
            ctx->pc = 0x2AC284u;
            goto label_2ac284;
        }
    }
    ctx->pc = 0x2AC240u;
label_2ac240:
    // 0x2ac240: 0x960200a4  lhu         $v0, 0xA4($s0)
    ctx->pc = 0x2ac240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2ac244: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac248: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AC248u;
    {
        const bool branch_taken_0x2ac248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac248) {
            ctx->pc = 0x2AC24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC248u;
            // 0x2ac24c: 0xa60000a4  sh          $zero, 0xA4($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC250u;
            goto label_2ac250;
        }
    }
    ctx->pc = 0x2AC250u;
label_2ac250:
    // 0x2ac250: 0x860500a4  lh          $a1, 0xA4($s0)
    ctx->pc = 0x2ac250u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2ac254: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ac254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac258: 0xc0ab194  jal         func_2AC650
    ctx->pc = 0x2AC258u;
    SET_GPR_U32(ctx, 31, 0x2AC260u);
    ctx->pc = 0x2AC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC258u;
    // 0x2ac25c: 0x8e070008  lw          $a3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC650u, 0x2AC258u, 0x2AC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC260u;
label_2ac260:
    // 0x2ac260: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2ac260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac264: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2ac264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2ac268: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2ac268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2ac26c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ac26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ac270: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC270u;
    {
        const bool branch_taken_0x2ac270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC270u;
        // 0x2ac274: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac270) {
            ctx->pc = 0x2AC284u;
            goto label_2ac284;
        }
    }
    ctx->pc = 0x2AC278u;
    // 0x2ac278: 0x960200a4  lhu         $v0, 0xA4($s0)
    ctx->pc = 0x2ac278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2ac27c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac280: 0xa60200a4  sh          $v0, 0xA4($s0)
    ctx->pc = 0x2ac280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 2));
label_2ac284:
    // 0x2ac284: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ac284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac288:
    // 0x2ac288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac28c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC28Cu;
        // 0x2ac290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC294u;
    // 0x2ac294: 0x0  nop
    ctx->pc = 0x2ac294u;
    // NOP
    ctx->pc = 0x2ac298u;
}
