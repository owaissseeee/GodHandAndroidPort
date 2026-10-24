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

// Function: func_001034E0
// Address: 0x1034e0 - 0x103760
void func_001034E0_0x1034e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001034E0_0x1034e0");
#endif

    switch (ctx->pc) {
        case 0x1034f4u: goto label_1034f4;
        default: break;
    }

    ctx->pc = 0x1034e0u;

    // 0x1034e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1034e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1034e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1034e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1034e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1034e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1034ec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1034ECu;
    SET_GPR_U32(ctx, 31, 0x1034F4u);
    ctx->pc = 0x1034F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034ECu;
    // 0x1034f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1034ECu, 0x1034F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034F4u;
label_1034f4:
    // 0x1034f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1034f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034f8: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1034f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1034fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1034fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x103500: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x103500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x103504: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x103504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x103508: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x103508u;
    {
        const bool branch_taken_0x103508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103508u;
        // 0x10350c: 0x24467a78  addiu       $a2, $v0, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103508) {
            ctx->pc = 0x10371Cu;
            goto label_10371c;
        }
    }
    ctx->pc = 0x103510u;
    // 0x103510: 0x80a20621  lb          $v0, 0x621($a1)
    ctx->pc = 0x103510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1569)));
    // 0x103514: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x103514u;
    {
        const bool branch_taken_0x103514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103514u;
        // 0x103518: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103514) {
            ctx->pc = 0x103704u;
            goto label_103704;
        }
    }
    ctx->pc = 0x10351Cu;
    // 0x10351c: 0x80a20622  lb          $v0, 0x622($a1)
    ctx->pc = 0x10351cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1570)));
    // 0x103520: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103520u;
    {
        const bool branch_taken_0x103520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103520u;
        // 0x103524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103520) {
            ctx->pc = 0x103538u;
            goto label_103538;
        }
    }
    ctx->pc = 0x103528u;
    // 0x103528: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x103528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10352c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x10352cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x103530: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x103530u;
    {
        const bool branch_taken_0x103530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103530u;
        // 0x103534: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103530) {
            ctx->pc = 0x103710u;
            goto label_103710;
        }
    }
    ctx->pc = 0x103538u;
label_103538:
    // 0x103538: 0x80a20623  lb          $v0, 0x623($a1)
    ctx->pc = 0x103538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1571)));
    // 0x10353c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10353Cu;
    {
        const bool branch_taken_0x10353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10353Cu;
        // 0x103540: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10353c) {
            ctx->pc = 0x103558u;
            goto label_103558;
        }
    }
    ctx->pc = 0x103544u;
    // 0x103544: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x103544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x103548: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x103548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x10354c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103550: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x103550u;
    {
        const bool branch_taken_0x103550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103550u;
        // 0x103554: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103550) {
            ctx->pc = 0x103710u;
            goto label_103710;
        }
    }
    ctx->pc = 0x103558u;
label_103558:
    // 0x103558: 0x90a2061e  lbu         $v0, 0x61E($a1)
    ctx->pc = 0x103558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1566)));
    // 0x10355c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x10355Cu;
    {
        const bool branch_taken_0x10355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10355c) {
            ctx->pc = 0x103560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10355Cu;
            // 0x103560: 0x8cc2fa30  lw          $v0, -0x5D0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294965808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10363Cu;
            goto label_10363c;
        }
    }
    ctx->pc = 0x103564u;
    // 0x103564: 0xc4a10614  lwc1        $f1, 0x614($a1)
    ctx->pc = 0x103564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103568: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x103568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x10356c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10356cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x103570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103574: 0x0  nop
    ctx->pc = 0x103574u;
    // NOP
    // 0x103578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x103578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10357c: 0x0  nop
    ctx->pc = 0x10357cu;
    // NOP
    // 0x103580: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x103580u;
    {
        const bool branch_taken_0x103580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103580u;
        // 0x103584: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103580) {
            ctx->pc = 0x1035A4u;
            goto label_1035a4;
        }
    }
    ctx->pc = 0x103588u;
    // 0x103588: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x103588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10358c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10358cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103590: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x103590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x103594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103598: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x103598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x10359c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x10359Cu;
    {
        const bool branch_taken_0x10359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10359Cu;
        // 0x1035a0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10359c) {
            ctx->pc = 0x103710u;
            goto label_103710;
        }
    }
    ctx->pc = 0x1035A4u;
label_1035a4:
    // 0x1035a4: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x1035a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x1035a8: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1035a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x1035ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1035acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1035b0: 0x0  nop
    ctx->pc = 0x1035b0u;
    // NOP
    // 0x1035b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1035b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1035b8: 0x0  nop
    ctx->pc = 0x1035b8u;
    // NOP
    // 0x1035bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1035BCu;
    {
        const bool branch_taken_0x1035bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1035C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035BCu;
        // 0x1035c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035bc) {
            ctx->pc = 0x1035E0u;
            goto label_1035e0;
        }
    }
    ctx->pc = 0x1035C4u;
    // 0x1035c4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1035c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1035c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1035c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1035cc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1035ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1035d0: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x1035d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x1035d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1035d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1035d8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1035D8u;
    {
        const bool branch_taken_0x1035d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035D8u;
        // 0x1035dc: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035d8) {
            ctx->pc = 0x103710u;
            goto label_103710;
        }
    }
    ctx->pc = 0x1035E0u;
label_1035e0:
    // 0x1035e0: 0xc4a10610  lwc1        $f1, 0x610($a1)
    ctx->pc = 0x1035e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1035e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1035e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1035e8: 0x0  nop
    ctx->pc = 0x1035e8u;
    // NOP
    // 0x1035ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1035ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1035f0: 0x0  nop
    ctx->pc = 0x1035f0u;
    // NOP
    // 0x1035f4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1035F4u;
    {
        const bool branch_taken_0x1035f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1035F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035F4u;
        // 0x1035f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035f4) {
            ctx->pc = 0x10361Cu;
            goto label_10361c;
        }
    }
    ctx->pc = 0x1035FCu;
    // 0x1035fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1035fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x103600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103604: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x103604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103608: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x103608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x10360c: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x10360cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x103610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103614: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x103614u;
    {
        const bool branch_taken_0x103614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103614u;
        // 0x103618: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103614) {
            ctx->pc = 0x103710u;
            goto label_103710;
        }
    }
    ctx->pc = 0x10361Cu;
label_10361c:
    // 0x10361c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10361cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x103620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103624: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x103624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103628: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x103628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x10362c: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x10362cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x103630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103634: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x103634u;
    {
        const bool branch_taken_0x103634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103634u;
        // 0x103638: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103634) {
            ctx->pc = 0x103710u;
            goto label_103710;
        }
    }
    ctx->pc = 0x10363Cu;
label_10363c:
    // 0x10363c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x103640: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x103640u;
    {
        const bool branch_taken_0x103640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103640) {
            ctx->pc = 0x103644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103640u;
            // 0x103644: 0x90a2061f  lbu         $v0, 0x61F($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1567)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103670u;
            goto label_103670;
        }
    }
    ctx->pc = 0x103648u;
    // 0x103648: 0xde0202f0  ld          $v0, 0x2F0($s0)
    ctx->pc = 0x103648u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x10364c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x10364cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x103650: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x103650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x103654: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x103654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x103658: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x103658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x10365c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x103660: 0x10440039  beq         $v0, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x103660u;
    {
        const bool branch_taken_0x103660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x103664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103660u;
        // 0x103664: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103660) {
            ctx->pc = 0x103748u;
            goto label_103748;
        }
    }
    ctx->pc = 0x103668u;
    // 0x103668: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x103668u;
    {
        const bool branch_taken_0x103668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103668u;
        // 0x10366c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103668) {
            ctx->pc = 0x103708u;
            goto label_103708;
        }
    }
    ctx->pc = 0x103670u;
label_103670:
    // 0x103670: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x103670u;
    {
        const bool branch_taken_0x103670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103670) {
            ctx->pc = 0x103674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103670u;
            // 0x103674: 0xde0202f0  ld          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103720u;
            goto label_103720;
        }
    }
    ctx->pc = 0x103678u;
    // 0x103678: 0xc4a10608  lwc1        $f1, 0x608($a1)
    ctx->pc = 0x103678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10367c: 0x3c013f9c  lui         $at, 0x3F9C
    ctx->pc = 0x10367cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16284 << 16));
    // 0x103680: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x103680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
    // 0x103684: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103688: 0x0  nop
    ctx->pc = 0x103688u;
    // NOP
    // 0x10368c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10368cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103690: 0x0  nop
    ctx->pc = 0x103690u;
    // NOP
    // 0x103694: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x103694u;
    {
        const bool branch_taken_0x103694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103694) {
            ctx->pc = 0x1036C8u;
            goto label_1036c8;
        }
    }
    ctx->pc = 0x10369Cu;
    // 0x10369c: 0xde0202f0  ld          $v0, 0x2F0($s0)
    ctx->pc = 0x10369cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x1036a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1036a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1036a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1036a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1036a8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1036a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1036ac: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x1036acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x1036b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1036b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1036b4: 0x10440024  beq         $v0, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1036B4u;
    {
        const bool branch_taken_0x1036b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1036B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036B4u;
        // 0x1036b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036b4) {
            ctx->pc = 0x103748u;
            goto label_103748;
        }
    }
    ctx->pc = 0x1036BCu;
    // 0x1036bc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1036bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1036c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1036C0u;
    {
        const bool branch_taken_0x1036c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036C0u;
        // 0x1036c4: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036c0) {
            ctx->pc = 0x103710u;
            goto label_103710;
        }
    }
    ctx->pc = 0x1036C8u;
label_1036c8:
    // 0x1036c8: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x1036c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x1036cc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1036ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1036d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1036d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1036d4: 0x0  nop
    ctx->pc = 0x1036d4u;
    // NOP
    // 0x1036d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1036d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1036dc: 0x0  nop
    ctx->pc = 0x1036dcu;
    // NOP
    // 0x1036e0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1036E0u;
    {
        const bool branch_taken_0x1036e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1036E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036E0u;
        // 0x1036e4: 0xde0202f0  ld          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036e0) {
            ctx->pc = 0x103720u;
            goto label_103720;
        }
    }
    ctx->pc = 0x1036E8u;
    // 0x1036e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1036e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1036ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1036ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1036f0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1036f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1036f4: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x1036f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x1036f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1036f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1036fc: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1036FCu;
    {
        const bool branch_taken_0x1036fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x103700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036FCu;
        // 0x103700: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036fc) {
            ctx->pc = 0x103748u;
            goto label_103748;
        }
    }
    ctx->pc = 0x103704u;
label_103704:
    // 0x103704: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x103704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_103708:
    // 0x103708: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x103708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x10370c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103710:
    // 0x103710: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x103710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x103714: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x103714u;
    {
        const bool branch_taken_0x103714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103714u;
        // 0x103718: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103714) {
            ctx->pc = 0x10374Cu;
            goto label_10374c;
        }
    }
    ctx->pc = 0x10371Cu;
label_10371c:
    // 0x10371c: 0xde0202f0  ld          $v0, 0x2F0($s0)
    ctx->pc = 0x10371cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
label_103720:
    // 0x103720: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x103720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x103724: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x103724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x103728: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10372c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10372Cu;
    {
        const bool branch_taken_0x10372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10372Cu;
        // 0x103730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10372c) {
            ctx->pc = 0x103748u;
            goto label_103748;
        }
    }
    ctx->pc = 0x103734u;
    // 0x103734: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x103734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x103738: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x103738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10373c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10373cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x103740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103740u;
    {
        const bool branch_taken_0x103740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103740u;
        // 0x103744: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103740) {
            ctx->pc = 0x10374Cu;
            goto label_10374c;
        }
    }
    ctx->pc = 0x103748u;
label_103748:
    // 0x103748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10374c:
    // 0x10374c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10374cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103754: 0x3e00008  jr          $ra
    ctx->pc = 0x103754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103754u;
        // 0x103758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10375Cu;
    // 0x10375c: 0x0  nop
    ctx->pc = 0x10375cu;
    // NOP
    ctx->pc = 0x103760u;
}
