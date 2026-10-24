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

// Function: func_003002B0
// Address: 0x3002b0 - 0x3003f0
void func_003002B0_0x3002b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003002B0_0x3002b0");
#endif

    switch (ctx->pc) {
        case 0x3003d4u: goto label_3003d4;
        default: break;
    }

    ctx->pc = 0x3002b0u;

    // 0x3002b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3002b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3002b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3002b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3002b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3002b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3002bc: 0x90870247  lbu         $a3, 0x247($a0)
    ctx->pc = 0x3002bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 583)));
    // 0x3002c0: 0x2ce2000b  sltiu       $v0, $a3, 0xB
    ctx->pc = 0x3002c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3002c4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3002C4u;
    {
        const bool branch_taken_0x3002c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002C4u;
        // 0x3002c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002c4) {
            ctx->pc = 0x3003C4u;
            goto label_3003c4;
        }
    }
    ctx->pc = 0x3002CCu;
    // 0x3002cc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3002ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3002d0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3002d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3002d4: 0x2442fbd0  addiu       $v0, $v0, -0x430
    ctx->pc = 0x3002d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966224));
    // 0x3002d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3002d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3002dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3002dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3002e0: 0x800008  jr          $a0
    ctx->pc = 0x3002E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3002E8u: goto label_3002e8;
            case 0x3002FCu: goto label_3002fc;
            case 0x300310u: goto label_300310;
            case 0x300324u: goto label_300324;
            case 0x300338u: goto label_300338;
            case 0x30034Cu: goto label_30034c;
            case 0x300360u: goto label_300360;
            case 0x300374u: goto label_300374;
            case 0x300388u: goto label_300388;
            case 0x30039Cu: goto label_30039c;
            case 0x3003B0u: goto label_3003b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3002E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3002E8u;
label_3002e8:
    // 0x3002e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3002e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3002ec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3002ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3002f0: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x3002f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x3002f4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3002F4u;
    {
        const bool branch_taken_0x3002f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002F4u;
        // 0x3002f8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002f4) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x3002FCu;
label_3002fc:
    // 0x3002fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3002fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x300300: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x300300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x300304: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x300304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x300308: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x300308u;
    {
        const bool branch_taken_0x300308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300308u;
        // 0x30030c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300308) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x300310u;
label_300310:
    // 0x300310: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x300310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x300314: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x300314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x300318: 0x344200a1  ori         $v0, $v0, 0xA1
    ctx->pc = 0x300318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)161);
    // 0x30031c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x30031Cu;
    {
        const bool branch_taken_0x30031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30031Cu;
        // 0x300320: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30031c) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x300324u;
label_300324:
    // 0x300324: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x300324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x300328: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x300328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x30032c: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x30032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x300330: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x300330u;
    {
        const bool branch_taken_0x300330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300330u;
        // 0x300334: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300330) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x300338u;
label_300338:
    // 0x300338: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x300338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30033c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x30033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x300340: 0x34420049  ori         $v0, $v0, 0x49
    ctx->pc = 0x300340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)73);
    // 0x300344: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x300344u;
    {
        const bool branch_taken_0x300344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300344u;
        // 0x300348: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300344) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x30034Cu;
label_30034c:
    // 0x30034c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x30034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x300350: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x300350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x300354: 0x34420068  ori         $v0, $v0, 0x68
    ctx->pc = 0x300354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x300358: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x300358u;
    {
        const bool branch_taken_0x300358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300358u;
        // 0x30035c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300358) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x300360u;
label_300360:
    // 0x300360: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x300360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x300364: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x300364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x300368: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x300368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x30036c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30036Cu;
    {
        const bool branch_taken_0x30036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30036Cu;
        // 0x300370: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30036c) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x300374u;
label_300374:
    // 0x300374: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x300374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x300378: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x300378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x30037c: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x30037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x300380: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x300380u;
    {
        const bool branch_taken_0x300380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300380u;
        // 0x300384: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300380) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x300388u;
label_300388:
    // 0x300388: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x300388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30038c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x30038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x300390: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x300390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x300394: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x300394u;
    {
        const bool branch_taken_0x300394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300394u;
        // 0x300398: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300394) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x30039Cu;
label_30039c:
    // 0x30039c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x30039cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3003a0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3003a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3003a4: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x3003a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x3003a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3003A8u;
    {
        const bool branch_taken_0x3003a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003A8u;
        // 0x3003ac: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003a8) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x3003B0u;
label_3003b0:
    // 0x3003b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3003b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3003b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3003b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3003b8: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x3003b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3003bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3003BCu;
    {
        const bool branch_taken_0x3003bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003BCu;
        // 0x3003c0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003bc) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x3003C4u;
label_3003c4:
    // 0x3003c4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3003c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3003c8: 0x90860102  lbu         $a2, 0x102($a0)
    ctx->pc = 0x3003c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 258)));
    // 0x3003cc: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x3003CCu;
    SET_GPR_U32(ctx, 31, 0x3003D4u);
    ctx->pc = 0x3003D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003CCu;
    // 0x3003d0: 0x24a5fa38  addiu       $a1, $a1, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x3003CCu, 0x3003D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003D4u;
label_3003d4:
    // 0x3003d4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x3003d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3003d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3003d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3003dc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3003dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3003e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3003e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3003e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3003E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003E4u;
        // 0x3003e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3003E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3003ECu;
    // 0x3003ec: 0x0  nop
    ctx->pc = 0x3003ecu;
    // NOP
    ctx->pc = 0x3003f0u;
}
