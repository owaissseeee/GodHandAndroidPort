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

// Function: func_002112F0
// Address: 0x2112f0 - 0x211c08
void func_002112F0_0x2112f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002112F0_0x2112f0");
#endif

    switch (ctx->pc) {
        case 0x211364u: goto label_211364;
        case 0x21147cu: goto label_21147c;
        case 0x211558u: goto label_211558;
        case 0x211584u: goto label_211584;
        case 0x2115b8u: goto label_2115b8;
        case 0x2115c4u: goto label_2115c4;
        case 0x2115d0u: goto label_2115d0;
        case 0x2115d8u: goto label_2115d8;
        case 0x2115f4u: goto label_2115f4;
        case 0x211640u: goto label_211640;
        case 0x21164cu: goto label_21164c;
        case 0x211668u: goto label_211668;
        case 0x2118d8u: goto label_2118d8;
        case 0x2119b4u: goto label_2119b4;
        case 0x2119c8u: goto label_2119c8;
        case 0x2119e8u: goto label_2119e8;
        case 0x211a28u: goto label_211a28;
        case 0x211a38u: goto label_211a38;
        case 0x211a40u: goto label_211a40;
        case 0x211a5cu: goto label_211a5c;
        case 0x211af4u: goto label_211af4;
        case 0x211b04u: goto label_211b04;
        case 0x211b10u: goto label_211b10;
        case 0x211b6cu: goto label_211b6c;
        case 0x211bbcu: goto label_211bbc;
        case 0x211be4u: goto label_211be4;
        default: break;
    }

    ctx->pc = 0x2112f0u;

    // 0x2112f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2112f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2112f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2112f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2112f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2112fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2112fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x211300: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211304: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x211304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x211308: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x211308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x21130c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211310: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x211310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x211314: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x211314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x211318: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x211318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x21131c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x21131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x211320: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x211320u;
    {
        const bool branch_taken_0x211320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x211324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211320u;
        // 0x211324: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211320) {
            ctx->pc = 0x21156Cu;
            goto label_21156c;
        }
    }
    ctx->pc = 0x211328u;
    // 0x211328: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x211328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21132c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21132Cu;
    {
        const bool branch_taken_0x21132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21132c) {
            ctx->pc = 0x211330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21132Cu;
            // 0x211330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211344u;
            goto label_211344;
        }
    }
    ctx->pc = 0x211334u;
    // 0x211334: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211334u;
    {
        const bool branch_taken_0x211334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211334) {
            ctx->pc = 0x21135Cu;
            goto label_21135c;
        }
    }
    ctx->pc = 0x21133Cu;
    // 0x21133c: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x21133Cu;
    {
        const bool branch_taken_0x21133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21133Cu;
        // 0x211340: 0xc6410618  lwc1        $f1, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21133c) {
            ctx->pc = 0x211A9Cu;
            goto label_211a9c;
        }
    }
    ctx->pc = 0x211344u;
label_211344:
    // 0x211344: 0x108200bc  beq         $a0, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x211344u;
    {
        const bool branch_taken_0x211344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x211348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211344u;
        // 0x211348: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211344) {
            ctx->pc = 0x211638u;
            goto label_211638;
        }
    }
    ctx->pc = 0x21134Cu;
    // 0x21134c: 0x1082019c  beq         $a0, $v0, . + 4 + (0x19C << 2)
    ctx->pc = 0x21134Cu;
    {
        const bool branch_taken_0x21134c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21134c) {
            ctx->pc = 0x2119C0u;
            goto label_2119c0;
        }
    }
    ctx->pc = 0x211354u;
    // 0x211354: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x211354u;
    {
        const bool branch_taken_0x211354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211354u;
        // 0x211358: 0xc6410618  lwc1        $f1, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211354) {
            ctx->pc = 0x211A9Cu;
            goto label_211a9c;
        }
    }
    ctx->pc = 0x21135Cu;
label_21135c:
    // 0x21135c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x21135Cu;
    SET_GPR_U32(ctx, 31, 0x211364u);
    ctx->pc = 0x211360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21135Cu;
    // 0x211360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x21135Cu, 0x211364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211364u;
label_211364:
    // 0x211364: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x211364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x211368: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x211368u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21136c: 0x2463fdfe  addiu       $v1, $v1, -0x202
    ctx->pc = 0x21136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
    // 0x211370: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x211370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x211374: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211374u;
    {
        const bool branch_taken_0x211374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211374u;
        // 0x211378: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211374) {
            ctx->pc = 0x211394u;
            goto label_211394;
        }
    }
    ctx->pc = 0x21137Cu;
    // 0x21137c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21137cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211380: 0x24424670  addiu       $v0, $v0, 0x4670
    ctx->pc = 0x211380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18032));
    // 0x211384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211388: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21138c: 0x800008  jr          $a0
    ctx->pc = 0x21138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211394u: goto label_211394;
            case 0x2113A4u: goto label_2113a4;
            case 0x2113B4u: goto label_2113b4;
            case 0x2113C4u: goto label_2113c4;
            case 0x2113D4u: goto label_2113d4;
            case 0x2113E4u: goto label_2113e4;
            case 0x2113F4u: goto label_2113f4;
            case 0x211404u: goto label_211404;
            case 0x211414u: goto label_211414;
            case 0x211424u: goto label_211424;
            case 0x211434u: goto label_211434;
            case 0x211444u: goto label_211444;
            case 0x211454u: goto label_211454;
            case 0x211484u: goto label_211484;
            case 0x211494u: goto label_211494;
            case 0x2114A4u: goto label_2114a4;
            case 0x2114B4u: goto label_2114b4;
            case 0x2114C4u: goto label_2114c4;
            case 0x2114D4u: goto label_2114d4;
            case 0x2114E4u: goto label_2114e4;
            case 0x2114F4u: goto label_2114f4;
            case 0x211504u: goto label_211504;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21138Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x211394u;
label_211394:
    // 0x211394: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211398: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x211398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x21139c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x21139Cu;
    {
        const bool branch_taken_0x21139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21139Cu;
        // 0x2113a0: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21139c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2113A4u;
label_2113a4:
    // 0x2113a4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2113a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2113a8: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x2113a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
    // 0x2113ac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2113ACu;
    {
        const bool branch_taken_0x2113ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113ACu;
        // 0x2113b0: 0x8c44064c  lw          $a0, 0x64C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113ac) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2113B4u;
label_2113b4:
    // 0x2113b4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2113b8: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x2113b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
    // 0x2113bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2113BCu;
    {
        const bool branch_taken_0x2113bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113BCu;
        // 0x2113c0: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113bc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2113C4u;
label_2113c4:
    // 0x2113c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2113c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2113c8: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x2113c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
    // 0x2113cc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2113CCu;
    {
        const bool branch_taken_0x2113cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113CCu;
        // 0x2113d0: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113cc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2113D4u;
label_2113d4:
    // 0x2113d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2113d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2113d8: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x2113d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x2113dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2113DCu;
    {
        const bool branch_taken_0x2113dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113DCu;
        // 0x2113e0: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113dc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2113E4u;
label_2113e4:
    // 0x2113e4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2113e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2113e8: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x2113e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x2113ec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2113ECu;
    {
        const bool branch_taken_0x2113ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113ECu;
        // 0x2113f0: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113ec) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2113F4u;
label_2113f4:
    // 0x2113f4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2113f8: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x2113f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
    // 0x2113fc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2113FCu;
    {
        const bool branch_taken_0x2113fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113FCu;
        // 0x211400: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113fc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211404u;
label_211404:
    // 0x211404: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211408: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x211408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x21140c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x21140Cu;
    {
        const bool branch_taken_0x21140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21140Cu;
        // 0x211410: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21140c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211414u;
label_211414:
    // 0x211414: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211418: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x211418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x21141c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21141Cu;
    {
        const bool branch_taken_0x21141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21141Cu;
        // 0x211420: 0x8c441fb4  lw          $a0, 0x1FB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21141c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211424u;
label_211424:
    // 0x211424: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211428: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x211428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x21142c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x21142Cu;
    {
        const bool branch_taken_0x21142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21142Cu;
        // 0x211430: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21142c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211434u;
label_211434:
    // 0x211434: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211438: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x211438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x21143c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x21143Cu;
    {
        const bool branch_taken_0x21143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21143Cu;
        // 0x211440: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21143c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211444u;
label_211444:
    // 0x211444: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211448: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x211448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x21144c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x21144Cu;
    {
        const bool branch_taken_0x21144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21144Cu;
        // 0x211450: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21144c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211454u;
label_211454:
    // 0x211454: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211458: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x211458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x21145c: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x21145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x211460: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x211460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x211464: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211468: 0x10e0002b  beqz        $a3, . + 4 + (0x2B << 2)
    ctx->pc = 0x211468u;
    {
        const bool branch_taken_0x211468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211468u;
        // 0x21146c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211468) {
            ctx->pc = 0x211518u;
            goto label_211518;
        }
    }
    ctx->pc = 0x211470u;
    // 0x211470: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x211470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211474: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x211474u;
    SET_GPR_U32(ctx, 31, 0x21147Cu);
    ctx->pc = 0x211478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211474u;
    // 0x211478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x211474u, 0x21147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21147Cu;
label_21147c:
    // 0x21147c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x21147Cu;
    {
        const bool branch_taken_0x21147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21147Cu;
        // 0x211480: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21147c) {
            ctx->pc = 0x21151Cu;
            goto label_21151c;
        }
    }
    ctx->pc = 0x211484u;
label_211484:
    // 0x211484: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211488: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x211488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x21148c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x21148Cu;
    {
        const bool branch_taken_0x21148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21148Cu;
        // 0x211490: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21148c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211494u;
label_211494:
    // 0x211494: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211498: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x211498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x21149c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21149Cu;
    {
        const bool branch_taken_0x21149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21149Cu;
        // 0x2114a0: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21149c) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114A4u;
label_2114a4:
    // 0x2114a4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2114a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2114a8: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x2114a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x2114ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2114ACu;
    {
        const bool branch_taken_0x2114ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114ACu;
        // 0x2114b0: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114ac) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114B4u;
label_2114b4:
    // 0x2114b4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2114b8: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x2114b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x2114bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2114BCu;
    {
        const bool branch_taken_0x2114bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114BCu;
        // 0x2114c0: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114bc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114C4u;
label_2114c4:
    // 0x2114c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2114c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2114c8: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x2114c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x2114cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2114CCu;
    {
        const bool branch_taken_0x2114cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114CCu;
        // 0x2114d0: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114cc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114D4u;
label_2114d4:
    // 0x2114d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2114d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2114d8: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x2114d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x2114dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2114DCu;
    {
        const bool branch_taken_0x2114dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114DCu;
        // 0x2114e0: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114dc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114E4u;
label_2114e4:
    // 0x2114e4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2114e8: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x2114e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x2114ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2114ECu;
    {
        const bool branch_taken_0x2114ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114ECu;
        // 0x2114f0: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114ec) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114F4u;
label_2114f4:
    // 0x2114f4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2114f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2114f8: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x2114f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x2114fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2114FCu;
    {
        const bool branch_taken_0x2114fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114FCu;
        // 0x211500: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114fc) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x211504u;
label_211504:
    // 0x211504: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211508: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x211508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
    // 0x21150c: 0x8c442278  lw          $a0, 0x2278($v0)
    ctx->pc = 0x21150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
label_211510:
    // 0x211510: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211514: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211518:
    // 0x211518: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_21151c:
    // 0x21151c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21151Cu;
    {
        const bool branch_taken_0x21151c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21151c) {
            ctx->pc = 0x211538u;
            goto label_211538;
        }
    }
    ctx->pc = 0x211524u;
    // 0x211524: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211528: 0x8c43044c  lw          $v1, 0x44C($v0)
    ctx->pc = 0x211528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
    // 0x21152c: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x21152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x211530: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211534: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x211534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211538:
    // 0x211538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x211538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21153c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21153cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211540: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211544: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x211544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21154c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x211550: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x211550u;
    SET_GPR_U32(ctx, 31, 0x211558u);
    ctx->pc = 0x211554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211550u;
    // 0x211554: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x211550u, 0x211558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211558u;
label_211558:
    // 0x211558: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x211558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x21155c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x211560: 0xae4305f0  sw          $v1, 0x5F0($s2)
    ctx->pc = 0x211560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
    // 0x211564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x211564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x211568: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x211568u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_21156c:
    // 0x21156c: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x21156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x211570: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211570u;
    {
        const bool branch_taken_0x211570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211570u;
        // 0x211574: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211570) {
            ctx->pc = 0x21158Cu;
            goto label_21158c;
        }
    }
    ctx->pc = 0x211578u;
    // 0x211578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21157c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x21157Cu;
    SET_GPR_U32(ctx, 31, 0x211584u);
    ctx->pc = 0x211580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21157Cu;
    // 0x211580: 0xae4205f0  sw          $v0, 0x5F0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x21157Cu, 0x211584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211584u;
label_211584:
    // 0x211584: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x211584u;
    {
        const bool branch_taken_0x211584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211584) {
            ctx->pc = 0x2115D0u;
            goto label_2115d0;
        }
    }
    ctx->pc = 0x21158Cu;
label_21158c:
    // 0x21158c: 0xc641024c  lwc1        $f1, 0x24C($s2)
    ctx->pc = 0x21158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211594: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x211598: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21159c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x21159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2115a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2115A0u;
    {
        const bool branch_taken_0x2115a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2115A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115A0u;
        // 0x2115a4: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115a0) {
            ctx->pc = 0x2115D0u;
            goto label_2115d0;
        }
    }
    ctx->pc = 0x2115A8u;
    // 0x2115a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2115a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2115ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2115acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2115b0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2115B0u;
    SET_GPR_U32(ctx, 31, 0x2115B8u);
    ctx->pc = 0x2115B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115B0u;
    // 0x2115b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2115B0u, 0x2115B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115B8u;
label_2115b8:
    // 0x2115b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2115b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2115BCu;
    SET_GPR_U32(ctx, 31, 0x2115C4u);
    ctx->pc = 0x2115C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115BCu;
    // 0x2115c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2115BCu, 0x2115C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115C4u;
label_2115c4:
    // 0x2115c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2115c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2115c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2115C8u;
    SET_GPR_U32(ctx, 31, 0x2115D0u);
    ctx->pc = 0x2115CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115C8u;
    // 0x2115cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2115C8u, 0x2115D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115D0u;
label_2115d0:
    // 0x2115d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2115D0u;
    SET_GPR_U32(ctx, 31, 0x2115D8u);
    ctx->pc = 0x2115D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115D0u;
    // 0x2115d4: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2115D0u, 0x2115D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115D8u;
label_2115d8:
    // 0x2115d8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2115d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2115dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2115dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2115e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2115e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2115e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2115e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2115e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2115ec: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2115ECu;
    SET_GPR_U32(ctx, 31, 0x2115F4u);
    ctx->pc = 0x2115F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115ECu;
    // 0x2115f0: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2115ECu, 0x2115F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115F4u;
label_2115f4:
    // 0x2115f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2115f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2115f8: 0x0  nop
    ctx->pc = 0x2115f8u;
    // NOP
    // 0x2115fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2115fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211600: 0x0  nop
    ctx->pc = 0x211600u;
    // NOP
    // 0x211604: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x211604u;
    {
        const bool branch_taken_0x211604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211604u;
        // 0x211608: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211604) {
            ctx->pc = 0x211610u;
            goto label_211610;
        }
    }
    ctx->pc = 0x21160Cu;
    // 0x21160c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x21160cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_211610:
    // 0x211610: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x211610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x211614: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x211614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x211618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21161c: 0x0  nop
    ctx->pc = 0x21161cu;
    // NOP
    // 0x211620: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x211620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211624: 0x0  nop
    ctx->pc = 0x211624u;
    // NOP
    // 0x211628: 0x4500011b  bc1f        . + 4 + (0x11B << 2)
    ctx->pc = 0x211628u;
    {
        const bool branch_taken_0x211628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211628u;
        // 0x21162c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211628) {
            ctx->pc = 0x211A98u;
            goto label_211a98;
        }
    }
    ctx->pc = 0x211630u;
    // 0x211630: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x211630u;
    {
        const bool branch_taken_0x211630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211630u;
        // 0x211634: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211630) {
            ctx->pc = 0x211A98u;
            goto label_211a98;
        }
    }
    ctx->pc = 0x211638u;
label_211638:
    // 0x211638: 0xc09d91a  jal         func_276468
    ctx->pc = 0x211638u;
    SET_GPR_U32(ctx, 31, 0x211640u);
    ctx->pc = 0x21163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211638u;
    // 0x21163c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x211638u, 0x211640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211640u;
label_211640:
    // 0x211640: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x211640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x211644: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x211644u;
    SET_GPR_U32(ctx, 31, 0x21164Cu);
    ctx->pc = 0x211648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211644u;
    // 0x211648: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x211644u, 0x21164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21164Cu;
label_21164c:
    // 0x21164c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x211650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211654: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x211658: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x211658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x21165c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21165cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x211660: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x211660u;
    SET_GPR_U32(ctx, 31, 0x211668u);
    ctx->pc = 0x211664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211660u;
    // 0x211664: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x211660u, 0x211668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211668u;
label_211668:
    // 0x211668: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x211668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21166c: 0x0  nop
    ctx->pc = 0x21166cu;
    // NOP
    // 0x211670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211674: 0x0  nop
    ctx->pc = 0x211674u;
    // NOP
    // 0x211678: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x211678u;
    {
        const bool branch_taken_0x211678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211678u;
        // 0x21167c: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211678) {
            ctx->pc = 0x2117D8u;
            goto label_2117d8;
        }
    }
    ctx->pc = 0x211680u;
    // 0x211680: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x211680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x211684: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x211684u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x211688: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x211688u;
    {
        const bool branch_taken_0x211688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211688u;
        // 0x21168c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211688) {
            ctx->pc = 0x2116A8u;
            goto label_2116a8;
        }
    }
    ctx->pc = 0x211690u;
    // 0x211690: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x211690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x211694: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x211694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x211698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21169c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21169cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2116a0: 0x800008  jr          $a0
    ctx->pc = 0x2116A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2116A8u: goto label_2116a8;
            case 0x2116B8u: goto label_2116b8;
            case 0x2116C8u: goto label_2116c8;
            case 0x2116D8u: goto label_2116d8;
            case 0x2116E8u: goto label_2116e8;
            case 0x2116F8u: goto label_2116f8;
            case 0x211708u: goto label_211708;
            case 0x211718u: goto label_211718;
            case 0x211728u: goto label_211728;
            case 0x211738u: goto label_211738;
            case 0x211748u: goto label_211748;
            case 0x211758u: goto label_211758;
            case 0x211768u: goto label_211768;
            case 0x211778u: goto label_211778;
            case 0x211788u: goto label_211788;
            case 0x211798u: goto label_211798;
            case 0x2117A8u: goto label_2117a8;
            case 0x2117B8u: goto label_2117b8;
            case 0x2117C8u: goto label_2117c8;
            case 0x2118B0u: goto label_2118b0;
            case 0x211960u: goto label_211960;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2116A8u;
label_2116a8:
    // 0x2116a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2116ac: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2116b0: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2116B0u;
    {
        const bool branch_taken_0x2116b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116B0u;
        // 0x2116b4: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116b0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2116B8u;
label_2116b8:
    // 0x2116b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2116b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2116bc: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x2116c0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2116C0u;
    {
        const bool branch_taken_0x2116c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116C0u;
        // 0x2116c4: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116c0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2116C8u;
label_2116c8:
    // 0x2116c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2116c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2116cc: 0x8c4335d4  lw          $v1, 0x35D4($v0)
    ctx->pc = 0x2116ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13780)));
    // 0x2116d0: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2116D0u;
    {
        const bool branch_taken_0x2116d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116D0u;
        // 0x2116d4: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116d0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2116D8u;
label_2116d8:
    // 0x2116d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2116d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2116dc: 0x8c4325dc  lw          $v1, 0x25DC($v0)
    ctx->pc = 0x2116dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9692)));
    // 0x2116e0: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2116E0u;
    {
        const bool branch_taken_0x2116e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116E0u;
        // 0x2116e4: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116e0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2116E8u;
label_2116e8:
    // 0x2116e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2116e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2116ec: 0x8c4310b0  lw          $v1, 0x10B0($v0)
    ctx->pc = 0x2116ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4272)));
    // 0x2116f0: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2116F0u;
    {
        const bool branch_taken_0x2116f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116F0u;
        // 0x2116f4: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116f0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2116F8u;
label_2116f8:
    // 0x2116f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2116f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2116fc: 0x8c433c90  lw          $v1, 0x3C90($v0)
    ctx->pc = 0x2116fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15504)));
    // 0x211700: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x211700u;
    {
        const bool branch_taken_0x211700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211700u;
        // 0x211704: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211700) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211708u;
label_211708:
    // 0x211708: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21170c: 0x8c430830  lw          $v1, 0x830($v0)
    ctx->pc = 0x21170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
    // 0x211710: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x211710u;
    {
        const bool branch_taken_0x211710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211710u;
        // 0x211714: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211710) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211718u;
label_211718:
    // 0x211718: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21171c: 0x8c431fb8  lw          $v1, 0x1FB8($v0)
    ctx->pc = 0x21171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8120)));
    // 0x211720: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x211720u;
    {
        const bool branch_taken_0x211720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211720u;
        // 0x211724: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211720) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211728u;
label_211728:
    // 0x211728: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21172c: 0x8c4318f8  lw          $v1, 0x18F8($v0)
    ctx->pc = 0x21172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6392)));
    // 0x211730: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x211730u;
    {
        const bool branch_taken_0x211730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211730u;
        // 0x211734: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211730) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211738u;
label_211738:
    // 0x211738: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21173c: 0x8c433040  lw          $v1, 0x3040($v0)
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12352)));
    // 0x211740: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x211740u;
    {
        const bool branch_taken_0x211740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211740u;
        // 0x211744: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211740) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211748u;
label_211748:
    // 0x211748: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21174c: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x21174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
    // 0x211750: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x211750u;
    {
        const bool branch_taken_0x211750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211750u;
        // 0x211754: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211750) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211758u;
label_211758:
    // 0x211758: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21175c: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x21175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x211760: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x211760u;
    {
        const bool branch_taken_0x211760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211760u;
        // 0x211764: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211760) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211768u;
label_211768:
    // 0x211768: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21176c: 0x8c431eb4  lw          $v1, 0x1EB4($v0)
    ctx->pc = 0x21176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7860)));
    // 0x211770: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x211770u;
    {
        const bool branch_taken_0x211770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211770u;
        // 0x211774: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211770) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211778u;
label_211778:
    // 0x211778: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21177c: 0x8c431568  lw          $v1, 0x1568($v0)
    ctx->pc = 0x21177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5480)));
    // 0x211780: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x211780u;
    {
        const bool branch_taken_0x211780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211780u;
        // 0x211784: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211780) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211788u;
label_211788:
    // 0x211788: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21178c: 0x8c433a08  lw          $v1, 0x3A08($v0)
    ctx->pc = 0x21178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14856)));
    // 0x211790: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x211790u;
    {
        const bool branch_taken_0x211790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211790u;
        // 0x211794: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211790) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211798u;
label_211798:
    // 0x211798: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21179c: 0x8c433420  lw          $v1, 0x3420($v0)
    ctx->pc = 0x21179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13344)));
    // 0x2117a0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2117A0u;
    {
        const bool branch_taken_0x2117a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117A0u;
        // 0x2117a4: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117a0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2117A8u;
label_2117a8:
    // 0x2117a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2117ac: 0x8c430d18  lw          $v1, 0xD18($v0)
    ctx->pc = 0x2117acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3352)));
    // 0x2117b0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2117B0u;
    {
        const bool branch_taken_0x2117b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117B0u;
        // 0x2117b4: 0x8c440d1c  lw          $a0, 0xD1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117b0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2117B8u;
label_2117b8:
    // 0x2117b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2117b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2117bc: 0x8c431bc8  lw          $v1, 0x1BC8($v0)
    ctx->pc = 0x2117bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7112)));
    // 0x2117c0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2117C0u;
    {
        const bool branch_taken_0x2117c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117C0u;
        // 0x2117c4: 0x8c441bcc  lw          $a0, 0x1BCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117c0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2117C8u;
label_2117c8:
    // 0x2117c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2117c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2117cc: 0x8c432d48  lw          $v1, 0x2D48($v0)
    ctx->pc = 0x2117ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11592)));
    // 0x2117d0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2117D0u;
    {
        const bool branch_taken_0x2117d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117D0u;
        // 0x2117d4: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117d0) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2117D8u;
label_2117d8:
    // 0x2117d8: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x2117d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x2117dc: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x2117dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x2117e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2117E0u;
    {
        const bool branch_taken_0x2117e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117E0u;
        // 0x2117e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117e0) {
            ctx->pc = 0x211800u;
            goto label_211800;
        }
    }
    ctx->pc = 0x2117E8u;
    // 0x2117e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2117e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2117ec: 0x24424a70  addiu       $v0, $v0, 0x4A70
    ctx->pc = 0x2117ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19056));
    // 0x2117f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2117f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2117f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2117f8: 0x800008  jr          $a0
    ctx->pc = 0x2117F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211800u: goto label_211800;
            case 0x211810u: goto label_211810;
            case 0x211820u: goto label_211820;
            case 0x211830u: goto label_211830;
            case 0x211840u: goto label_211840;
            case 0x211850u: goto label_211850;
            case 0x211860u: goto label_211860;
            case 0x211870u: goto label_211870;
            case 0x211880u: goto label_211880;
            case 0x211890u: goto label_211890;
            case 0x2118A0u: goto label_2118a0;
            case 0x2118B0u: goto label_2118b0;
            case 0x2118E0u: goto label_2118e0;
            case 0x2118F0u: goto label_2118f0;
            case 0x211900u: goto label_211900;
            case 0x211910u: goto label_211910;
            case 0x211920u: goto label_211920;
            case 0x211930u: goto label_211930;
            case 0x211940u: goto label_211940;
            case 0x211950u: goto label_211950;
            case 0x211960u: goto label_211960;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x211800u;
label_211800:
    // 0x211800: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211804: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x211804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x211808: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x211808u;
    {
        const bool branch_taken_0x211808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211808u;
        // 0x21180c: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211808) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211810u;
label_211810:
    // 0x211810: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211814: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x211814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x211818: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x211818u;
    {
        const bool branch_taken_0x211818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211818u;
        // 0x21181c: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211818) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211820u;
label_211820:
    // 0x211820: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211824: 0x8c4335d4  lw          $v1, 0x35D4($v0)
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13780)));
    // 0x211828: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x211828u;
    {
        const bool branch_taken_0x211828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211828u;
        // 0x21182c: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211828) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211830u;
label_211830:
    // 0x211830: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211834: 0x8c4325dc  lw          $v1, 0x25DC($v0)
    ctx->pc = 0x211834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9692)));
    // 0x211838: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x211838u;
    {
        const bool branch_taken_0x211838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211838u;
        // 0x21183c: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211838) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211840u;
label_211840:
    // 0x211840: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211844: 0x8c4310b0  lw          $v1, 0x10B0($v0)
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4272)));
    // 0x211848: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x211848u;
    {
        const bool branch_taken_0x211848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211848u;
        // 0x21184c: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211848) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211850u;
label_211850:
    // 0x211850: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211854: 0x8c433c90  lw          $v1, 0x3C90($v0)
    ctx->pc = 0x211854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15504)));
    // 0x211858: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x211858u;
    {
        const bool branch_taken_0x211858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211858u;
        // 0x21185c: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211858) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211860u;
label_211860:
    // 0x211860: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211864: 0x8c430830  lw          $v1, 0x830($v0)
    ctx->pc = 0x211864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
    // 0x211868: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x211868u;
    {
        const bool branch_taken_0x211868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211868u;
        // 0x21186c: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211868) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211870u;
label_211870:
    // 0x211870: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211874: 0x8c431fb8  lw          $v1, 0x1FB8($v0)
    ctx->pc = 0x211874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8120)));
    // 0x211878: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x211878u;
    {
        const bool branch_taken_0x211878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211878u;
        // 0x21187c: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211878) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211880u;
label_211880:
    // 0x211880: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211884: 0x8c4318f8  lw          $v1, 0x18F8($v0)
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6392)));
    // 0x211888: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x211888u;
    {
        const bool branch_taken_0x211888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211888u;
        // 0x21188c: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211888) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211890u;
label_211890:
    // 0x211890: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211894: 0x8c433040  lw          $v1, 0x3040($v0)
    ctx->pc = 0x211894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12352)));
    // 0x211898: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x211898u;
    {
        const bool branch_taken_0x211898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211898u;
        // 0x21189c: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211898) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2118A0u;
label_2118a0:
    // 0x2118a0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2118a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2118a4: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
    // 0x2118a8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2118A8u;
    {
        const bool branch_taken_0x2118a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A8u;
        // 0x2118ac: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118a8) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2118B0u;
label_2118b0:
    // 0x2118b0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2118b4: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x2118b8: 0x8c433734  lw          $v1, 0x3734($v0)
    ctx->pc = 0x2118b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14132)));
    // 0x2118bc: 0x8c443738  lw          $a0, 0x3738($v0)
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14136)));
    // 0x2118c0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2118c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2118c4: 0x10e0002b  beqz        $a3, . + 4 + (0x2B << 2)
    ctx->pc = 0x2118C4u;
    {
        const bool branch_taken_0x2118c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118C4u;
        // 0x2118c8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118c4) {
            ctx->pc = 0x211974u;
            goto label_211974;
        }
    }
    ctx->pc = 0x2118CCu;
    // 0x2118cc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2118ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118d0: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2118D0u;
    SET_GPR_U32(ctx, 31, 0x2118D8u);
    ctx->pc = 0x2118D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118D0u;
    // 0x2118d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2118D0u, 0x2118D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118D8u;
label_2118d8:
    // 0x2118d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2118D8u;
    {
        const bool branch_taken_0x2118d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118D8u;
        // 0x2118dc: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118d8) {
            ctx->pc = 0x211978u;
            goto label_211978;
        }
    }
    ctx->pc = 0x2118E0u;
label_2118e0:
    // 0x2118e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2118e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2118e4: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x2118e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x2118e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2118E8u;
    {
        const bool branch_taken_0x2118e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E8u;
        // 0x2118ec: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118e8) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x2118F0u;
label_2118f0:
    // 0x2118f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2118f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2118f4: 0x8c431eb4  lw          $v1, 0x1EB4($v0)
    ctx->pc = 0x2118f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7860)));
    // 0x2118f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2118F8u;
    {
        const bool branch_taken_0x2118f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F8u;
        // 0x2118fc: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118f8) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211900u;
label_211900:
    // 0x211900: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211904: 0x8c431568  lw          $v1, 0x1568($v0)
    ctx->pc = 0x211904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5480)));
    // 0x211908: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x211908u;
    {
        const bool branch_taken_0x211908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211908u;
        // 0x21190c: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211908) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211910u;
label_211910:
    // 0x211910: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211914: 0x8c433a08  lw          $v1, 0x3A08($v0)
    ctx->pc = 0x211914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14856)));
    // 0x211918: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x211918u;
    {
        const bool branch_taken_0x211918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211918u;
        // 0x21191c: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211918) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211920u;
label_211920:
    // 0x211920: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211924: 0x8c433420  lw          $v1, 0x3420($v0)
    ctx->pc = 0x211924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13344)));
    // 0x211928: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x211928u;
    {
        const bool branch_taken_0x211928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211928u;
        // 0x21192c: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211928) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211930u;
label_211930:
    // 0x211930: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211934: 0x8c430d20  lw          $v1, 0xD20($v0)
    ctx->pc = 0x211934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3360)));
    // 0x211938: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x211938u;
    {
        const bool branch_taken_0x211938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211938u;
        // 0x21193c: 0x8c440d24  lw          $a0, 0xD24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211938) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211940u;
label_211940:
    // 0x211940: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211944: 0x8c431bc8  lw          $v1, 0x1BC8($v0)
    ctx->pc = 0x211944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7112)));
    // 0x211948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211948u;
    {
        const bool branch_taken_0x211948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211948u;
        // 0x21194c: 0x8c441bcc  lw          $a0, 0x1BCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211948) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211950u;
label_211950:
    // 0x211950: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211954: 0x8c432d48  lw          $v1, 0x2D48($v0)
    ctx->pc = 0x211954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11592)));
    // 0x211958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x211958u;
    {
        const bool branch_taken_0x211958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211958u;
        // 0x21195c: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211958) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211960u;
label_211960:
    // 0x211960: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211964: 0x8c43227c  lw          $v1, 0x227C($v0)
    ctx->pc = 0x211964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8828)));
    // 0x211968: 0x8c442280  lw          $a0, 0x2280($v0)
    ctx->pc = 0x211968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8832)));
label_21196c:
    // 0x21196c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x21196cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211970: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x211970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211974:
    // 0x211974: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x211974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_211978:
    // 0x211978: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211978u;
    {
        const bool branch_taken_0x211978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211978) {
            ctx->pc = 0x211994u;
            goto label_211994;
        }
    }
    ctx->pc = 0x211980u;
    // 0x211980: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x211984: 0x8c430454  lw          $v1, 0x454($v0)
    ctx->pc = 0x211984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1108)));
    // 0x211988: 0x8c440458  lw          $a0, 0x458($v0)
    ctx->pc = 0x211988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1112)));
    // 0x21198c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x21198cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211990: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x211990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211994:
    // 0x211994: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x211994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21199c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21199cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2119a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2119a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119a8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2119a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2119ac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2119ACu;
    SET_GPR_U32(ctx, 31, 0x2119B4u);
    ctx->pc = 0x2119B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119ACu;
    // 0x2119b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2119ACu, 0x2119B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119B4u;
label_2119b4:
    // 0x2119b4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2119b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2119b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2119bc: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2119bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2119c0:
    // 0x2119c0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2119C0u;
    SET_GPR_U32(ctx, 31, 0x2119C8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2119C0u, 0x2119C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119C8u;
label_2119c8:
    // 0x2119c8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2119c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2119cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2119ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119d0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2119d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2119d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2119d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2119d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2119d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2119dc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2119dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2119e0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2119E0u;
    SET_GPR_U32(ctx, 31, 0x2119E8u);
    ctx->pc = 0x2119E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119E0u;
    // 0x2119e4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2119E0u, 0x2119E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119E8u;
label_2119e8:
    // 0x2119e8: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x2119e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2119ec: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2119ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x2119f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2119f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2119f4: 0x0  nop
    ctx->pc = 0x2119f4u;
    // NOP
    // 0x2119f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2119f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2119fc: 0x0  nop
    ctx->pc = 0x2119fcu;
    // NOP
    // 0x211a00: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x211A00u;
    {
        const bool branch_taken_0x211a00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A00u;
        // 0x211a04: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a00) {
            ctx->pc = 0x211A30u;
            goto label_211a30;
        }
    }
    ctx->pc = 0x211A08u;
    // 0x211a08: 0x8e4317d0  lw          $v1, 0x17D0($s2)
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x211a0c: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x211a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
    // 0x211a10: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x211a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x211a14: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x211a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x211a18: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x211A18u;
    {
        const bool branch_taken_0x211a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x211a18) {
            ctx->pc = 0x211A38u;
            goto label_211a38;
        }
    }
    ctx->pc = 0x211A20u;
    // 0x211a20: 0xc055f06  jal         func_157C18
    ctx->pc = 0x211A20u;
    SET_GPR_U32(ctx, 31, 0x211A28u);
    ctx->pc = 0x211A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A20u;
    // 0x211a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x211A20u, 0x211A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A28u;
label_211a28:
    // 0x211a28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211A28u;
    {
        const bool branch_taken_0x211a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a28) {
            ctx->pc = 0x211A38u;
            goto label_211a38;
        }
    }
    ctx->pc = 0x211A30u;
label_211a30:
    // 0x211a30: 0xc055f06  jal         func_157C18
    ctx->pc = 0x211A30u;
    SET_GPR_U32(ctx, 31, 0x211A38u);
    ctx->pc = 0x211A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A30u;
    // 0x211a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x211A30u, 0x211A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A38u;
label_211a38:
    // 0x211a38: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x211A38u;
    SET_GPR_U32(ctx, 31, 0x211A40u);
    ctx->pc = 0x211A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A38u;
    // 0x211a3c: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x211A38u, 0x211A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A40u;
label_211a40:
    // 0x211a40: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x211a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x211a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a48: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x211a4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x211a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x211a50: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x211a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x211a54: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x211A54u;
    SET_GPR_U32(ctx, 31, 0x211A5Cu);
    ctx->pc = 0x211A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A54u;
    // 0x211a58: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x211A54u, 0x211A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A5Cu;
label_211a5c:
    // 0x211a5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x211a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211a60: 0x0  nop
    ctx->pc = 0x211a60u;
    // NOP
    // 0x211a64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211a68: 0x0  nop
    ctx->pc = 0x211a68u;
    // NOP
    // 0x211a6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x211A6Cu;
    {
        const bool branch_taken_0x211a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A6Cu;
        // 0x211a70: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a6c) {
            ctx->pc = 0x211A78u;
            goto label_211a78;
        }
    }
    ctx->pc = 0x211A74u;
    // 0x211a74: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x211a74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_211a78:
    // 0x211a78: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x211a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x211a7c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x211a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x211a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211a84: 0x0  nop
    ctx->pc = 0x211a84u;
    // NOP
    // 0x211a88: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x211a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211a8c: 0x0  nop
    ctx->pc = 0x211a8cu;
    // NOP
    // 0x211a90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x211A90u;
    {
        const bool branch_taken_0x211a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211a90) {
            ctx->pc = 0x211A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A90u;
            // 0x211a94: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A98u;
            goto label_211a98;
        }
    }
    ctx->pc = 0x211A98u;
label_211a98:
    // 0x211a98: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x211a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211a9c:
    // 0x211a9c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x211a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x211aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211aa4: 0x0  nop
    ctx->pc = 0x211aa4u;
    // NOP
    // 0x211aa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x211aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211aac: 0x0  nop
    ctx->pc = 0x211aacu;
    // NOP
    // 0x211ab0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x211AB0u;
    {
        const bool branch_taken_0x211ab0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x211AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AB0u;
        // 0x211ab4: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ab0) {
            ctx->pc = 0x211AC4u;
            goto label_211ac4;
        }
    }
    ctx->pc = 0x211AB8u;
    // 0x211ab8: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x211ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
    // 0x211abc: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x211ABCu;
    {
        const bool branch_taken_0x211abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211abc) {
            ctx->pc = 0x211AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211ABCu;
            // 0x211ac0: 0xc64116c0  lwc1        $f1, 0x16C0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x211BC4u;
            goto label_211bc4;
        }
    }
    ctx->pc = 0x211AC4u;
label_211ac4:
    // 0x211ac4: 0x8e4317d0  lw          $v1, 0x17D0($s2)
    ctx->pc = 0x211ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x211ac8: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x211ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
    // 0x211acc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x211accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x211ad0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x211ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x211ad4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x211AD4u;
    {
        const bool branch_taken_0x211ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x211ad4) {
            ctx->pc = 0x211AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211AD4u;
            // 0x211ad8: 0xc64116c0  lwc1        $f1, 0x16C0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x211BC4u;
            goto label_211bc4;
        }
    }
    ctx->pc = 0x211ADCu;
    // 0x211adc: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x211adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x211ae0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x211ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x211ae4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x211ae8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x211ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x211aec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x211AECu;
    SET_GPR_U32(ctx, 31, 0x211AF4u);
    ctx->pc = 0x211AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AECu;
    // 0x211af0: 0xae4316d4  sw          $v1, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x211AECu, 0x211AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AF4u;
label_211af4:
    // 0x211af4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x211af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x211af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211afc: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x211AFCu;
    SET_GPR_U32(ctx, 31, 0x211B04u);
    ctx->pc = 0x211B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AFCu;
    // 0x211b00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x211AFCu, 0x211B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B04u;
label_211b04:
    // 0x211b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b08: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x211B08u;
    SET_GPR_U32(ctx, 31, 0x211B10u);
    ctx->pc = 0x211B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B08u;
    // 0x211b0c: 0x264516a0  addiu       $a1, $s2, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x211B08u, 0x211B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B10u;
label_211b10:
    // 0x211b10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211B10u;
    {
        const bool branch_taken_0x211b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B10u;
        // 0x211b14: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b10) {
            ctx->pc = 0x211B24u;
            goto label_211b24;
        }
    }
    ctx->pc = 0x211B18u;
    // 0x211b18: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x211b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x211b1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x211b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x211b20: 0xae4216d4  sw          $v0, 0x16D4($s2)
    ctx->pc = 0x211b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
label_211b24:
    // 0x211b24: 0xc6410510  lwc1        $f1, 0x510($s2)
    ctx->pc = 0x211b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211b28: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x211b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x211b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b30: 0x0  nop
    ctx->pc = 0x211b30u;
    // NOP
    // 0x211b34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x211b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211b38: 0x0  nop
    ctx->pc = 0x211b38u;
    // NOP
    // 0x211b3c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x211B3Cu;
    {
        const bool branch_taken_0x211b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211b3c) {
            ctx->pc = 0x211B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211B3Cu;
            // 0x211b40: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211B54u;
            goto label_211b54;
        }
    }
    ctx->pc = 0x211B44u;
    // 0x211b44: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x211b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
    // 0x211b48: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x211B48u;
    {
        const bool branch_taken_0x211b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b48) {
            ctx->pc = 0x211B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211B48u;
            // 0x211b4c: 0xc64116c0  lwc1        $f1, 0x16C0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x211BC4u;
            goto label_211bc4;
        }
    }
    ctx->pc = 0x211B50u;
    // 0x211b50: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x211b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_211b54:
    // 0x211b54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x211b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x211b58: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x211b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x211b5c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x211b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x211b60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x211b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x211b64: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x211B64u;
    SET_GPR_U32(ctx, 31, 0x211B6Cu);
    ctx->pc = 0x211B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B64u;
    // 0x211b68: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x211B64u, 0x211B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B6Cu;
label_211b6c:
    // 0x211b6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211b70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x211B70u;
    {
        const bool branch_taken_0x211b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b70) {
            ctx->pc = 0x211BB4u;
            goto label_211bb4;
        }
    }
    ctx->pc = 0x211B78u;
    // 0x211b78: 0xc64116c0  lwc1        $f1, 0x16C0($s2)
    ctx->pc = 0x211b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b80: 0x0  nop
    ctx->pc = 0x211b80u;
    // NOP
    // 0x211b84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x211b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211b88: 0x0  nop
    ctx->pc = 0x211b88u;
    // NOP
    // 0x211b8c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x211B8Cu;
    {
        const bool branch_taken_0x211b8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211b8c) {
            ctx->pc = 0x211BB4u;
            goto label_211bb4;
        }
    }
    ctx->pc = 0x211B94u;
    // 0x211b94: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x211b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
    // 0x211b98: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211B98u;
    {
        const bool branch_taken_0x211b98 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x211B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B98u;
        // 0x211b9c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b98) {
            ctx->pc = 0x211BB4u;
            goto label_211bb4;
        }
    }
    ctx->pc = 0x211BA0u;
    // 0x211ba0: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x211ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x211ba4: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x211ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x211ba8: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x211ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x211bac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x211BACu;
    {
        const bool branch_taken_0x211bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BACu;
        // 0x211bb0: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bac) {
            ctx->pc = 0x211BE4u;
            goto label_211be4;
        }
    }
    ctx->pc = 0x211BB4u;
label_211bb4:
    // 0x211bb4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x211BB4u;
    SET_GPR_U32(ctx, 31, 0x211BBCu);
    ctx->pc = 0x211BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BB4u;
    // 0x211bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x211BB4u, 0x211BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BBCu;
label_211bbc:
    // 0x211bbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x211BBCu;
    {
        const bool branch_taken_0x211bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BBCu;
        // 0x211bc0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bbc) {
            ctx->pc = 0x211BE8u;
            goto label_211be8;
        }
    }
    ctx->pc = 0x211BC4u;
label_211bc4:
    // 0x211bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211bc8: 0x0  nop
    ctx->pc = 0x211bc8u;
    // NOP
    // 0x211bcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211bd0: 0x0  nop
    ctx->pc = 0x211bd0u;
    // NOP
    // 0x211bd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x211BD4u;
    {
        const bool branch_taken_0x211bd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BD4u;
        // 0x211bd8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bd4) {
            ctx->pc = 0x211BE8u;
            goto label_211be8;
        }
    }
    ctx->pc = 0x211BDCu;
    // 0x211bdc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x211BDCu;
    SET_GPR_U32(ctx, 31, 0x211BE4u);
    ctx->pc = 0x211BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BDCu;
    // 0x211be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x211BDCu, 0x211BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BE4u;
label_211be4:
    // 0x211be4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x211be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_211be8:
    // 0x211be8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x211be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x211becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211bf0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x211bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211bf8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x211bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x211bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x211BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BFCu;
        // 0x211c00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211C04u;
    // 0x211c04: 0x0  nop
    ctx->pc = 0x211c04u;
    // NOP
    ctx->pc = 0x211c08u;
}
