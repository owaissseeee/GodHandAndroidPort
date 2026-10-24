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

// Function: func_0024F050
// Address: 0x24f050 - 0x24f638
void func_0024F050_0x24f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024F050_0x24f050");
#endif

    switch (ctx->pc) {
        case 0x24f098u: goto label_24f098;
        case 0x24f188u: goto label_24f188;
        case 0x24f1b4u: goto label_24f1b4;
        case 0x24f1ecu: goto label_24f1ec;
        case 0x24f360u: goto label_24f360;
        case 0x24f368u: goto label_24f368;
        case 0x24f390u: goto label_24f390;
        case 0x24f398u: goto label_24f398;
        case 0x24f3e8u: goto label_24f3e8;
        case 0x24f424u: goto label_24f424;
        case 0x24f448u: goto label_24f448;
        case 0x24f46cu: goto label_24f46c;
        case 0x24f490u: goto label_24f490;
        case 0x24f4f8u: goto label_24f4f8;
        case 0x24f500u: goto label_24f500;
        case 0x24f510u: goto label_24f510;
        case 0x24f520u: goto label_24f520;
        case 0x24f530u: goto label_24f530;
        case 0x24f544u: goto label_24f544;
        case 0x24f550u: goto label_24f550;
        case 0x24f57cu: goto label_24f57c;
        case 0x24f58cu: goto label_24f58c;
        case 0x24f604u: goto label_24f604;
        case 0x24f614u: goto label_24f614;
        default: break;
    }

    ctx->pc = 0x24f050u;

    // 0x24f050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24f054: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24f054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24f058: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24f05c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24f05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f060: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24f064: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24f064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x24f068: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x24f06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f070: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x24f070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x24f074: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x24f074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24f078: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F078u;
    {
        const bool branch_taken_0x24f078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F078u;
        // 0x24f07c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f078) {
            ctx->pc = 0x24F090u;
            goto label_24f090;
        }
    }
    ctx->pc = 0x24F080u;
    // 0x24f080: 0x1062010d  beq         $v1, $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x24F080u;
    {
        const bool branch_taken_0x24f080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F080u;
        // 0x24f084: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f080) {
            ctx->pc = 0x24F4B8u;
            goto label_24f4b8;
        }
    }
    ctx->pc = 0x24F088u;
    // 0x24f088: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x24F088u;
    {
        const bool branch_taken_0x24f088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F088u;
        // 0x24f08c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f088) {
            ctx->pc = 0x24F61Cu;
            goto label_24f61c;
        }
    }
    ctx->pc = 0x24F090u;
label_24f090:
    // 0x24f090: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24F090u;
    SET_GPR_U32(ctx, 31, 0x24F098u);
    ctx->pc = 0x24F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F090u;
    // 0x24f094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24F090u, 0x24F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F098u;
label_24f098:
    // 0x24f098: 0x924317c3  lbu         $v1, 0x17C3($s2)
    ctx->pc = 0x24f098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6083)));
    // 0x24f09c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F09Cu;
    {
        const bool branch_taken_0x24f09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F09Cu;
        // 0x24f0a0: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f09c) {
            ctx->pc = 0x24F0BCu;
            goto label_24f0bc;
        }
    }
    ctx->pc = 0x24F0A4u;
    // 0x24f0a4: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f0a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F0A8u;
    {
        const bool branch_taken_0x24f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0A8u;
        // 0x24f0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0a8) {
            ctx->pc = 0x24F0B8u;
            goto label_24f0b8;
        }
    }
    ctx->pc = 0x24F0B0u;
    // 0x24f0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F0B0u;
    {
        const bool branch_taken_0x24f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0B0u;
        // 0x24f0b4: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0b0) {
            ctx->pc = 0x24F0BCu;
            goto label_24f0bc;
        }
    }
    ctx->pc = 0x24F0B8u;
label_24f0b8:
    // 0x24f0b8: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x24f0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
label_24f0bc:
    // 0x24f0bc: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x24f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24f0c0: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x24f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x24f0c4: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x24f0c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x24f0c8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F0C8u;
    {
        const bool branch_taken_0x24f0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0C8u;
        // 0x24f0cc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0c8) {
            ctx->pc = 0x24F10Cu;
            goto label_24f10c;
        }
    }
    ctx->pc = 0x24F0D0u;
    // 0x24f0d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24f0d4: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x24f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x24f0d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f0dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f0e0: 0x800008  jr          $a0
    ctx->pc = 0x24F0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F0E8u: goto label_24f0e8;
            case 0x24F10Cu: goto label_24f10c;
            case 0x24F130u: goto label_24f130;
            case 0x24F154u: goto label_24f154;
            case 0x24F1BCu: goto label_24f1bc;
            case 0x24F1F4u: goto label_24f1f4;
            case 0x24F218u: goto label_24f218;
            case 0x24F23Cu: goto label_24f23c;
            case 0x24F260u: goto label_24f260;
            case 0x24F284u: goto label_24f284;
            case 0x24F2A8u: goto label_24f2a8;
            case 0x24F2CCu: goto label_24f2cc;
            case 0x24F2DCu: goto label_24f2dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F0E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F0E8u;
label_24f0e8:
    // 0x24f0e8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f0ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F0ECu;
    {
        const bool branch_taken_0x24f0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0ECu;
        // 0x24f0f0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0ec) {
            ctx->pc = 0x24F100u;
            goto label_24f100;
        }
    }
    ctx->pc = 0x24F0F4u;
    // 0x24f0f4: 0x8c430300  lw          $v1, 0x300($v0)
    ctx->pc = 0x24f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
    // 0x24f0f8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x24F0F8u;
    {
        const bool branch_taken_0x24f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0F8u;
        // 0x24f0fc: 0x8c440304  lw          $a0, 0x304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0f8) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F100u;
label_24f100:
    // 0x24f100: 0x8c4302f8  lw          $v1, 0x2F8($v0)
    ctx->pc = 0x24f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x24f104: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x24F104u;
    {
        const bool branch_taken_0x24f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F104u;
        // 0x24f108: 0x8c4402fc  lw          $a0, 0x2FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f104) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F10Cu;
label_24f10c:
    // 0x24f10c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F110u;
    {
        const bool branch_taken_0x24f110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F110u;
        // 0x24f114: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f110) {
            ctx->pc = 0x24F124u;
            goto label_24f124;
        }
    }
    ctx->pc = 0x24F118u;
    // 0x24f118: 0x8c430820  lw          $v1, 0x820($v0)
    ctx->pc = 0x24f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x24f11c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x24F11Cu;
    {
        const bool branch_taken_0x24f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F11Cu;
        // 0x24f120: 0x8c440824  lw          $a0, 0x824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f11c) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F124u;
label_24f124:
    // 0x24f124: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x24f124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x24f128: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x24F128u;
    {
        const bool branch_taken_0x24f128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F128u;
        // 0x24f12c: 0x8c44081c  lw          $a0, 0x81C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f128) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F130u;
label_24f130:
    // 0x24f130: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F134u;
    {
        const bool branch_taken_0x24f134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F134u;
        // 0x24f138: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f134) {
            ctx->pc = 0x24F148u;
            goto label_24f148;
        }
    }
    ctx->pc = 0x24F13Cu;
    // 0x24f13c: 0x8c4309e8  lw          $v1, 0x9E8($v0)
    ctx->pc = 0x24f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2536)));
    // 0x24f140: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24F140u;
    {
        const bool branch_taken_0x24f140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F140u;
        // 0x24f144: 0x8c4409ec  lw          $a0, 0x9EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f140) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F148u;
label_24f148:
    // 0x24f148: 0x8c4309e0  lw          $v1, 0x9E0($v0)
    ctx->pc = 0x24f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x24f14c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x24F14Cu;
    {
        const bool branch_taken_0x24f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F14Cu;
        // 0x24f150: 0x8c4409e4  lw          $a0, 0x9E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f14c) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F154u;
label_24f154:
    // 0x24f154: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F158u;
    {
        const bool branch_taken_0x24f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F158u;
        // 0x24f15c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f158) {
            ctx->pc = 0x24F16Cu;
            goto label_24f16c;
        }
    }
    ctx->pc = 0x24F160u;
    // 0x24f160: 0x8c4309e8  lw          $v1, 0x9E8($v0)
    ctx->pc = 0x24f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2536)));
    // 0x24f164: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F164u;
    {
        const bool branch_taken_0x24f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F164u;
        // 0x24f168: 0x8c4409ec  lw          $a0, 0x9EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f164) {
            ctx->pc = 0x24F174u;
            goto label_24f174;
        }
    }
    ctx->pc = 0x24F16Cu;
label_24f16c:
    // 0x24f16c: 0x8c4309e0  lw          $v1, 0x9E0($v0)
    ctx->pc = 0x24f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x24f170: 0x8c4409e4  lw          $a0, 0x9E4($v0)
    ctx->pc = 0x24f170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2532)));
label_24f174:
    // 0x24f174: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24f174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f178: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24f178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24f17c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f180: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24F180u;
    SET_GPR_U32(ctx, 31, 0x24F188u);
    ctx->pc = 0x24F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F180u;
    // 0x24f184: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24F180u, 0x24F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F188u;
label_24f188:
    // 0x24f188: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x24f188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x24f18c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x24f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x24f190: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24f190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24f194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f198: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24f198u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24f19c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24f19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24f1a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f1a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24f1a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1ac: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24F1ACu;
    SET_GPR_U32(ctx, 31, 0x24F1B4u);
    ctx->pc = 0x24F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F1ACu;
    // 0x24f1b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24F1ACu, 0x24F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1B4u;
label_24f1b4:
    // 0x24f1b4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x24F1B4u;
    {
        const bool branch_taken_0x24f1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1B4u;
        // 0x24f1b8: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1b4) {
            ctx->pc = 0x24F308u;
            goto label_24f308;
        }
    }
    ctx->pc = 0x24F1BCu;
label_24f1bc:
    // 0x24f1bc: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f1bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f1c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F1C0u;
    {
        const bool branch_taken_0x24f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1C0u;
        // 0x24f1c4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1c0) {
            ctx->pc = 0x24F1D4u;
            goto label_24f1d4;
        }
    }
    ctx->pc = 0x24F1C8u;
    // 0x24f1c8: 0x8c433144  lw          $v1, 0x3144($v0)
    ctx->pc = 0x24f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12612)));
    // 0x24f1cc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24F1CCu;
    {
        const bool branch_taken_0x24f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1CCu;
        // 0x24f1d0: 0x8c443148  lw          $a0, 0x3148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1cc) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F1D4u;
label_24f1d4:
    // 0x24f1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1d8: 0x8c433144  lw          $v1, 0x3144($v0)
    ctx->pc = 0x24f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12612)));
    // 0x24f1dc: 0x8c453148  lw          $a1, 0x3148($v0)
    ctx->pc = 0x24f1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12616)));
    // 0x24f1e0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24f1e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f1e4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24F1E4u;
    SET_GPR_U32(ctx, 31, 0x24F1ECu);
    ctx->pc = 0x24F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F1E4u;
    // 0x24f1e8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24F1E4u, 0x24F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1ECu;
label_24f1ec:
    // 0x24f1ec: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x24F1ECu;
    {
        const bool branch_taken_0x24f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1ECu;
        // 0x24f1f0: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1ec) {
            ctx->pc = 0x24F304u;
            goto label_24f304;
        }
    }
    ctx->pc = 0x24F1F4u;
label_24f1f4:
    // 0x24f1f4: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f1f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F1F8u;
    {
        const bool branch_taken_0x24f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1F8u;
        // 0x24f1fc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1f8) {
            ctx->pc = 0x24F20Cu;
            goto label_24f20c;
        }
    }
    ctx->pc = 0x24F200u;
    // 0x24f200: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x24f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x24f204: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x24F204u;
    {
        const bool branch_taken_0x24f204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F204u;
        // 0x24f208: 0x8c443314  lw          $a0, 0x3314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f204) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F20Cu;
label_24f20c:
    // 0x24f20c: 0x8c433308  lw          $v1, 0x3308($v0)
    ctx->pc = 0x24f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13064)));
    // 0x24f210: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x24F210u;
    {
        const bool branch_taken_0x24f210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F210u;
        // 0x24f214: 0x8c44330c  lw          $a0, 0x330C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f210) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F218u;
label_24f218:
    // 0x24f218: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f21c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F21Cu;
    {
        const bool branch_taken_0x24f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F21Cu;
        // 0x24f220: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f21c) {
            ctx->pc = 0x24F230u;
            goto label_24f230;
        }
    }
    ctx->pc = 0x24F224u;
    // 0x24f224: 0x8c433888  lw          $v1, 0x3888($v0)
    ctx->pc = 0x24f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14472)));
    // 0x24f228: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x24F228u;
    {
        const bool branch_taken_0x24f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F228u;
        // 0x24f22c: 0x8c44388c  lw          $a0, 0x388C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f228) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F230u;
label_24f230:
    // 0x24f230: 0x8c433880  lw          $v1, 0x3880($v0)
    ctx->pc = 0x24f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14464)));
    // 0x24f234: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x24F234u;
    {
        const bool branch_taken_0x24f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F234u;
        // 0x24f238: 0x8c443884  lw          $a0, 0x3884($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f234) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F23Cu;
label_24f23c:
    // 0x24f23c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f240: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F240u;
    {
        const bool branch_taken_0x24f240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F240u;
        // 0x24f244: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f240) {
            ctx->pc = 0x24F254u;
            goto label_24f254;
        }
    }
    ctx->pc = 0x24F248u;
    // 0x24f248: 0x8c4316a0  lw          $v1, 0x16A0($v0)
    ctx->pc = 0x24f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5792)));
    // 0x24f24c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x24F24Cu;
    {
        const bool branch_taken_0x24f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F24Cu;
        // 0x24f250: 0x8c4416a4  lw          $a0, 0x16A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f24c) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F254u;
label_24f254:
    // 0x24f254: 0x8c431698  lw          $v1, 0x1698($v0)
    ctx->pc = 0x24f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5784)));
    // 0x24f258: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x24F258u;
    {
        const bool branch_taken_0x24f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F258u;
        // 0x24f25c: 0x8c44169c  lw          $a0, 0x169C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f258) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F260u;
label_24f260:
    // 0x24f260: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F264u;
    {
        const bool branch_taken_0x24f264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F264u;
        // 0x24f268: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f264) {
            ctx->pc = 0x24F278u;
            goto label_24f278;
        }
    }
    ctx->pc = 0x24F26Cu;
    // 0x24f26c: 0x8c433aa4  lw          $v1, 0x3AA4($v0)
    ctx->pc = 0x24f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15012)));
    // 0x24f270: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24F270u;
    {
        const bool branch_taken_0x24f270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F270u;
        // 0x24f274: 0x8c443aa8  lw          $a0, 0x3AA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f270) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F278u;
label_24f278:
    // 0x24f278: 0x8c433a9c  lw          $v1, 0x3A9C($v0)
    ctx->pc = 0x24f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15004)));
    // 0x24f27c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x24F27Cu;
    {
        const bool branch_taken_0x24f27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F27Cu;
        // 0x24f280: 0x8c443aa0  lw          $a0, 0x3AA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f27c) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F284u;
label_24f284:
    // 0x24f284: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f288: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F288u;
    {
        const bool branch_taken_0x24f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F288u;
        // 0x24f28c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f288) {
            ctx->pc = 0x24F29Cu;
            goto label_24f29c;
        }
    }
    ctx->pc = 0x24F290u;
    // 0x24f290: 0x8c4316a0  lw          $v1, 0x16A0($v0)
    ctx->pc = 0x24f290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5792)));
    // 0x24f294: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x24F294u;
    {
        const bool branch_taken_0x24f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F294u;
        // 0x24f298: 0x8c4416a4  lw          $a0, 0x16A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f294) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F29Cu;
label_24f29c:
    // 0x24f29c: 0x8c431698  lw          $v1, 0x1698($v0)
    ctx->pc = 0x24f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5784)));
    // 0x24f2a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24F2A0u;
    {
        const bool branch_taken_0x24f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2A0u;
        // 0x24f2a4: 0x8c44169c  lw          $a0, 0x169C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2a0) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F2A8u;
label_24f2a8:
    // 0x24f2a8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f2ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F2ACu;
    {
        const bool branch_taken_0x24f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2ACu;
        // 0x24f2b0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2ac) {
            ctx->pc = 0x24F2C0u;
            goto label_24f2c0;
        }
    }
    ctx->pc = 0x24F2B4u;
    // 0x24f2b4: 0x8c430820  lw          $v1, 0x820($v0)
    ctx->pc = 0x24f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x24f2b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24F2B8u;
    {
        const bool branch_taken_0x24f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2B8u;
        // 0x24f2bc: 0x8c440824  lw          $a0, 0x824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2b8) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F2C0u;
label_24f2c0:
    // 0x24f2c0: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x24f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x24f2c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24F2C4u;
    {
        const bool branch_taken_0x24f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2C4u;
        // 0x24f2c8: 0x8c44081c  lw          $a0, 0x81C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2c4) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F2CCu;
label_24f2cc:
    // 0x24f2cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24f2d0: 0x8c432e4c  lw          $v1, 0x2E4C($v0)
    ctx->pc = 0x24f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11852)));
    // 0x24f2d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24F2D4u;
    {
        const bool branch_taken_0x24f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2D4u;
        // 0x24f2d8: 0x8c442e50  lw          $a0, 0x2E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2d4) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F2DCu;
label_24f2dc:
    // 0x24f2dc: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f2e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F2E0u;
    {
        const bool branch_taken_0x24f2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2E0u;
        // 0x24f2e4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2e0) {
            ctx->pc = 0x24F2F4u;
            goto label_24f2f4;
        }
    }
    ctx->pc = 0x24F2E8u;
    // 0x24f2e8: 0x8c431260  lw          $v1, 0x1260($v0)
    ctx->pc = 0x24f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4704)));
    // 0x24f2ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F2ECu;
    {
        const bool branch_taken_0x24f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2ECu;
        // 0x24f2f0: 0x8c441264  lw          $a0, 0x1264($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2ec) {
            ctx->pc = 0x24F2FCu;
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F2F4u;
label_24f2f4:
    // 0x24f2f4: 0x8c431258  lw          $v1, 0x1258($v0)
    ctx->pc = 0x24f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4696)));
    // 0x24f2f8: 0x8c44125c  lw          $a0, 0x125C($v0)
    ctx->pc = 0x24f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4700)));
label_24f2fc:
    // 0x24f2fc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24f2fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f300: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24f300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24f304:
    // 0x24f304: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x24f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_24f308:
    // 0x24f308: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F308u;
    {
        const bool branch_taken_0x24f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f308) {
            ctx->pc = 0x24F338u;
            goto label_24f338;
        }
    }
    ctx->pc = 0x24F310u;
    // 0x24f310: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24f310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F314u;
    {
        const bool branch_taken_0x24f314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F314u;
        // 0x24f318: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f314) {
            ctx->pc = 0x24F328u;
            goto label_24f328;
        }
    }
    ctx->pc = 0x24F31Cu;
    // 0x24f31c: 0x8c430820  lw          $v1, 0x820($v0)
    ctx->pc = 0x24f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x24f320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F320u;
    {
        const bool branch_taken_0x24f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F320u;
        // 0x24f324: 0x8c440824  lw          $a0, 0x824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f320) {
            ctx->pc = 0x24F330u;
            goto label_24f330;
        }
    }
    ctx->pc = 0x24F328u;
label_24f328:
    // 0x24f328: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x24f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x24f32c: 0x8c44081c  lw          $a0, 0x81C($v0)
    ctx->pc = 0x24f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
label_24f330:
    // 0x24f330: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24f330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f334: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24f334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24f338:
    // 0x24f338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24f338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24f33c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x24f340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24f340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f344: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24f344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f348: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x24f348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f34c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24f34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f354: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x24f354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x24f358: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24F358u;
    SET_GPR_U32(ctx, 31, 0x24F360u);
    ctx->pc = 0x24F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F358u;
    // 0x24f35c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24F358u, 0x24F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F360u;
label_24f360:
    // 0x24f360: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24F360u;
    SET_GPR_U32(ctx, 31, 0x24F368u);
    ctx->pc = 0x24F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F360u;
    // 0x24f364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24F360u, 0x24F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F368u;
label_24f368:
    // 0x24f368: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24f368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24f36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f370: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24f370u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24f374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f378: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24f378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f37c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24f37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f384: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24f384u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f388: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24F388u;
    SET_GPR_U32(ctx, 31, 0x24F390u);
    ctx->pc = 0x24F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F388u;
    // 0x24f38c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24F388u, 0x24F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F390u;
label_24f390:
    // 0x24f390: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x24F390u;
    SET_GPR_U32(ctx, 31, 0x24F398u);
    ctx->pc = 0x24F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F390u;
    // 0x24f394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x24F390u, 0x24F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F398u;
label_24f398:
    // 0x24f398: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x24f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x24f39c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24F39Cu;
    {
        const bool branch_taken_0x24f39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F39Cu;
        // 0x24f3a0: 0xae4005f0  sw          $zero, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f39c) {
            ctx->pc = 0x24F3DCu;
            goto label_24f3dc;
        }
    }
    ctx->pc = 0x24F3A4u;
    // 0x24f3a4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x24f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x24f3a8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x24F3A8u;
    {
        const bool branch_taken_0x24f3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3A8u;
        // 0x24f3ac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3a8) {
            ctx->pc = 0x24F3DCu;
            goto label_24f3dc;
        }
    }
    ctx->pc = 0x24F3B0u;
    // 0x24f3b0: 0x264305d0  addiu       $v1, $s2, 0x5D0
    ctx->pc = 0x24f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x24f3b4: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x24f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x24f3b8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x24f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x24f3bc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F3BCu;
    {
        const bool branch_taken_0x24f3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f3bc) {
            ctx->pc = 0x24F3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F3BCu;
            // 0x24f3c0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F3E0u;
            goto label_24f3e0;
        }
    }
    ctx->pc = 0x24F3C4u;
    // 0x24f3c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24f3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f3c8: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x24f3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x24f3cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f3d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24f3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24f3d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f3d8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24f3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_24f3dc:
    // 0x24f3dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_24f3e0:
    // 0x24f3e0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24F3E0u;
    SET_GPR_U32(ctx, 31, 0x24F3E8u);
    ctx->pc = 0x24F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F3E0u;
    // 0x24f3e4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24F3E0u, 0x24F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F3E8u;
label_24f3e8:
    // 0x24f3e8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24f3ec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24f3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24f3f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F3F0u;
    {
        const bool branch_taken_0x24f3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3F0u;
        // 0x24f3f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3f0) {
            ctx->pc = 0x24F410u;
            goto label_24f410;
        }
    }
    ctx->pc = 0x24F3F8u;
    // 0x24f3f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f3fc: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x24f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x24f400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f404: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f408: 0x800008  jr          $a0
    ctx->pc = 0x24F408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F410u: goto label_24f410;
            case 0x24F41Cu: goto label_24f41c;
            case 0x24F440u: goto label_24f440;
            case 0x24F464u: goto label_24f464;
            case 0x24F488u: goto label_24f488;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F410u;
label_24f410:
    // 0x24f410: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x24f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x24f414: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x24F414u;
    {
        const bool branch_taken_0x24f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F414u;
        // 0x24f418: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f414) {
            ctx->pc = 0x24F4ACu;
            goto label_24f4ac;
        }
    }
    ctx->pc = 0x24F41Cu;
label_24f41c:
    // 0x24f41c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F41Cu;
    SET_GPR_U32(ctx, 31, 0x24F424u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F41Cu, 0x24F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F424u;
label_24f424:
    // 0x24f424: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24f428: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24f428u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24f42c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F42Cu;
    {
        const bool branch_taken_0x24f42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f42c) {
            ctx->pc = 0x24F430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F42Cu;
            // 0x24f430: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F434u;
            goto label_24f434;
        }
    }
    ctx->pc = 0x24F434u;
label_24f434:
    // 0x24f434: 0x2010  mfhi        $a0
    ctx->pc = 0x24f434u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24f438: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24F438u;
    {
        const bool branch_taken_0x24f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F438u;
        // 0x24f43c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f438) {
            ctx->pc = 0x24F4A8u;
            goto label_24f4a8;
        }
    }
    ctx->pc = 0x24F440u;
label_24f440:
    // 0x24f440: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F440u;
    SET_GPR_U32(ctx, 31, 0x24F448u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F440u, 0x24F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F448u;
label_24f448:
    // 0x24f448: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24f44c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24f44cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24f450: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F450u;
    {
        const bool branch_taken_0x24f450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f450) {
            ctx->pc = 0x24F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F450u;
            // 0x24f454: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F458u;
            goto label_24f458;
        }
    }
    ctx->pc = 0x24F458u;
label_24f458:
    // 0x24f458: 0x2010  mfhi        $a0
    ctx->pc = 0x24f458u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24f45c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24F45Cu;
    {
        const bool branch_taken_0x24f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F45Cu;
        // 0x24f460: 0x2484000f  addiu       $a0, $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f45c) {
            ctx->pc = 0x24F4A8u;
            goto label_24f4a8;
        }
    }
    ctx->pc = 0x24F464u;
label_24f464:
    // 0x24f464: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F464u;
    SET_GPR_U32(ctx, 31, 0x24F46Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F464u, 0x24F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F46Cu;
label_24f46c:
    // 0x24f46c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24f470: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24f470u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24f474: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F474u;
    {
        const bool branch_taken_0x24f474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f474) {
            ctx->pc = 0x24F478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F474u;
            // 0x24f478: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F47Cu;
            goto label_24f47c;
        }
    }
    ctx->pc = 0x24F47Cu;
label_24f47c:
    // 0x24f47c: 0x2010  mfhi        $a0
    ctx->pc = 0x24f47cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24f480: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24F480u;
    {
        const bool branch_taken_0x24f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F480u;
        // 0x24f484: 0x2484000f  addiu       $a0, $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f480) {
            ctx->pc = 0x24F4A8u;
            goto label_24f4a8;
        }
    }
    ctx->pc = 0x24F488u;
label_24f488:
    // 0x24f488: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F488u;
    SET_GPR_U32(ctx, 31, 0x24F490u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F488u, 0x24F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F490u;
label_24f490:
    // 0x24f490: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24f494: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24f494u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24f498: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F498u;
    {
        const bool branch_taken_0x24f498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f498) {
            ctx->pc = 0x24F49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F498u;
            // 0x24f49c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F4A0u;
            goto label_24f4a0;
        }
    }
    ctx->pc = 0x24F4A0u;
label_24f4a0:
    // 0x24f4a0: 0x2010  mfhi        $a0
    ctx->pc = 0x24f4a0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24f4a4: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x24f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
label_24f4a8:
    // 0x24f4a8: 0xae4405f4  sw          $a0, 0x5F4($s2)
    ctx->pc = 0x24f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 4));
label_24f4ac:
    // 0x24f4ac: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24f4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24f4b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f4b4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24f4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24f4b8:
    // 0x24f4b8: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24f4bc: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x24f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x24f4c0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24F4C0u;
    {
        const bool branch_taken_0x24f4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f4c0) {
            ctx->pc = 0x24F4F8u;
            goto label_24f4f8;
        }
    }
    ctx->pc = 0x24F4C8u;
    // 0x24f4c8: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x24f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x24f4cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24F4CCu;
    {
        const bool branch_taken_0x24f4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4CCu;
        // 0x24f4d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4cc) {
            ctx->pc = 0x24F4F8u;
            goto label_24f4f8;
        }
    }
    ctx->pc = 0x24F4D4u;
    // 0x24f4d4: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x24f4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24f4d8: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x24f4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x24f4dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24f4dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24f4e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4e8: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x24f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x24f4ec: 0x264505d0  addiu       $a1, $s2, 0x5D0
    ctx->pc = 0x24f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x24f4f0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24F4F0u;
    SET_GPR_U32(ctx, 31, 0x24F4F8u);
    ctx->pc = 0x24F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F4F0u;
    // 0x24f4f4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24F4F0u, 0x24F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4F8u;
label_24f4f8:
    // 0x24f4f8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24F4F8u;
    SET_GPR_U32(ctx, 31, 0x24F500u);
    ctx->pc = 0x24F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F4F8u;
    // 0x24f4fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24F4F8u, 0x24F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F500u;
label_24f500:
    // 0x24f500: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F500u;
    {
        const bool branch_taken_0x24f500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f500) {
            ctx->pc = 0x24F530u;
            goto label_24f530;
        }
    }
    ctx->pc = 0x24F508u;
    // 0x24f508: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24F508u;
    SET_GPR_U32(ctx, 31, 0x24F510u);
    ctx->pc = 0x24F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F508u;
    // 0x24f50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24F508u, 0x24F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F510u;
label_24f510:
    // 0x24f510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F510u;
    {
        const bool branch_taken_0x24f510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f510) {
            ctx->pc = 0x24F528u;
            goto label_24f528;
        }
    }
    ctx->pc = 0x24F518u;
    // 0x24f518: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24F518u;
    SET_GPR_U32(ctx, 31, 0x24F520u);
    ctx->pc = 0x24F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F518u;
    // 0x24f51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24F518u, 0x24F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F520u;
label_24f520:
    // 0x24f520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F520u;
    {
        const bool branch_taken_0x24f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f520) {
            ctx->pc = 0x24F530u;
            goto label_24f530;
        }
    }
    ctx->pc = 0x24F528u;
label_24f528:
    // 0x24f528: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24F528u;
    SET_GPR_U32(ctx, 31, 0x24F530u);
    ctx->pc = 0x24F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F528u;
    // 0x24f52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24F528u, 0x24F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F530u;
label_24f530:
    // 0x24f530: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f534: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24f534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24f538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f53c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24F53Cu;
    SET_GPR_U32(ctx, 31, 0x24F544u);
    ctx->pc = 0x24F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F53Cu;
    // 0x24f540: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24F53Cu, 0x24F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F544u;
label_24f544:
    // 0x24f544: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24f544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24f548: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24F548u;
    SET_GPR_U32(ctx, 31, 0x24F550u);
    ctx->pc = 0x24F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F548u;
    // 0x24f54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24F548u, 0x24F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F550u;
label_24f550:
    // 0x24f550: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x24f550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x24f554: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24f558: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F558u;
    {
        const bool branch_taken_0x24f558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f558) {
            ctx->pc = 0x24F55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F558u;
            // 0x24f55c: 0xae4005f4  sw          $zero, 0x5F4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F560u;
            goto label_24f560;
        }
    }
    ctx->pc = 0x24F560u;
label_24f560:
    // 0x24f560: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x24f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x24f564: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F564u;
    {
        const bool branch_taken_0x24f564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F564u;
        // 0x24f568: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f564) {
            ctx->pc = 0x24F574u;
            goto label_24f574;
        }
    }
    ctx->pc = 0x24F56Cu;
    // 0x24f56c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24F56Cu;
    {
        const bool branch_taken_0x24f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F56Cu;
        // 0x24f570: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f56c) {
            ctx->pc = 0x24F614u;
            goto label_24f614;
        }
    }
    ctx->pc = 0x24F574u;
label_24f574:
    // 0x24f574: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24F574u;
    SET_GPR_U32(ctx, 31, 0x24F57Cu);
    ctx->pc = 0x24F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F574u;
    // 0x24f578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24F574u, 0x24F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F57Cu;
label_24f57c:
    // 0x24f57c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x24F57Cu;
    {
        const bool branch_taken_0x24f57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F57Cu;
        // 0x24f580: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f57c) {
            ctx->pc = 0x24F618u;
            goto label_24f618;
        }
    }
    ctx->pc = 0x24F584u;
    // 0x24f584: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F584u;
    SET_GPR_U32(ctx, 31, 0x24F58Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F584u, 0x24F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F58Cu;
label_24f58c:
    // 0x24f58c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24f590: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24f590u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24f594: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F594u;
    {
        const bool branch_taken_0x24f594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f594) {
            ctx->pc = 0x24F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F594u;
            // 0x24f598: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F59Cu;
            goto label_24f59c;
        }
    }
    ctx->pc = 0x24F59Cu;
label_24f59c:
    // 0x24f59c: 0x2010  mfhi        $a0
    ctx->pc = 0x24f59cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24f5a0: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24F5A0u;
    {
        const bool branch_taken_0x24f5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f5a0) {
            ctx->pc = 0x24F60Cu;
            goto label_24f60c;
        }
    }
    ctx->pc = 0x24F5A8u;
    // 0x24f5a8: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x24f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f5ac: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24f5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24f5b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f5b4: 0x0  nop
    ctx->pc = 0x24f5b4u;
    // NOP
    // 0x24f5b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24f5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f5bc: 0x0  nop
    ctx->pc = 0x24f5bcu;
    // NOP
    // 0x24f5c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x24F5C0u;
    {
        const bool branch_taken_0x24f5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5C0u;
        // 0x24f5c4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5c0) {
            ctx->pc = 0x24F60Cu;
            goto label_24f60c;
        }
    }
    ctx->pc = 0x24F5C8u;
    // 0x24f5c8: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24f5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24f5cc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24F5CCu;
    {
        const bool branch_taken_0x24f5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f5cc) {
            ctx->pc = 0x24F60Cu;
            goto label_24f60c;
        }
    }
    ctx->pc = 0x24F5D4u;
    // 0x24f5d4: 0x924217bb  lbu         $v0, 0x17BB($s2)
    ctx->pc = 0x24f5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6075)));
    // 0x24f5d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24F5D8u;
    {
        const bool branch_taken_0x24f5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f5d8) {
            ctx->pc = 0x24F60Cu;
            goto label_24f60c;
        }
    }
    ctx->pc = 0x24F5E0u;
    // 0x24f5e0: 0xc6411740  lwc1        $f1, 0x1740($s2)
    ctx->pc = 0x24f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f5e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24f5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f5e8: 0x0  nop
    ctx->pc = 0x24f5e8u;
    // NOP
    // 0x24f5ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24f5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f5f0: 0x0  nop
    ctx->pc = 0x24f5f0u;
    // NOP
    // 0x24f5f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F5F4u;
    {
        const bool branch_taken_0x24f5f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5F4u;
        // 0x24f5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5f4) {
            ctx->pc = 0x24F60Cu;
            goto label_24f60c;
        }
    }
    ctx->pc = 0x24F5FCu;
    // 0x24f5fc: 0xc09d08e  jal         func_274238
    ctx->pc = 0x24F5FCu;
    SET_GPR_U32(ctx, 31, 0x24F604u);
    ctx->pc = 0x24F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5FCu;
    // 0x24f600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x24F5FCu, 0x24F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F604u;
label_24f604:
    // 0x24f604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F604u;
    {
        const bool branch_taken_0x24f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F604u;
        // 0x24f608: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f604) {
            ctx->pc = 0x24F618u;
            goto label_24f618;
        }
    }
    ctx->pc = 0x24F60Cu;
label_24f60c:
    // 0x24f60c: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x24F60Cu;
    SET_GPR_U32(ctx, 31, 0x24F614u);
    ctx->pc = 0x24F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F60Cu;
    // 0x24f610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x24F60Cu, 0x24F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F614u;
label_24f614:
    // 0x24f614: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24f614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24f618:
    // 0x24f618: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24f618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24f61c:
    // 0x24f61c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24f61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f620: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24f620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f624: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x24f624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f62c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x24f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24f630: 0x3e00008  jr          $ra
    ctx->pc = 0x24F630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F630u;
        // 0x24f634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F638u;
}
