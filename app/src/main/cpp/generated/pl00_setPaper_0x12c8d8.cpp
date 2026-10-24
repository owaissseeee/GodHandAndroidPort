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

// Function: pl00_setPaper
// Address: 0x12c8d8 - 0x12ca48
void pl00_setPaper_0x12c8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_setPaper_0x12c8d8");
#endif

    switch (ctx->pc) {
        case 0x12c8d8u: goto label_12c8d8;
        case 0x12c8dcu: goto label_12c8dc;
        case 0x12c8e0u: goto label_12c8e0;
        case 0x12c8e4u: goto label_12c8e4;
        case 0x12c8e8u: goto label_12c8e8;
        case 0x12c8ecu: goto label_12c8ec;
        case 0x12c8f0u: goto label_12c8f0;
        case 0x12c8f4u: goto label_12c8f4;
        case 0x12c8f8u: goto label_12c8f8;
        case 0x12c8fcu: goto label_12c8fc;
        case 0x12c900u: goto label_12c900;
        case 0x12c904u: goto label_12c904;
        case 0x12c908u: goto label_12c908;
        case 0x12c90cu: goto label_12c90c;
        case 0x12c910u: goto label_12c910;
        case 0x12c914u: goto label_12c914;
        case 0x12c918u: goto label_12c918;
        case 0x12c91cu: goto label_12c91c;
        case 0x12c920u: goto label_12c920;
        case 0x12c924u: goto label_12c924;
        case 0x12c928u: goto label_12c928;
        case 0x12c92cu: goto label_12c92c;
        case 0x12c930u: goto label_12c930;
        case 0x12c934u: goto label_12c934;
        case 0x12c938u: goto label_12c938;
        case 0x12c93cu: goto label_12c93c;
        case 0x12c940u: goto label_12c940;
        case 0x12c944u: goto label_12c944;
        case 0x12c948u: goto label_12c948;
        case 0x12c94cu: goto label_12c94c;
        case 0x12c950u: goto label_12c950;
        case 0x12c954u: goto label_12c954;
        case 0x12c958u: goto label_12c958;
        case 0x12c95cu: goto label_12c95c;
        case 0x12c960u: goto label_12c960;
        case 0x12c964u: goto label_12c964;
        case 0x12c968u: goto label_12c968;
        case 0x12c96cu: goto label_12c96c;
        case 0x12c970u: goto label_12c970;
        case 0x12c974u: goto label_12c974;
        case 0x12c978u: goto label_12c978;
        case 0x12c97cu: goto label_12c97c;
        case 0x12c980u: goto label_12c980;
        case 0x12c984u: goto label_12c984;
        case 0x12c988u: goto label_12c988;
        case 0x12c98cu: goto label_12c98c;
        case 0x12c990u: goto label_12c990;
        case 0x12c994u: goto label_12c994;
        case 0x12c998u: goto label_12c998;
        case 0x12c99cu: goto label_12c99c;
        case 0x12c9a0u: goto label_12c9a0;
        case 0x12c9a4u: goto label_12c9a4;
        case 0x12c9a8u: goto label_12c9a8;
        case 0x12c9acu: goto label_12c9ac;
        case 0x12c9b0u: goto label_12c9b0;
        case 0x12c9b4u: goto label_12c9b4;
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12c9bcu: goto label_12c9bc;
        case 0x12c9c0u: goto label_12c9c0;
        case 0x12c9c4u: goto label_12c9c4;
        case 0x12c9c8u: goto label_12c9c8;
        case 0x12c9ccu: goto label_12c9cc;
        case 0x12c9d0u: goto label_12c9d0;
        case 0x12c9d4u: goto label_12c9d4;
        case 0x12c9d8u: goto label_12c9d8;
        case 0x12c9dcu: goto label_12c9dc;
        case 0x12c9e0u: goto label_12c9e0;
        case 0x12c9e4u: goto label_12c9e4;
        case 0x12c9e8u: goto label_12c9e8;
        case 0x12c9ecu: goto label_12c9ec;
        case 0x12c9f0u: goto label_12c9f0;
        case 0x12c9f4u: goto label_12c9f4;
        case 0x12c9f8u: goto label_12c9f8;
        case 0x12c9fcu: goto label_12c9fc;
        case 0x12ca00u: goto label_12ca00;
        case 0x12ca04u: goto label_12ca04;
        case 0x12ca08u: goto label_12ca08;
        case 0x12ca0cu: goto label_12ca0c;
        case 0x12ca10u: goto label_12ca10;
        case 0x12ca14u: goto label_12ca14;
        case 0x12ca18u: goto label_12ca18;
        case 0x12ca1cu: goto label_12ca1c;
        case 0x12ca20u: goto label_12ca20;
        case 0x12ca24u: goto label_12ca24;
        case 0x12ca28u: goto label_12ca28;
        case 0x12ca2cu: goto label_12ca2c;
        case 0x12ca30u: goto label_12ca30;
        case 0x12ca34u: goto label_12ca34;
        case 0x12ca38u: goto label_12ca38;
        case 0x12ca3cu: goto label_12ca3c;
        case 0x12ca40u: goto label_12ca40;
        case 0x12ca44u: goto label_12ca44;
        default: break;
    }

    ctx->pc = 0x12c8d8u;

label_12c8d8:
    // 0x12c8d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12c8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_12c8dc:
    // 0x12c8dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_12c8e0:
    // 0x12c8e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12c8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_12c8e4:
    // 0x12c8e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12c8e8:
    // 0x12c8e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12c8ec:
    // 0x12c8ec: 0x8e0206a8  lw          $v0, 0x6A8($s0)
    ctx->pc = 0x12c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_12c8f0:
    // 0x12c8f0: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
label_12c8f4:
    if (ctx->pc == 0x12C8F4u) {
        ctx->pc = 0x12C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8F0u;
        // 0x12c8f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8F8u;
        goto label_12c8f8;
    }
    ctx->pc = 0x12C8F0u;
    {
        const bool branch_taken_0x12c8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c8f0) {
            ctx->pc = 0x12C8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C8F0u;
            // 0x12c8f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CA38u;
            goto label_12ca38;
        }
    }
    ctx->pc = 0x12C8F8u;
label_12c8f8:
    // 0x12c8f8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_12c8fc:
    // 0x12c8fc: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x12c8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_12c900:
    // 0x12c900: 0xc07f048  jal         func_1FC120
label_12c904:
    if (ctx->pc == 0x12C904u) {
        ctx->pc = 0x12C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C900u;
        // 0x12c904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C908u;
        goto label_12c908;
    }
    ctx->pc = 0x12C900u;
    SET_GPR_U32(ctx, 31, 0x12C908u);
    ctx->pc = 0x12C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C900u;
    // 0x12c904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC120u, 0x12C900u, 0x12C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C908u;
label_12c908:
    // 0x12c908: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x12c908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12c90c:
    // 0x12c90c: 0xc0c3ea6  jal         func_30FA98
label_12c910:
    if (ctx->pc == 0x12C910u) {
        ctx->pc = 0x12C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C90Cu;
        // 0x12c910: 0x24040376  addiu       $a0, $zero, 0x376 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C914u;
        goto label_12c914;
    }
    ctx->pc = 0x12C90Cu;
    SET_GPR_U32(ctx, 31, 0x12C914u);
    ctx->pc = 0x12C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C90Cu;
    // 0x12c910: 0x24040376  addiu       $a0, $zero, 0x376 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x12C90Cu, 0x12C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C914u;
label_12c914:
    // 0x12c914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12c914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c918:
    // 0x12c918: 0x10a00046  beqz        $a1, . + 4 + (0x46 << 2)
label_12c91c:
    if (ctx->pc == 0x12C91Cu) {
        ctx->pc = 0x12C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C918u;
        // 0x12c91c: 0xae0506a8  sw          $a1, 0x6A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C920u;
        goto label_12c920;
    }
    ctx->pc = 0x12C918u;
    {
        const bool branch_taken_0x12c918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C918u;
        // 0x12c91c: 0xae0506a8  sw          $a1, 0x6A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c918) {
            ctx->pc = 0x12CA34u;
            goto label_12ca34;
        }
    }
    ctx->pc = 0x12C920u;
label_12c920:
    // 0x12c920: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x12c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12c924:
    // 0x12c924: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x12c924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_12c928:
    // 0x12c928: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x12c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_12c92c:
    // 0x12c92c: 0x40f809  jalr        $v0
label_12c930:
    if (ctx->pc == 0x12C930u) {
        ctx->pc = 0x12C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C92Cu;
        // 0x12c930: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C934u;
        goto label_12c934;
    }
    ctx->pc = 0x12C92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12C934u);
        ctx->pc = 0x12C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C92Cu;
        // 0x12c930: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C92Cu, 0x12C934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C934u;
label_12c934:
    // 0x12c934: 0x8e0206a8  lw          $v0, 0x6A8($s0)
    ctx->pc = 0x12c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_12c938:
    // 0x12c938: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_12c93c:
    // 0x12c93c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12c940:
    // 0x12c940: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_12c944:
    if (ctx->pc == 0x12C944u) {
        ctx->pc = 0x12C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C940u;
        // 0x12c944: 0x8e0406a8  lw          $a0, 0x6A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C948u;
        goto label_12c948;
    }
    ctx->pc = 0x12C940u;
    {
        const bool branch_taken_0x12c940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c940) {
            ctx->pc = 0x12C944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C940u;
            // 0x12c944: 0x8e0406a8  lw          $a0, 0x6A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C964u;
            goto label_12c964;
        }
    }
    ctx->pc = 0x12C948u;
label_12c948:
    // 0x12c948: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c94c:
    // 0x12c94c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12c950:
    // 0x12c950: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c954:
    // 0x12c954: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12c954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12c958:
    // 0x12c958: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x12c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c95c:
    // 0x12c95c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12c95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12c960:
    // 0x12c960: 0x8e0406a8  lw          $a0, 0x6A8($s0)
    ctx->pc = 0x12c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_12c964:
    // 0x12c964: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x12c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_12c968:
    // 0x12c968: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x12c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_12c96c:
    // 0x12c96c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_12c970:
    if (ctx->pc == 0x12C970u) {
        ctx->pc = 0x12C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C96Cu;
        // 0x12c970: 0x8e0206a8  lw          $v0, 0x6A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C974u;
        goto label_12c974;
    }
    ctx->pc = 0x12C96Cu;
    {
        const bool branch_taken_0x12c96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12c96c) {
            ctx->pc = 0x12C970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C96Cu;
            // 0x12c970: 0x8e0206a8  lw          $v0, 0x6A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C990u;
            goto label_12c990;
        }
    }
    ctx->pc = 0x12C974u;
label_12c974:
    // 0x12c974: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c978:
    // 0x12c978: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x12c978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
label_12c97c:
    // 0x12c97c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12c97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c980:
    // 0x12c980: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12c980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_12c984:
    // 0x12c984: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c988:
    // 0x12c988: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12c988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_12c98c:
    // 0x12c98c: 0x8e0206a8  lw          $v0, 0x6A8($s0)
    ctx->pc = 0x12c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_12c990:
    // 0x12c990: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x12c990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_12c994:
    // 0x12c994: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x12c994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_12c998:
    // 0x12c998: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12c998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_12c99c:
    // 0x12c99c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_12c9a0:
    // 0x12c9a0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_12c9a4:
    // 0x12c9a4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x12c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_12c9a8:
    // 0x12c9a8: 0x3c013d40  lui         $at, 0x3D40
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15680 << 16));
label_12c9ac:
    // 0x12c9ac: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
label_12c9b0:
    // 0x12c9b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12c9b4:
    // 0x12c9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12c9b8:
    // 0x12c9b8: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x12c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
label_12c9bc:
    // 0x12c9bc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x12c9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_12c9c0:
    // 0x12c9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c9c4:
    // 0x12c9c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12c9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12c9c8:
    // 0x12c9c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x12c9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12c9cc:
    // 0x12c9cc: 0xc07f02a  jal         func_1FC0A8
label_12c9d0:
    if (ctx->pc == 0x12C9D0u) {
        ctx->pc = 0x12C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9CCu;
        // 0x12c9d0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9D4u;
        goto label_12c9d4;
    }
    ctx->pc = 0x12C9CCu;
    SET_GPR_U32(ctx, 31, 0x12C9D4u);
    ctx->pc = 0x12C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9CCu;
    // 0x12c9d0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x12C9CCu, 0x12C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9D4u;
label_12c9d4:
    // 0x12c9d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c9d8:
    // 0x12c9d8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x12c9d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_12c9dc:
    // 0x12c9dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_12c9e0:
    if (ctx->pc == 0x12C9E0u) {
        ctx->pc = 0x12C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9DCu;
        // 0x12c9e0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9E4u;
        goto label_12c9e4;
    }
    ctx->pc = 0x12C9DCu;
    {
        const bool branch_taken_0x12c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9DCu;
        // 0x12c9e0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9dc) {
            ctx->pc = 0x12CA10u;
            goto label_12ca10;
        }
    }
    ctx->pc = 0x12C9E4u;
label_12c9e4:
    // 0x12c9e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12c9e8:
    // 0x12c9e8: 0x2442d200  addiu       $v0, $v0, -0x2E00
    ctx->pc = 0x12c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955520));
label_12c9ec:
    // 0x12c9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12c9f0:
    // 0x12c9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12c9f4:
    // 0x12c9f4: 0x800008  jr          $a0
label_12c9f8:
    if (ctx->pc == 0x12C9F8u) {
        ctx->pc = 0x12C9FCu;
        goto label_12c9fc;
    }
    ctx->pc = 0x12C9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C9FCu: goto label_12c9fc;
            case 0x12CA10u: goto label_12ca10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C9F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12C9FCu;
label_12c9fc:
    // 0x12c9fc: 0x3c01be1e  lui         $at, 0xBE1E
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48670 << 16));
label_12ca00:
    // 0x12ca00: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x12ca00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_12ca04:
    // 0x12ca04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ca04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ca08:
    // 0x12ca08: 0x0  nop
    ctx->pc = 0x12ca08u;
    // NOP
label_12ca0c:
    // 0x12ca0c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x12ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12ca10:
    // 0x12ca10: 0x8e0406a8  lw          $a0, 0x6A8($s0)
    ctx->pc = 0x12ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_12ca14:
    // 0x12ca14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ca14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ca18:
    // 0x12ca18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_12ca1c:
    // 0x12ca1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12ca1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12ca20:
    // 0x12ca20: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12ca24:
    // 0x12ca24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x12ca24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12ca28:
    // 0x12ca28: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x12ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_12ca2c:
    // 0x12ca2c: 0xc073c58  jal         func_1CF160
label_12ca30:
    if (ctx->pc == 0x12CA30u) {
        ctx->pc = 0x12CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA2Cu;
        // 0x12ca30: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA34u;
        goto label_12ca34;
    }
    ctx->pc = 0x12CA2Cu;
    SET_GPR_U32(ctx, 31, 0x12CA34u);
    ctx->pc = 0x12CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA2Cu;
    // 0x12ca30: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x12CA2Cu, 0x12CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA34u;
label_12ca34:
    // 0x12ca34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12ca34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12ca38:
    // 0x12ca38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12ca38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12ca3c:
    // 0x12ca3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12ca40:
    // 0x12ca40: 0x3e00008  jr          $ra
label_12ca44:
    if (ctx->pc == 0x12CA44u) {
        ctx->pc = 0x12CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA40u;
        // 0x12ca44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA48u;
        goto label_fallthrough_0x12ca40;
    }
    ctx->pc = 0x12CA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA40u;
        // 0x12ca44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12ca40:
    ctx->pc = 0x12CA48u;
}
